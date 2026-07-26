/*
 * XREFs of ndisEnumerateInterfaces @ 0x140175F50
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x14017F9C0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisGetNsiClientInfo@@YAXPEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x14002A160 (-ndisGetNsiClientInfo@@YAXPEAU_NDIS_NSI_CLIENT_INFO@@@Z.c)
 *     ?ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_INFO@@E@Z @ 0x1400469F0 (-ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_IN.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

__int64 __fastcall ndisEnumerateInterfaces(char *a1, size_t Size, _DWORD *a3)
{
  __int64 v4; // rbp
  __int64 v6; // r14
  char *v7; // r13
  KIRQL v8; // al
  struct _NDIS_M_DRIVER_BLOCK *v9; // rsi
  unsigned int v10; // r14d
  KSPIN_LOCK *p_SpinLock; // r15
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  char *v13; // r15
  unsigned int v14; // edx
  char *v15; // r15
  unsigned int Length; // eax
  __int64 v17; // rax
  unsigned int v18; // ecx
  __int64 v19; // rax
  __int64 result; // rax
  KIRQL v21; // [rsp+20h] [rbp-68h]
  char *v22; // [rsp+28h] [rbp-60h]
  __int128 v23; // [rsp+30h] [rbp-58h] BYREF
  __int64 v24; // [rsp+40h] [rbp-48h]

  v4 = (unsigned int)Size;
  v23 = 0LL;
  v24 = 0LL;
  ndisGetNsiClientInfo((struct _NDIS_NSI_CLIENT_INFO *)&v23);
  *a3 = 0;
  if ( (unsigned int)v4 < 0x30 )
    return 3221225507LL;
  v6 = (unsigned int)v4;
  memset(a1, 0, (unsigned int)v4);
  v22 = &a1[v4];
  v7 = a1 + 16;
  v8 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v9 = ndisMiniDriverList;
  v21 = v8;
  if ( ndisMiniDriverList )
  {
    v10 = v4 - 48;
    do
    {
      p_SpinLock = &v9->Ref.SpinLock;
      KeAcquireSpinLockAtDpcLevel(&v9->Ref.SpinLock);
      MiniportQueue = v9->MiniportQueue;
      if ( MiniportQueue )
      {
        v13 = v22;
        do
        {
          if ( MiniportQueue->PnPDeviceState == NdisPnPDeviceStarted
            && ndisIsCompartmentAccessibleByClient(
                 MiniportQueue->IfBlock->Compartment,
                 (const struct _NDIS_NSI_CLIENT_INFO *)&v23,
                 0) )
          {
            ++*((_DWORD *)a1 + 1);
            v14 = MiniportQueue->pAdapterInstanceName->Length + MiniportQueue->MiniportName.Length + 32;
            *((_DWORD *)a1 + 2) += v14;
            if ( v10 >= v14 )
            {
              ++*(_DWORD *)a1;
              v10 -= v14;
              v15 = &v13[-MiniportQueue->MiniportName.Length];
              *((_QWORD *)v7 + 1) = v15;
              Length = MiniportQueue->MiniportName.Length;
              *(_WORD *)v7 = Length;
              *((_WORD *)v7 + 1) = Length;
              memmove(v15, MiniportQueue->MiniportName.Buffer, Length);
              v17 = 0LL;
              if ( *((_QWORD *)v7 + 1) )
                v17 = *((_QWORD *)v7 + 1) - (_QWORD)a1;
              *((_QWORD *)v7 + 1) = v17;
              v13 = &v15[-MiniportQueue->pAdapterInstanceName->Length];
              *((_QWORD *)v7 + 3) = v13;
              v18 = MiniportQueue->pAdapterInstanceName->Length;
              *((_WORD *)v7 + 8) = v18;
              *((_WORD *)v7 + 9) = v18;
              memmove(v13, MiniportQueue->pAdapterInstanceName->Buffer, v18);
              v19 = 0LL;
              if ( *((_QWORD *)v7 + 3) )
                v19 = *((_QWORD *)v7 + 3) - (_QWORD)a1;
              *((_QWORD *)v7 + 3) = v19;
              v7 += 32;
            }
          }
          MiniportQueue = MiniportQueue->NextMiniport;
        }
        while ( MiniportQueue );
        v22 = v13;
        p_SpinLock = &v9->Ref.SpinLock;
      }
      KeReleaseSpinLockFromDpcLevel(p_SpinLock);
      v9 = v9->NextDriver;
    }
    while ( v9 );
    v6 = v4;
    v8 = v21;
  }
  KeReleaseSpinLock(&ndisMiniDriverListLock, v8);
  result = v6 - 48 < (unsigned __int64)*((unsigned int *)a1 + 2) ? 0x80000005 : 0;
  *a3 = v4;
  return result;
}
