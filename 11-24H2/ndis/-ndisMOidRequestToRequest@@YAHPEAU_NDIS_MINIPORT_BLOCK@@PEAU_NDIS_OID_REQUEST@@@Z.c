/*
 * XREFs of ?ndisMOidRequestToRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140085240
 * Callers:
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14000A5A0 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqD @ 0x1400158F0 (WPP_RECORDER_SF_qqD.c)
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140040D60 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     WPP_RECORDER_SF_qqDd @ 0x14004B090 (WPP_RECORDER_SF_qqDd.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x140074C20 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisMOidRequestToRequest(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int InformationBufferLength)
{
  NDIS_OID Oid; // r12d
  struct _NDIS_OID_REQUEST *v4; // r14
  char v6; // bp
  __int64 Clock; // r15
  unsigned int v8; // esi
  __int64 Pool2; // rdi
  __int64 v10; // rsi
  PVOID InformationBuffer; // r9
  UINT BytesNeeded; // ecx
  unsigned int Flags; // eax
  int v14; // ecx
  int v15; // ecx
  unsigned int v16; // eax
  __int64 v17; // rax
  _NDIS_REQUEST *PendingRequest; // rbp
  char v20[4]; // [rsp+38h] [rbp-40h]
  char v21[4]; // [rsp+40h] [rbp-38h]

  Oid = a2->DATA.QUERY_INFORMATION.Oid;
  v4 = a2;
  v6 = 0;
  Clock = 0LL;
  v8 = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v20 = a2->DATA.QUERY_INFORMATION.Oid;
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Eu,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a1,
      (char)a2,
      *(_DWORD *)v20);
  }
  if ( v4->RequestType == NdisRequestMethod )
  {
    v8 = -1073741637;
    goto LABEL_28;
  }
  Pool2 = ExAllocatePool2(64LL, 176LL, 1701987406LL);
  if ( Pool2 )
  {
    v10 = Pool2 + 64;
    *(_DWORD *)(Pool2 + 32) = v4->RequestType;
    InformationBuffer = v4->DATA.QUERY_INFORMATION.InformationBuffer;
    InformationBufferLength = v4->DATA.QUERY_INFORMATION.InformationBufferLength;
    LODWORD(a2) = v4->DATA.QUERY_INFORMATION.BytesWritten;
    BytesNeeded = v4->DATA.QUERY_INFORMATION.BytesNeeded;
    *(_DWORD *)(Pool2 + 40) = v4->DATA.QUERY_INFORMATION.Oid;
    *(_QWORD *)(Pool2 + 48) = InformationBuffer;
    *(_DWORD *)(Pool2 + 56) = InformationBufferLength;
    *(_DWORD *)(Pool2 + 60) = (_DWORD)a2;
    *(_DWORD *)(Pool2 + 64) = BytesNeeded;
    *(_DWORD *)(Pool2 + 24) |= 0x400u;
    a1->PendingRequest = (_NDIS_REQUEST *)Pool2;
    Flags = a1->Flags;
    *(_QWORD *)(Pool2 + 8) = v4;
    if ( (Flags & 0x20000) != 0 )
    {
      v8 = a1->DriverHandle->MiniportCharacteristics.Ndis50Chars.CoRequestHandler(
             a1->MiniportAdapterContext,
             0LL,
             (_NDIS_REQUEST *)Pool2);
LABEL_25:
      if ( v8 != 259 )
      {
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        PendingRequest = a1->PendingRequest;
        a1->PendingRequest = 0LL;
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        if ( PendingRequest )
        {
          v4->DATA.QUERY_INFORMATION.BytesWritten = PendingRequest->DATA.QUERY_INFORMATION.BytesWritten;
          v4->DATA.QUERY_INFORMATION.BytesNeeded = PendingRequest->DATA.QUERY_INFORMATION.BytesNeeded;
          ExFreePoolWithTag(PendingRequest, 0);
        }
      }
      goto LABEL_28;
    }
    if ( (a1->Flags & 0x40000) == 0 )
    {
      KeAcquireSpinLockAtDpcLevel(&a1->Lock);
      for ( a1->MiniportThread = KeGetCurrentThread(); a1->LockAcquired; a1->MiniportThread = KeGetCurrentThread() )
      {
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        KeStallExecutionProcessor(1u);
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
      }
      a1->LockAcquired = 1;
      a1->LockThread = KeGetCurrentThread();
      a1->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&a1->Lock);
      v10 = Pool2 + 64;
    }
    if ( HIBYTE(dword_14011D060) )
    {
      v6 = 1;
      ndisTraceDpcStart(a1, 8);
      Clock = WmiGetClock(0LL, 0LL);
    }
    v14 = *(_DWORD *)(Pool2 + 32);
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( !v15 )
      {
        v16 = ((__int64 (__fastcall *)(void *, _QWORD, _QWORD, _QWORD, __int64, __int64))a1->DriverHandle->MiniportDriverCharacteristics.CheckForHangHandlerEx)(
                a1->MiniportAdapterContext,
                *(unsigned int *)(Pool2 + 40),
                *(_QWORD *)(Pool2 + 48),
                *(unsigned int *)(Pool2 + 56),
                Pool2 + 60,
                v10);
LABEL_20:
        v8 = v16;
        goto LABEL_21;
      }
      if ( v15 != 1 )
      {
        v8 = -1073741637;
LABEL_21:
        if ( v6 )
        {
          v17 = WmiGetClock(0LL, 0LL);
          ndisTraceDpcEnd(a1, 8, v17 - Clock);
        }
        if ( (a1->Flags & 0x40000) == 0 )
        {
          KeAcquireSpinLockAtDpcLevel(&a1->Lock);
          a1->LockAcquired = 0;
          a1->LockThread = 0LL;
          a1->MiniportThread = 0LL;
          KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        }
        goto LABEL_25;
      }
    }
    v16 = ((__int64 (__fastcall *)(void *, _QWORD, _QWORD, _QWORD, __int64, __int64))a1->DriverHandle->MiniportDriverCharacteristics.OidRequestHandler)(
            a1->MiniportAdapterContext,
            *(unsigned int *)(Pool2 + 40),
            *(_QWORD *)(Pool2 + 48),
            *(unsigned int *)(Pool2 + 56),
            Pool2 + 60,
            v10);
    goto LABEL_20;
  }
LABEL_28:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v21 = v8;
    WPP_RECORDER_SF_qqDd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      InformationBufferLength,
      0x1Fu,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a1,
      (char)v4,
      Oid,
      *(_DWORD *)v21);
  }
  return v8;
}
