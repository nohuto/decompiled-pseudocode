/*
 * XREFs of ?ndisMOidRequestToRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140024320
 * Callers:
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400229C0 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140025750 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qqD @ 0x140026FA0 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_qqDd @ 0x1400279F0 (WPP_RECORDER_SF_qqDd.c)
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400451E0 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x140090940 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisMOidRequestToRequest(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int BytesWritten)
{
  NDIS_OID Oid; // r15d
  struct _NDIS_OID_REQUEST *v4; // rbx
  unsigned int v6; // esi
  __int64 Clock; // r14
  __int64 Pool2; // rdi
  PVOID InformationBuffer; // rcx
  UINT BytesNeeded; // r9d
  unsigned int Flags; // eax
  char v12; // r12
  int v13; // ecx
  unsigned int v14; // eax
  _NDIS_REQUEST *PendingRequest; // r14
  __int64 v17; // rax

  Oid = a2->DATA.QUERY_INFORMATION.Oid;
  v4 = a2;
  v6 = -1073741823;
  Clock = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      30,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      (char)a1,
      (char)v4,
      Oid);
  }
  if ( v4->RequestType == NdisRequestMethod )
  {
    v6 = -1073741637;
    goto LABEL_19;
  }
  Pool2 = ExAllocatePool2(64LL, 176LL, 1701987406);
  if ( !Pool2 )
    goto LABEL_19;
  *(_DWORD *)(Pool2 + 32) = v4->RequestType;
  InformationBuffer = v4->DATA.QUERY_INFORMATION.InformationBuffer;
  LODWORD(a2) = v4->DATA.QUERY_INFORMATION.InformationBufferLength;
  BytesWritten = v4->DATA.QUERY_INFORMATION.BytesWritten;
  BytesNeeded = v4->DATA.QUERY_INFORMATION.BytesNeeded;
  *(_DWORD *)(Pool2 + 40) = v4->DATA.QUERY_INFORMATION.Oid;
  *(_QWORD *)(Pool2 + 48) = InformationBuffer;
  *(_DWORD *)(Pool2 + 56) = (_DWORD)a2;
  *(_DWORD *)(Pool2 + 60) = BytesWritten;
  *(_DWORD *)(Pool2 + 64) = BytesNeeded;
  *(_DWORD *)(Pool2 + 24) |= 0x400u;
  Flags = a1->Flags;
  *(_QWORD *)(Pool2 + 8) = v4;
  a1->PendingRequest = (_NDIS_REQUEST *)Pool2;
  if ( (Flags & 0x20000) == 0 )
  {
    if ( (Flags & 0x40000) == 0 )
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
      while ( a1->LockAcquired )
      {
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        KeStallExecutionProcessor(1u);
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
      }
      a1->LockAcquired = 1;
      a1->LockThread = KeGetCurrentThread();
      a1->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    }
    if ( HIBYTE(dword_140127110) )
    {
      v12 = 1;
      ndisTraceDpcStart(a1, 8u);
      Clock = WmiGetClock(0LL, 0LL);
    }
    else
    {
      v12 = 0;
    }
    v13 = *(_DWORD *)(Pool2 + 32);
    if ( v13 == 2 || !v13 )
    {
      v14 = ((__int64 (__fastcall *)(void *, _QWORD, _QWORD, _QWORD, __int64, __int64))a1->DriverHandle->MiniportDriverCharacteristics.OidRequestHandler)(
              a1->MiniportAdapterContext,
              *(unsigned int *)(Pool2 + 40),
              *(_QWORD *)(Pool2 + 48),
              *(unsigned int *)(Pool2 + 56),
              Pool2 + 60,
              Pool2 + 64);
    }
    else
    {
      if ( v13 != 1 )
      {
        v6 = -1073741637;
        goto LABEL_12;
      }
      v14 = ((__int64 (__fastcall *)(void *, _QWORD, _QWORD, _QWORD, __int64, __int64))a1->DriverHandle->MiniportDriverCharacteristics.CheckForHangHandlerEx)(
              a1->MiniportAdapterContext,
              *(unsigned int *)(Pool2 + 40),
              *(_QWORD *)(Pool2 + 48),
              *(unsigned int *)(Pool2 + 56),
              Pool2 + 60,
              Pool2 + 64);
    }
    v6 = v14;
LABEL_12:
    if ( v12 )
    {
      v17 = WmiGetClock(0LL, 0LL);
      ndisTraceDpcEnd(a1, 8u, v17 - Clock);
    }
    if ( (a1->Flags & 0x40000) == 0 )
    {
      KeAcquireSpinLockAtDpcLevel(&a1->Lock);
      a1->LockAcquired = 0;
      a1->LockThread = 0LL;
      a1->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    }
    goto LABEL_16;
  }
  v6 = a1->DriverHandle->MiniportCharacteristics.Ndis50Chars.CoRequestHandler(
         a1->MiniportAdapterContext,
         0LL,
         (_NDIS_REQUEST *)Pool2);
LABEL_16:
  if ( v6 != 259 )
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
LABEL_19:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqDd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      BytesWritten,
      31,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      (char)a1,
      (char)v4,
      Oid,
      v6);
  return v6;
}
