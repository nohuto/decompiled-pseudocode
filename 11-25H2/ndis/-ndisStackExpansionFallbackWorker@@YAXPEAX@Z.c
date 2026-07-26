/*
 * XREFs of ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x1400A3AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1400105A0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x140018580 (-ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z.c)
 *     NdisFReturnNetBufferLists @ 0x14001E7D0 (NdisFReturnNetBufferLists.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x14001F290 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisFSendNetBufferListsComplete @ 0x1400207A0 (NdisFSendNetBufferListsComplete.c)
 *     ?ndisFDoOidRequestInternal@@YAXPEAX@Z @ 0x1400218B0 (-ndisFDoOidRequestInternal@@YAXPEAX@Z.c)
 *     ?ndisFOidRequestCompleteInternal@@YAXPEAX@Z @ 0x140022730 (-ndisFOidRequestCompleteInternal@@YAXPEAX@Z.c)
 *     ?ndisFNetPnPEventInternal@@YAXPEAX@Z @ 0x140056D10 (-ndisFNetPnPEventInternal@@YAXPEAX@Z.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x140062190 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z @ 0x140068E40 (-ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z.c)
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140069920 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFDirectOidRequestCompleteInternal@@YAXPEAX@Z @ 0x1400CE770 (-ndisFDirectOidRequestCompleteInternal@@YAXPEAX@Z.c)
 */

