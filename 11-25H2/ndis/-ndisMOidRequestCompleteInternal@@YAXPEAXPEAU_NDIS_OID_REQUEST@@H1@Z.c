/*
 * XREFs of ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x140024E00
 * Callers:
 *     ?ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1400255B0 (-ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x14003FBC0 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1400403A0 (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisReplayDirectOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@E@Z @ 0x140069780 (-ndisReplayDirectOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@E@Z.c)
 *     ?ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x140077570 (-ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@.c)
 *     ?ndisCompleteLegacyRequest@@YAXPEAXHPEAU_NDIS_REQUEST@@@Z @ 0x14007A8C0 (-ndisCompleteLegacyRequest@@YAXPEAXHPEAU_NDIS_REQUEST@@@Z.c)
 *     ?ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140086120 (-ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z @ 0x1400990A0 (-ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140007E60 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     NdisReferenceWithTag @ 0x14000E820 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x140010990 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140010F10 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z @ 0x140015040 (-ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z.c)
 *     ?ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z @ 0x140023320 (-ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400235C0 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005A650 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x140096020 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __fastcall ndisMOidRequestCompleteInternal(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int a3,
        struct _NDIS_OID_REQUEST *a4)
{
  int v4; // esi
  int v5; // esi
  struct _KEVENT *AllDirectRequestsCompletedEvent; // r15
  KIRQL v9; // al
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rcx
  KIRQL v11; // r14
  int v12; // edx
  __int64 v13; // r8
  int v14; // r9d
  unsigned __int64 *p_Lock; // rdi
  KIRQL v16; // dl
  int v17; // edx
  KIRQL v18; // al
  NDIS_REFCOUNT_HANDLE__ *v19; // r8
  KIRQL v20; // bp
  __int64 v21; // r9
  unsigned int v22; // edi
  int v23; // edx
  unsigned __int8 i; // al
  _BYTE *v25; // rdx
  char v26; // cl
  struct _KEVENT *RemoveReadyEvent; // rcx
  NDIS_REFCOUNT_HANDLE__ *v28; // rdi
  unsigned int v29; // r9d
  KIRQL v30; // dl
  KIRQL v31; // dl
  KIRQL v32; // dl
  __int64 v33; // [rsp+30h] [rbp-68h]
  struct _NDIS_MINIPORT_BLOCK *v34; // [rsp+40h] [rbp-58h] BYREF
  __int128 v35; // [rsp+48h] [rbp-50h]
  __int64 v36; // [rsp+58h] [rbp-40h]
  struct _NDIS_OID_REQUEST *v37; // [rsp+60h] [rbp-38h]
  int v38; // [rsp+68h] [rbp-30h]
  int v39; // [rsp+6Ch] [rbp-2Ch]
  unsigned __int8 v40; // [rsp+B0h] [rbp+18h] BYREF

  v4 = *(_DWORD *)&a2->NdisReserved[16];
  v36 = 0LL;
  v5 = v4 & 0x200000;
  v40 = 0;
  AllDirectRequestsCompletedEvent = 0LL;
  v35 = 0LL;
  v37 = a2;
  v38 = a3;
  v34 = a1;
  v39 = (a4 != 0LL) | 2;
  v9 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
  RefCountTracker = a1->RefCountTracker;
  v11 = v9;
  if ( RefCountTracker )
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker, 0x4Bu);
  ++a1->Ref.ReferenceCount;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x14u,
      0xDu,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      (char)a1,
      a1->Ref.ReferenceCount);
  KeReleaseSpinLock(&a1->Ref.SpinLock, v11);
  if ( a4 )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &v40);
    a1->WSyncFlags &= ~1u;
    p_Lock = &a1->Lock;
    v30 = v40;
    a1->ProcessedOidRequest = 0LL;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v30);
  }
  else
  {
    p_Lock = &a1->Lock;
  }
  ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)&v34, v12, v13, v14);
  v40 = KeAcquireSpinLockRaiseToDpc(p_Lock);
  a1->MiniportThread = KeGetCurrentThread();
  if ( v5 )
  {
    if ( (a1->PnPFlags & 0x20000) != 0 && !a1->DirectOidRequestCount )
    {
      AllDirectRequestsCompletedEvent = a1->AllDirectRequestsCompletedEvent;
      a1->AllDirectRequestsCompletedEvent = 0LL;
    }
    goto LABEL_11;
  }
  if ( a1->OidRequestList.Flink == &a1->OidRequestList )
  {
    if ( (a1->PnPFlags & 0x20000) != 0 )
    {
      AllDirectRequestsCompletedEvent = a1->AllRequestsCompletedEvent;
      a1->AllRequestsCompletedEvent = 0LL;
    }
LABEL_11:
    v16 = v40;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(p_Lock, v16);
    if ( AllDirectRequestsCompletedEvent )
      KeSetEvent(AllDirectRequestsCompletedEvent, 0, 0);
    goto LABEL_13;
  }
  v31 = v40;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(p_Lock, v31);
  if ( (unsigned int)ndisQueueRequestWorkItem(a1, 0LL, 17) != 259 )
    ndisCancelOidRequestOnMiniport(a1, 0LL, 1u);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &v40);
  v32 = v40;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(p_Lock, v32);
LABEL_13:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v17) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v17,
      20,
      25,
      (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
      (char)a1);
  }
  v18 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
  v19 = a1->RefCountTracker;
  v20 = v18;
  if ( v19 && (unsigned __int64)v19 - 2 > 1 )
  {
    if ( v19 == (NDIS_REFCOUNT_HANDLE__ *)1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
    if ( *((_BYTE *)v19 + 2) <= 0x4Bu )
      ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)v19, 0x4BuLL);
    if ( *((_BYTE *)v19 + 1) )
    {
      if ( *((_BYTE *)v19 + 1) == 1 )
      {
        v28 = v19 + 1202;
        v29 = *((_DWORD *)v19 + 1216);
        if ( v29 >> 17 < 0x3FFE && (unsigned __int16)v29 >> 1 == (v29 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v19 + 1202));
          *((_DWORD *)v28 + 14) &= 0x10001u;
        }
        else
        {
          if ( !((unsigned __int16)v29 >> 1) && (v29 & 1) == 0 )
            goto LABEL_34;
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v19 + 1202), 0);
        }
      }
    }
    else
    {
      v21 = *((_QWORD *)v19 + 1);
      if ( !v21 )
      {
LABEL_21:
        if ( _bittestandreset((signed __int32 *)v19 + 6, 0xBu) )
          goto LABEL_22;
LABEL_34:
        ndisReportRefcountImbalance((ULONG_PTR)v19, 0x4Bu);
      }
      for ( i = 0; ; ++i )
      {
        if ( i >= *((_BYTE *)v19 + 3) )
          goto LABEL_21;
        v25 = (_BYTE *)(v21 + 2LL * i);
        if ( *v25 == 75 )
        {
          v26 = v25[1];
          if ( v26 )
            break;
        }
      }
      v25[1] = v26 - 1;
    }
  }
LABEL_22:
  v22 = a1->Ref.ReferenceCount - 1;
  a1->Ref.ReferenceCount = v22;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v33) = a1->Ref.ReferenceCount;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x14u,
      0xEu,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      (char)a1,
      v33);
  }
  KeReleaseSpinLock(&a1->Ref.SpinLock, v20);
  if ( !v22 )
  {
    RemoveReadyEvent = a1->RemoveReadyEvent;
    if ( RemoveReadyEvent )
      KeSetEvent(RemoveReadyEvent, 0, 0);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v23) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v23,
      20,
      26,
      (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
      (char)a1);
  }
}
