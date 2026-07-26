/*
 * XREFs of ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140037AD0
 * Callers:
 *     ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140021AA0 (-ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x140038F10 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 *     ?ndisQueuedCheckForHang@@YAXPEAX@Z @ 0x140076710 (-ndisQueuedCheckForHang@@YAXPEAX@Z.c)
 *     ?ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z @ 0x1400876A0 (-ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140019EA0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z @ 0x1400275B0 (-NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x140031540 (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 *     ?ndisIncrementAsyncIdleCountersLocked@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x140037E50 (-ndisIncrementAsyncIdleCountersLocked@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@KW4_NDIS_SS_BUSY_REASON@@.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x140038080 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140038460 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x140038860 (McTemplateK0qq_EtwWriteTransfer.c)
 *     PktMonClientNblDropNdis @ 0x1400410D0 (PktMonClientNblDropNdis.c)
 *     ?ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z @ 0x14008D800 (-ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?NdisClassifyNblChain2@@YAXPEAU_NET_BUFFER_LIST@@P6A_KPEAX0@Z1PEAUNBL_QUEUE_t@@3@Z @ 0x1400C2C7C (-NdisClassifyNblChain2@@YAXPEAU_NET_BUFFER_LIST@@P6A_KPEAX0@Z1PEAUNBL_QUEUE_t@@3@Z.c)
 *     ?ndisDequeueDirectOidsByRequestId@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAXPEAU_LIST_ENTRY@@@Z @ 0x1400C2D44 (-ndisDequeueDirectOidsByRequestId@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ndisQueueReceiveNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1400C2E90 (-ndisQueueReceiveNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@@Z.c)
 */

