/*
 * XREFs of ?UnblockCpuWaiter@@YA_NPEAUVIDSCH_CPU_WAITER@@PEAU_VIDSCH_SYNC_OBJECT@@PEA_K@Z @ 0x1400342D0
 * Callers:
 *     VidSchiUnwaitMonitoredFences @ 0x14000E4E0 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiUnwaitNativeFenceWaiters @ 0x1400458E8 (VidSchiUnwaitNativeFenceWaiters.c)
 * Callees:
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEBX$00$0ELGHHIEE@@@QEAAPEAPEBXI@Z @ 0x1400346F4 (-AllocateElements@-$NonPagedPoolZeroedArray@PEBX$00$0ELGHHIEE@@@QEAAPEAPEBXI@Z.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$00$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x140034770 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$00$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     McTemplateK0pqXR1PR1qPR1_EtwWriteTransfer @ 0x1400347EC (McTemplateK0pqXR1PR1qPR1_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UnblockCpuWaiter(char *P, struct _VIDSCH_SYNC_OBJECT *a2, unsigned __int64 *a3)
{
  unsigned __int8 v3; // bl
  __int64 v4; // rsi
  unsigned __int64 *v5; // r15
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // r9
  unsigned __int64 **v11; // rax
  char v12; // al
  struct _KEVENT *v14; // rcx
  _QWORD *v15; // rcx
  PVOID *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r8
  char *v21; // rcx
  _QWORD *v22; // rcx
  unsigned int v23; // esi
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // r10
  __int64 v29; // rcx
  __int64 v30; // [rsp+20h] [rbp-49h]
  PVOID v31; // [rsp+50h] [rbp-19h] BYREF
  char v32; // [rsp+58h] [rbp-11h] BYREF
  int v33; // [rsp+60h] [rbp-9h]
  PVOID Pa; // [rsp+68h] [rbp-1h] BYREF
  char v35; // [rsp+70h] [rbp+7h] BYREF
  int v36; // [rsp+78h] [rbp+Fh]
  PVOID v37; // [rsp+80h] [rbp+17h] BYREF
  char v38; // [rsp+88h] [rbp+1Fh] BYREF
  int v39; // [rsp+90h] [rbp+27h]

  v3 = 0;
  v4 = 0LL;
  v5 = a3;
  if ( !*((_DWORD *)P + 50) )
    return v3;
  do
  {
    v8 = *((_QWORD *)P + 4);
    v9 = *(_QWORD *)(v8 + 40 * v4);
    v10 = v8 + 40 * v4;
    if ( v9 )
    {
      v11 = *(unsigned __int64 ***)(v9 + 72);
      if ( *(_DWORD *)(v9 + 48) == 6 )
      {
        a3 = *v11;
      }
      else if ( *(_BYTE *)(v9 + 30) )
      {
        a3 = *v11;
      }
      else
      {
        a3 = (unsigned __int64 *)*(unsigned int *)v11;
      }
      if ( a2 && (struct _VIDSCH_SYNC_OBJECT *)v9 == a2 )
        *v5 = *(_QWORD *)(v10 + 8);
      v10 = *(_QWORD *)(v10 + 8);
      if ( !*(_BYTE *)(v9 + 29) )
      {
        if ( *(_DWORD *)(v9 + 48) == 6 || *(_BYTE *)(v9 + 30) )
        {
          if ( (unsigned __int64)a3 < v10 )
            goto LABEL_11;
        }
        else if ( (int)a3 - (int)v10 < 0 )
        {
LABEL_11:
          v12 = P[208];
          v3 = 0;
          if ( (v12 & 1) == 0 )
            return v3;
          goto LABEL_15;
        }
      }
      v30 = *(unsigned __int8 *)(v9 + 29);
      WdLogSingleEntry4(4LL, v9, a3);
      WdLogGlobalForLineNumber = 27209;
    }
    v12 = P[208];
    v3 = 1;
    if ( (v12 & 1) != 0 )
      goto LABEL_17;
LABEL_15:
    v4 = (unsigned int)(v4 + 1);
  }
  while ( (unsigned int)v4 < *((_DWORD *)P + 50) );
  if ( !v3 )
    return v3;
LABEL_17:
  v14 = (struct _KEVENT *)*((_QWORD *)P + 2);
  if ( (v12 & 4) != 0 )
    ((void (__fastcall *)(struct _KEVENT *, _QWORD, unsigned __int64 *, unsigned __int64, __int64))DxgCoreInterface[72])(
      v14,
      0LL,
      a3,
      v10,
      v30);
  else
    KeSetEvent(v14, 0, 0);
  if ( (byte_140081241 & 1) != 0 )
  {
    v23 = *((_DWORD *)P + 50);
    Pa = 0LL;
    v36 = 0;
    v31 = 0LL;
    v33 = 0;
    v37 = 0LL;
    v39 = 0;
    if ( NonPagedPoolZeroedArray<void const *,1,1265072196>::AllocateElements(&Pa, v23)
      && NonPagedPoolZeroedArray<void const *,1,1265072196>::AllocateElements(&v31, v23)
      && NonPagedPoolZeroedArray<unsigned __int64,1,1265072196>::AllocateElements(&v37, v23) )
    {
      if ( v23 )
      {
        v24 = 0LL;
        v26 = v23;
        v25 = 0LL;
        do
        {
          v27 = *(_QWORD *)(v25 + *((_QWORD *)P + 4));
          *(_QWORD *)((char *)Pa + v24) = v27;
          if ( v27 )
            v28 = *(_QWORD *)(v27 + 16);
          else
            v28 = 0LL;
          *(_QWORD *)((char *)v31 + v24) = v28;
          v29 = *(_QWORD *)(v25 + *((_QWORD *)P + 4) + 8);
          v25 += 40LL;
          *(_QWORD *)((char *)v37 + v24) = v29;
          v24 += 8LL;
          --v26;
        }
        while ( v26 );
      }
      if ( (byte_140081241 & 1) != 0 )
        McTemplateK0pqXR1PR1qPR1_EtwWriteTransfer(
          P[208] & 1,
          v24,
          v25,
          *((_QWORD *)P + 2),
          v23,
          (__int64)v37,
          (__int64)Pa,
          P[208] & 1,
          (__int64)v31);
    }
    if ( v37 != &v38 && v37 )
      ExFreePoolWithTag(v37, 0);
    v37 = 0LL;
    v39 = 0;
    if ( v31 != &v32 && v31 )
      ExFreePoolWithTag(v31, 0);
    v31 = 0LL;
    v33 = 0;
    if ( Pa != &v35 && Pa )
      ExFreePoolWithTag(Pa, 0);
  }
  if ( (P[208] & 2) != 0 )
    ObfDereferenceObject(*((PVOID *)P + 2));
  v15 = *(_QWORD **)P;
  if ( *(char **)(*(_QWORD *)P + 8LL) != P || (v16 = (PVOID *)*((_QWORD *)P + 1), *v16 != P) )
LABEL_53:
    __fastfail(3u);
  *v16 = v15;
  v17 = 0LL;
  for ( v15[1] = v16; (unsigned int)v17 < *((_DWORD *)P + 50); v17 = (unsigned int)(v17 + 1) )
  {
    v18 = *((_QWORD *)P + 4);
    if ( (unsigned int)v17 < *((_DWORD *)P + 50) )
      v18 += 40 * v17;
    v19 = *(_QWORD *)(v18 + 16);
    v20 = v18 + 16;
    if ( v19 )
    {
      if ( *(_QWORD *)(v19 + 8) != v20 )
        goto LABEL_53;
      v22 = *(_QWORD **)(v20 + 8);
      if ( *v22 != v20 )
        goto LABEL_53;
      *v22 = v19;
      *(_QWORD *)(v19 + 8) = v22;
    }
  }
  v21 = (char *)*((_QWORD *)P + 4);
  if ( v21 != P + 40 && v21 )
    ExFreePoolWithTag(v21, 0);
  *((_QWORD *)P + 4) = 0LL;
  *((_DWORD *)P + 50) = 0;
  ExFreePoolWithTag(P, 0);
  return v3;
}