void __fastcall ndisStackExpansionFallbackWorker(struct _NDIS_FILTER_BLOCK *a1)
{
  __int128 v2; // xmm0
  KIRQL v3; // dl
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  struct _NET_BUFFER_LIST *v6; // rdi
  struct _NET_BUFFER_LIST *v7; // rbx
  struct _NDIS_STATUS_INDICATION *v8; // rbx
  struct _NDIS_STATUS_INDICATION *v9; // rdi
  struct _KEVENT *v10; // r14
  KIRQL v11; // dl
  char *v12; // r14
  char *v13; // rbx
  struct _KEVENT *v14; // rdi
  PNET_BUFFER_LIST v15; // rdi
  char *v16; // rax
  struct _KEVENT *v17; // rbx
  struct _NET_BUFFER_LIST *v18; // rbx
  struct _NET_BUFFER_LIST *v19; // rbx
  char v20; // [rsp+30h] [rbp-39h]
  _QWORD Parameter[3]; // [rsp+40h] [rbp-29h] BYREF
  PNET_BUFFER_LIST v22; // [rsp+58h] [rbp-11h]
  __int128 v23; // [rsp+60h] [rbp-9h]
  PVOID P[2]; // [rsp+70h] [rbp+7h]
  PNET_BUFFER_LIST NetBufferList[2]; // [rsp+80h] [rbp+17h]
  PNET_BUFFER_LIST NetBufferLists; // [rsp+90h] [rbp+27h]
  KIRQL NewIrql; // [rsp+D0h] [rbp+67h] BYREF

  NewIrql = 0;
  Parameter[0] = 0LL;
  Parameter[2] = 0LL;
  NDIS_ACQUIRE_FILTER_SPIN_LOCK(a1, &NewIrql);
  v2 = *(_OWORD *)&a1->StackExpansionFallback.PendingWork.IssueOidRequest;
  v3 = NewIrql;
  v4 = *(_OWORD *)&a1->StackExpansionFallback.PendingWork.DevicePnPEvents;
  a1->StackExpansionFallback.WorkItemQueued = 0;
  v20 = v2;
  v23 = v2;
  v5 = *(_OWORD *)&a1->StackExpansionFallback.PendingWork.StatusIndications;
  *(_OWORD *)NetBufferList = v4;
  *(_OWORD *)P = v5;
  *(_QWORD *)&v5 = a1->StackExpansionFallback.PendingWork.ReceivedNblsToComplete;
  *(_OWORD *)&a1->StackExpansionFallback.PendingWork.IssueOidRequest = 0LL;
  *(_OWORD *)&a1->StackExpansionFallback.PendingWork.StatusIndications = 0LL;
  *(_OWORD *)&a1->StackExpansionFallback.PendingWork.DevicePnPEvents = 0LL;
  a1->StackExpansionFallback.PendingWork.ReceivedNblsToComplete = 0LL;
  a1->LockThread = 0LL;
  NetBufferLists = (PNET_BUFFER_LIST)v5;
  KeReleaseSpinLock(&a1->Lock, v3);
  Parameter[1] = a1;
  if ( v20 )
    ndisFDoOidRequestInternal((char *)a1);
  if ( BYTE1(v23) )
    ndisFOidRequestCompleteInternal(a1);
  v6 = (struct _NET_BUFFER_LIST *)*((_QWORD *)&v23 + 1);
  if ( *((_QWORD *)&v23 + 1) )
  {
    do
    {
      v7 = (struct _NET_BUFFER_LIST *)v6->ProtocolReserved[1];
      v22 = v6;
      v6 = v7;
      ndisFDirectOidRequestCompleteInternal(Parameter);
    }
    while ( v7 );
    *((_QWORD *)&v23 + 1) = 0LL;
  }
  v8 = (struct _NDIS_STATUS_INDICATION *)P[0];
  if ( P[0] )
  {
    do
    {
      v9 = v8;
      v8 = (struct _NDIS_STATUS_INDICATION *)v8->NdisReserved[0];
      v10 = (struct _KEVENT *)v9->NdisReserved[1];
      v9->NdisReserved[1] = 0LL;
      ndisFIndicateStatusInternal(a1, v9);
      if ( v10 )
      {
        KeSetEvent(v10, 0, 0);
      }
      else
      {
        ndisDereferenceRef(&a1->PnPRef.SpinLock, 1u);
        ExFreePoolWithTag(v9, 0);
      }
    }
    while ( v8 );
    P[0] = 0LL;
  }
  NDIS_ACQUIRE_FILTER_SPIN_LOCK(a1, &NewIrql);
  if ( !a1->StackExpansionFallback.PendingWork.StatusIndications )
    a1->StatusIndicationsQueued = 0;
  v11 = NewIrql;
  a1->LockThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v11);
  v12 = (char *)P[1];
  while ( v12 )
  {
    v13 = v12 + 32;
    v22 = (PNET_BUFFER_LIST)v12;
    v14 = (struct _KEVENT *)*((_QWORD *)v12 + 4);
    v12 = (char *)*((_QWORD *)v12 + 7);
    *(_QWORD *)v13 = 0LL;
    ndisFNetPnPEventInternal(Parameter);
    *((_DWORD *)v13 + 2) = Parameter[0];
    KeSetEvent(v14, 0, 0);
  }
  v15 = NetBufferList[0];
  while ( v15 )
  {
    v16 = (char *)&v15->ParentNetBufferList + 4;
    v22 = v15;
    v17 = *(struct _KEVENT **)((char *)&v15->NdisPoolHandle + 4);
    v15 = *(_NET_BUFFER_LIST **)((char *)&v15->ParentNetBufferList + 4);
    *((_QWORD *)v16 + 1) = 0LL;
    ndisFDevicePnPEventNotifyInternal(Parameter);
    KeSetEvent(v17, 0, 0);
  }
  v18 = NetBufferList[1];
  if ( NetBufferList[1] )
  {
    if ( *(_DWORD *)ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(
        NetBufferList[1],
        (struct NDIS_NBL_TRACKER_HANDLE__ *)0xA0,
        (unsigned __int64)a1->NblTracker,
        0x91u,
        0);
    NdisFSendNetBufferListsComplete(a1, v18, 0);
  }
  v19 = NetBufferLists;
  if ( NetBufferLists )
  {
    if ( *(_DWORD *)ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(
        NetBufferLists,
        (struct NDIS_NBL_TRACKER_HANDLE__ *)0xA0,
        (unsigned __int64)a1->NblTracker,
        0x8Bu,
        0);
    NdisFReturnNetBufferLists(a1, v19, 0);
  }
  ndisDereferenceFilter(a1, 1u);
}