bool __fastcall ndisWdfSetBusyAsync(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // rbx
  struct _NET_BUFFER_LIST *v7; // rdi
  unsigned int v10; // r12d
  unsigned __int64 (*v11)(void *, struct _NET_BUFFER_LIST *); // rdx
  KIRQL v12; // r15
  char v13; // di
  char v15; // r15
  _QWORD *v16; // r15
  _QWORD *v17; // rax
  char v18; // r13
  __int64 v19; // rcx
  int v20; // r8d
  _QWORD *v21; // rdx
  _QWORD *v22; // rax
  _QWORD *v23; // r15
  struct _NET_BUFFER_LIST *v24; // rcx
  struct _LIST_ENTRY v25; // [rsp+30h] [rbp-30h] BYREF
  __int64 v26; // [rsp+40h] [rbp-20h] BYREF
  __int64 *v27; // [rsp+48h] [rbp-18h]
  _QWORD v28[2]; // [rsp+50h] [rbp-10h] BYREF
  KIRQL v29; // [rsp+A0h] [rbp+40h]

  v5 = *(_QWORD *)(a1 + 4448);
  v25.Blink = &v25;
  v7 = 0LL;
  v25.Flink = &v25;
  v10 = 0;
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5);
  v29 = v12;
  if ( (*(_DWORD *)(v5 + 512)
     || *(_DWORD *)(v5 + 516)
     || *(_DWORD *)(v5 + 528)
     || *(_DWORD *)(v5 + 532)
     || *(_DWORD *)(v5 + 520)
     || *(_DWORD *)(v5 + 524)
     || *(_DWORD *)(v5 + 576)
     || *(_DWORD *)(v5 + 508))
    && KeReadStateEvent((PRKEVENT)(v5 + 272)) )
  {
    v13 = ndisIncrementAsyncIdleCountersLocked(v5, a2, a3);
    ndisSelectiveSuspendSetResumeBusyReason(v5, 0LL, a3, 0LL);
    KeReleaseSpinLock((PKSPIN_LOCK)v5, v12);
    return v13;
  }
  if ( a3 == 54 )
    goto LABEL_25;
  v15 = 0;
  v25.Blink = &v25;
  v25.Flink = &v25;
  switch ( a3 )
  {
    case '1':
      v18 = 0;
      goto LABEL_35;
    case '3':
      ndisDequeueDirectOidsByRequestId((struct _NDIS_SELECTIVE_SUSPEND *)v5, (void *)a4, &v25);
LABEL_57:
      KeReleaseSpinLock((PKSPIN_LOCK)v5, v29);
      goto LABEL_39;
    case '5':
      v23 = (_QWORD *)(v5 + 544);
      v24 = *(struct _NET_BUFFER_LIST **)(v5 + 544);
      if ( v24 )
      {
        v26 = 0LL;
        v27 = &v26;
        v28[0] = 0LL;
        v28[1] = v28;
        NdisClassifyNblChain2(v24, v11, (void *)a4, (struct NBL_QUEUE_t *)&v26, (struct NBL_QUEUE_t *)v28);
        if ( *v23 != v26 )
        {
          if ( v26 )
          {
            *v23 = v26;
            *(_QWORD *)(v5 + 552) = v27;
            v27 = &v26;
            v26 = 0LL;
          }
          else
          {
            *v23 = 0LL;
            *(_QWORD *)(v5 + 552) = v5 + 544;
          }
        }
        v7 = (struct _NET_BUFFER_LIST *)v28[0];
        KeReleaseSpinLock((PKSPIN_LOCK)v5, v29);
        goto LABEL_38;
      }
      goto LABEL_57;
    case '4':
      v16 = 0LL;
      if ( *(_DWORD *)ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal((struct _NET_BUFFER_LIST *)a4, 0LL, *(_QWORD *)(v5 + 608), 1u, 1u);
      v17 = (_QWORD *)a4;
      if ( a4 )
      {
        do
        {
          v17[14] = a5;
          v16 = v17;
          v17 = (_QWORD *)*v17;
        }
        while ( v17 );
      }
      **(_QWORD **)(v5 + 552) = a4;
      *(_QWORD *)(v5 + 552) = v16;
      *(_DWORD *)(v5 + 632) = 0;
      break;
    case '2':
      v21 = *(_QWORD **)(v5 + 592);
      v22 = (_QWORD *)(a4 + 72);
      if ( *v21 != v5 + 584 )
        __fastfail(3u);
      *v22 = v5 + 584;
      *(_QWORD *)(a4 + 80) = v21;
      *v21 = v22;
      *(_QWORD *)(v5 + 592) = v22;
      *(_DWORD *)(v5 + 632) = *(_DWORD *)(a4 + 32);
      break;
  }
LABEL_25:
  v15 = 1;
  if ( *(_DWORD *)(v5 + 512)
    || *(_DWORD *)(v5 + 516)
    || *(_DWORD *)(v5 + 528)
    || *(_DWORD *)(v5 + 532)
    || *(_DWORD *)(v5 + 520)
    || *(_DWORD *)(v5 + 524)
    || *(_DWORD *)(v5 + 576)
    || *(_DWORD *)(v5 + 508) )
  {
    v18 = 0;
  }
  else
  {
    v18 = 1;
    KeClearEvent((PRKEVENT)(v5 + 272));
    v10 = a3;
  }
  ndisIncrementAsyncIdleCountersLocked(v5, a2, a3);
LABEL_35:
  KeReleaseSpinLock((PKSPIN_LOCK)v5, v29);
  if ( v15 )
  {
    if ( v18 )
      ndisWdfAcquirePowerReferenceHelper((struct _NDIS_MINIPORT_BLOCK *)a1, 0, 1u);
LABEL_38:
    if ( v7 )
    {
      if ( byte_14011D800 && (*(_DWORD *)(a1 + 5872) & 2) != 0 )
        PktMonClientNblDropNdis(a1 + 5816, (_DWORD)v7, v20, 2, -1071448017, -536866804);
      NdisSetStatusInNblChain(v7, -1071448052);
      ndisMSendNetBufferListsCompleteInternal((struct _NDIS_FILTER_BLOCK *)a1, v7, 0, 0);
    }
  }
LABEL_39:
  if ( v25.Flink != &v25 )
    ndisCancelDequeuedDirectOidRequests((struct _NDIS_MINIPORT_BLOCK *)a1, &v25);
  if ( v10 )
  {
    if ( (byte_14011B101 & 8) != 0 )
      McTemplateK0qq_EtwWriteTransfer(v19, ">(", a1 + 4008, (*(_QWORD *)(a1 + 4024) >> 24) & 0xFFFFFFLL, v10);
  }
  return a3 == 54;
}
