/*
 * XREFs of ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400468C0
 * Callers:
 *     ndisDoPeriodicReceivesIndication @ 0x140043410 (ndisDoPeriodicReceivesIndication.c)
 * Callees:
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14001C7D0 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ?ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x140037030 (-ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x140038170 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisIndicateSortedNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x140039B10 (-ndisIndicateSortedNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140039C20 (-ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140039CC0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisAcquireRWLockRead @ 0x140042EE0 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x140043190 (NdisReleaseRWLock.c)
 *     PktMonClientNblDropNdis @ 0x140046FF0 (PktMonClientNblDropNdis.c)
 */

void __fastcall ndisMDispatchReceiveNetBufferListsWithLock(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  struct _NDIS_FILTER_BLOCK *v6; // rdi
  unsigned int v8; // r15d
  unsigned __int64 RcvLinkSpeedIndicateUp; // rax
  char v10; // bp
  struct _NET_BUFFER_LIST *v11; // r14
  unsigned int Number; // r13d
  struct _NDIS_RCV_TRACKER_ARRAY *v13; // r9
  struct _NDIS_FILTER_BLOCK **v14; // r8
  __int64 v15; // rdx
  __int64 Pool2; // rbx
  unsigned __int64 v17; // rdi
  struct _NET_BUFFER_LIST *Alignment; // rax
  __int64 v19; // rbp
  struct _NET_BUFFER_LIST **v20; // rax
  struct _NDIS_OPEN_BLOCK *v21; // rdx
  struct _NDIS_OPEN_BLOCK *v22; // rdx
  unsigned int v23; // r12d
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v25; // [rsp+34h] [rbp-44h]
  unsigned __int64 v26; // [rsp+38h] [rbp-40h]
  char v30; // [rsp+A0h] [rbp+28h]

  v6 = a1;
  *(_WORD *)&LockState.OldIrql = 0;
  v8 = a5 & 1;
  LockState.Flags = 0;
  RcvLinkSpeedIndicateUp = a1->RcvLinkSpeedIndicateUp;
  v25 = v8;
  v26 = RcvLinkSpeedIndicateUp;
  NdisAcquireRWLockRead(*(PNDIS_RW_LOCK_EX *)(RcvLinkSpeedIndicateUp + 288), &LockState, a5 & 1);
  v10 = 0;
  v11 = 0LL;
  Number = 0;
  v30 = 0;
  if ( (v8 || KeGetCurrentIrql() == 2)
    && ndisPerProcRcvTrackers
    && (Number = KeGetPcr()->Prcb.Number,
        v13 = ndisPerProcRcvTrackers,
        v14 = (struct _NDIS_FILTER_BLOCK **)(2096LL * Number),
        v15 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + (_QWORD)v14),
        (unsigned int)v15 < 3) )
  {
    v30 = 1;
    *(_DWORD *)((char *)ndisPerProcRcvTrackers + (_QWORD)v14) = v15 + 1;
    Pool2 = (__int64)&v14[87 * v15 + 1] + (_QWORD)v13;
  }
  else
  {
    Pool2 = ExAllocatePool2(66LL, 696LL, 538985550);
    if ( !Pool2 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 2;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v15,
          4,
          11,
          (struct _GUID *)&WPP_ab2fd775e6d238d6e5be27dfc6df6673_Traceguids);
      }
      v23 = a5 & 2;
      goto LABEL_26;
    }
  }
  v17 = v6->RcvLinkSpeedIndicateUp;
  *(_BYTE *)(Pool2 + 692) = 0;
  Alignment = a2;
  if ( (a5 & 2) == 0 )
  {
    do
    {
      v11 = Alignment;
      Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    }
    while ( Alignment );
  }
  v19 = *(_QWORD *)(v17 + 328);
  if ( v19 && *(_BYTE *)(*(_QWORD *)(v19 + 24) + 56LL) >= 6u )
  {
    ndisMIndicateNetBufferListsToOpen(*(const struct _NDIS_FILTER_BLOCK **)(v17 + 328), a2, a3, a4, a5);
    v20 = (struct _NET_BUFFER_LIST **)(Pool2 + 64);
    *(_DWORD *)(Pool2 + 80) = 0;
    *(_QWORD *)(Pool2 + 64) = 0LL;
  }
  else
  {
    *(_QWORD *)Pool2 = a1;
    *(_QWORD *)(Pool2 + 32) = v11;
    *(_DWORD *)(Pool2 + 44) = a4;
    *(_QWORD *)(Pool2 + 24) = a2;
    *(_QWORD *)(Pool2 + 8) = v17;
    *(_DWORD *)(Pool2 + 16) = a5;
    *(_DWORD *)(Pool2 + 40) = a3;
    ndisSortNetBufferLists((struct _NDIS_FILTER_BLOCK **)Pool2, v15, v14);
    if ( *(_QWORD *)(Pool2 + 64) || (v20 = (struct _NET_BUFFER_LIST **)(Pool2 + 64), *(_DWORD *)(Pool2 + 688)) )
    {
      if ( !*(_QWORD *)v17 || a3 )
        *(_BYTE *)(Pool2 + 692) = 1;
      else
        ndisIndicateXlatedPacketsToNdis5Protocols((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
      v20 = (struct _NET_BUFFER_LIST **)(Pool2 + 64);
      if ( !v19 )
      {
        v21 = *(struct _NDIS_OPEN_BLOCK **)(v17 + 8);
        if ( v21 )
          ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2, v21);
        v22 = *(struct _NDIS_OPEN_BLOCK **)(v17 + 16);
        if ( v22 )
        {
          if ( (a5 & 2) != 0 )
            ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2, v22);
          else
            ndisIndicateSortedNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
        }
        v20 = (struct _NET_BUFFER_LIST **)(Pool2 + 64);
      }
    }
  }
  v23 = a5 & 2;
  v10 = v30;
  if ( *(_BYTE *)(Pool2 + 692) )
  {
    a2 = *v20;
    v6 = a1;
    v8 = v25;
LABEL_26:
    if ( a2 )
    {
      if ( byte_1401278B0 && ((__int64)v6[4].StackExpansionFallback.WorkItem.WorkerRoutine & 2) != 0 )
        PktMonClientNblDropNdis((_DWORD)v6 + 5816, (_DWORD)a2, (_DWORD)v14, 1, -1073676270, -536866809);
      if ( !v23 )
        ndisReturnNetBufferListsInternal(v6, a2, v8, 0LL);
    }
  }
  if ( v10 )
  {
    --*((_DWORD *)ndisPerProcRcvTrackers + 524 * Number);
  }
  else if ( Pool2 )
  {
    ExFreePoolWithTag((PVOID)Pool2, 0);
  }
  NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(v26 + 288), &LockState);
}
