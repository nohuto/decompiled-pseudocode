/*
 * XREFs of ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140046C70
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14001C7D0 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ?ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x140037030 (-ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x140038170 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisIndicateSortedNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x140039B10 (-ndisIndicateSortedNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140039C20 (-ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140039CC0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     PktMonClientNblDropNdis @ 0x140046FF0 (PktMonClientNblDropNdis.c)
 */

void __fastcall ndisMDispatchReceiveNetBufferLists(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  struct _NET_BUFFER_LIST *v6; // rbp
  struct _NDIS_FILTER_BLOCK *v7; // r13
  unsigned int Number; // esi
  struct _NDIS_RCV_TRACKER_ARRAY *v11; // r9
  struct _NDIS_FILTER_BLOCK **v12; // r8
  __int64 v13; // rdx
  __int64 Pool2; // rdi
  _QWORD *RcvLinkSpeedIndicateUp; // r13
  struct _NET_BUFFER_LIST *Alignment; // rcx
  const struct _NDIS_FILTER_BLOCK *v17; // rsi
  const struct _NDIS_FILTER_BLOCK *v18; // rsi
  unsigned int v19; // ebp
  unsigned int v20; // r15d
  _NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *IterativeDataPathTracker; // r14
  __int64 v22; // rbx
  __int64 v23; // rcx
  struct _NET_BUFFER_LIST *v24; // rdx
  struct _NDIS_OPEN_BLOCK *v25; // rdx
  char v26; // [rsp+30h] [rbp-38h]
  unsigned int v27; // [rsp+34h] [rbp-34h]

  v6 = 0LL;
  v7 = a1;
  v27 = 0;
  v26 = 0;
  if ( ((a5 & 1) != 0 || KeGetCurrentIrql() == 2)
    && ndisPerProcRcvTrackers
    && (Number = KeGetPcr()->Prcb.Number,
        v11 = ndisPerProcRcvTrackers,
        v12 = (struct _NDIS_FILTER_BLOCK **)(2096LL * Number),
        v27 = Number,
        v13 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + (_QWORD)v12),
        (unsigned int)v13 < 3) )
  {
    v26 = 1;
    *(_DWORD *)((char *)ndisPerProcRcvTrackers + (_QWORD)v12) = v13 + 1;
    Pool2 = (__int64)&v12[87 * v13 + 1] + (_QWORD)v11;
  }
  else
  {
    Pool2 = ExAllocatePool2(66LL, 696LL, 538985550);
    if ( !Pool2 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 2;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v13,
          4,
          11,
          (struct _GUID *)&WPP_ab2fd775e6d238d6e5be27dfc6df6673_Traceguids);
      }
      goto LABEL_25;
    }
  }
  RcvLinkSpeedIndicateUp = (_QWORD *)v7->RcvLinkSpeedIndicateUp;
  Alignment = a2;
  *(_BYTE *)(Pool2 + 692) = 0;
  if ( (a5 & 2) == 0 )
  {
    do
    {
      v6 = Alignment;
      Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    }
    while ( Alignment );
  }
  v17 = (const struct _NDIS_FILTER_BLOCK *)RcvLinkSpeedIndicateUp[41];
  if ( v17 && *((_BYTE *)v17->FilterModuleContext + 56) >= 6u )
  {
    ndisMIndicateNetBufferListsToOpen(v17, a2, a3, a4, a5);
    *(_QWORD *)(Pool2 + 64) = 0LL;
    *(_DWORD *)(Pool2 + 80) = 0;
  }
  else
  {
    *(_QWORD *)Pool2 = a1;
    *(_QWORD *)(Pool2 + 24) = a2;
    *(_QWORD *)(Pool2 + 8) = RcvLinkSpeedIndicateUp;
    *(_DWORD *)(Pool2 + 16) = a5;
    *(_QWORD *)(Pool2 + 32) = v6;
    *(_DWORD *)(Pool2 + 40) = a3;
    *(_DWORD *)(Pool2 + 44) = a4;
    ndisSortNetBufferLists((struct _NDIS_FILTER_BLOCK **)Pool2, v13, v12);
    if ( *(_QWORD *)(Pool2 + 64) || *(_DWORD *)(Pool2 + 688) )
    {
      if ( !*RcvLinkSpeedIndicateUp || a3 )
        *(_BYTE *)(Pool2 + 692) = 1;
      else
        ndisIndicateXlatedPacketsToNdis5Protocols((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
      if ( !v17 )
      {
        v18 = (const struct _NDIS_FILTER_BLOCK *)RcvLinkSpeedIndicateUp[1];
        if ( v18 )
        {
          v19 = *(_DWORD *)(Pool2 + 688);
          v20 = *(_DWORD *)(Pool2 + 16) | 2;
          do
          {
            IterativeDataPathTracker = (_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *)v18->IterativeDataPathTracker;
            v22 = 0LL;
            do
            {
              v23 = (unsigned int)v22;
              v24 = *(struct _NET_BUFFER_LIST **)(Pool2 + 40 * v22 + 64);
              v22 = (unsigned int)(v22 + 1);
              if ( v24 )
                ndisMIndicateNetBufferListsToOpen(
                  v18,
                  v24,
                  *(_DWORD *)(Pool2 + 40),
                  *(_DWORD *)(Pool2 + 40 * v23 + 80),
                  v20);
            }
            while ( (unsigned int)v22 <= v19 );
            v18 = (const struct _NDIS_FILTER_BLOCK *)IterativeDataPathTracker;
          }
          while ( IterativeDataPathTracker );
        }
        v25 = (struct _NDIS_OPEN_BLOCK *)RcvLinkSpeedIndicateUp[2];
        if ( v25 )
        {
          if ( (a5 & 2) != 0 )
            ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2, v25);
          else
            ndisIndicateSortedNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
        }
      }
    }
  }
  if ( *(_BYTE *)(Pool2 + 692) )
  {
    a2 = *(struct _NET_BUFFER_LIST **)(Pool2 + 64);
    v7 = a1;
LABEL_25:
    if ( a2 )
    {
      if ( byte_1401278B0 && ((__int64)v7[4].StackExpansionFallback.WorkItem.WorkerRoutine & 2) != 0 )
        PktMonClientNblDropNdis((_DWORD)v7 + 5816, (_DWORD)a2, (_DWORD)v12, 1, -1073676270, -536866809);
      if ( (a5 & 2) == 0 )
        ndisReturnNetBufferListsInternal(v7, a2, a5 & 1, 0LL);
    }
  }
  if ( v26 )
  {
    --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v27);
  }
  else if ( Pool2 )
  {
    ExFreePoolWithTag((PVOID)Pool2, 0);
  }
}
