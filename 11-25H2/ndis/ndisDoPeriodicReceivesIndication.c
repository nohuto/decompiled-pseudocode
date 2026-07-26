/*
 * XREFs of ndisDoPeriodicReceivesIndication @ 0x140043410
 * Callers:
 *     ?ndisPeriodicReceivesWorker@@YAXPEAX@Z @ 0x140043300 (-ndisPeriodicReceivesWorker@@YAXPEAX@Z.c)
 *     ndisSwitchMiniportReceiveFunction @ 0x140067CC0 (ndisSwitchMiniportReceiveFunction.c)
 *     ndisEmptyPeriodicReceivesQueue @ 0x1400866D0 (ndisEmptyPeriodicReceivesQueue.c)
 * Callees:
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14001C7D0 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140025750 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ?ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x140037030 (-ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x140038170 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisIndicateSortedNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x140039B10 (-ndisIndicateSortedNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140039CC0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400468C0 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     PktMonClientNblDropNdis @ 0x140046FF0 (PktMonClientNblDropNdis.c)
 */

__int64 __fastcall ndisDoPeriodicReceivesIndication(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER_LIST *Alignment)
{
  unsigned int v2; // edi
  struct _NET_BUFFER_LIST *v5; // rbx
  unsigned int v6; // ebp
  struct _NET_BUFFER_LIST *v7; // rax
  unsigned int v8; // r15d
  unsigned int Number; // esi
  char v10; // r12
  struct _NDIS_RCV_TRACKER_ARRAY *v11; // r9
  struct _NDIS_FILTER_BLOCK **v12; // r8
  __int64 v13; // rdx
  __int64 Pool2; // rdi
  _X_FILTER *EthDB; // r12
  struct _NET_BUFFER_LIST *v16; // rcx
  __int64 v17; // rdx
  const struct _NDIS_FILTER_BLOCK *SingleActiveOpen; // rsi
  const struct _NDIS_FILTER_BLOCK *NoFTypeOpenList; // rsi
  unsigned int v20; // ebp
  unsigned int v21; // r12d
  _NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *IterativeDataPathTracker; // r15
  __int64 v23; // rbx
  __int64 v24; // rcx
  struct _NET_BUFFER_LIST *v25; // rdx
  int v27; // edx
  _X_FILTER *v28; // [rsp+30h] [rbp-58h]
  char v29; // [rsp+90h] [rbp+8h]
  unsigned int v30; // [rsp+98h] [rbp+10h]
  unsigned int v31; // [rsp+A0h] [rbp+18h]
  int v32; // [rsp+A8h] [rbp+20h]

  v2 = 0;
  v30 = 0;
  do
  {
    v5 = Alignment;
    if ( !Alignment )
      break;
    v6 = (unsigned int)Alignment->ProtocolReserved[0];
    v7 = Alignment;
    Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    v8 = 1;
    v32 = 1;
    if ( Alignment )
    {
      do
      {
        if ( v6 != LODWORD(Alignment->ProtocolReserved[0]) )
          break;
        v7 = Alignment;
        ++v8;
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      }
      while ( Alignment );
      v32 = v8;
    }
    a1->PeriodicReceiveQueue.NumNblsDequeued -= v8;
    v7->Link.Alignment = 0LL;
    if ( a1->MajorNdisVersion < 6u && (a1->Flags & 0x40000) == 0 )
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
      v2 = v30;
    }
    if ( !a1->InitMode )
    {
      Number = 0;
      v10 = 0;
      v31 = 0;
      v29 = 0;
      if ( ndisPerProcRcvTrackers
        && (Number = KeGetPcr()->Prcb.Number,
            v11 = ndisPerProcRcvTrackers,
            v12 = (struct _NDIS_FILTER_BLOCK **)(2096LL * Number),
            v31 = Number,
            v13 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + (_QWORD)v12),
            (unsigned int)v13 < 3) )
      {
        v29 = 1;
        *(_DWORD *)((char *)ndisPerProcRcvTrackers + (_QWORD)v12) = v13 + 1;
        Pool2 = (__int64)&v12[87 * v13 + 1] + (_QWORD)v11;
LABEL_12:
        EthDB = a1->EthDB;
        v16 = v5;
        v28 = EthDB;
        *(_BYTE *)(Pool2 + 692) = 0;
        do
        {
          v17 = (__int64)v16;
          v16->Flags = v16->Flags & 0xFFFFFFF0 | 4;
          v16 = (struct _NET_BUFFER_LIST *)v16->Link.Alignment;
        }
        while ( v16 );
        SingleActiveOpen = (const struct _NDIS_FILTER_BLOCK *)EthDB->SingleActiveOpen;
        if ( SingleActiveOpen && *((_BYTE *)SingleActiveOpen->FilterModuleContext + 56) >= 6u )
        {
          ndisMIndicateNetBufferListsToOpen(SingleActiveOpen, v5, v6, v8, 1u);
          *(_QWORD *)(Pool2 + 64) = 0LL;
          *(_DWORD *)(Pool2 + 80) = 0;
        }
        else
        {
          *(_QWORD *)(Pool2 + 24) = v5;
          *(_QWORD *)(Pool2 + 8) = EthDB;
          *(_DWORD *)(Pool2 + 16) = 1;
          *(_QWORD *)Pool2 = a1;
          *(_QWORD *)(Pool2 + 32) = v17;
          *(_DWORD *)(Pool2 + 40) = v6;
          *(_DWORD *)(Pool2 + 44) = v8;
          ndisSortNetBufferLists((struct _NDIS_FILTER_BLOCK **)Pool2, v17, v12);
          if ( *(_QWORD *)(Pool2 + 64) || *(_DWORD *)(Pool2 + 688) )
          {
            if ( !EthDB->OpenList || v6 )
              *(_BYTE *)(Pool2 + 692) = 1;
            else
              ndisIndicateXlatedPacketsToNdis5Protocols((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
            if ( !SingleActiveOpen )
            {
              NoFTypeOpenList = (const struct _NDIS_FILTER_BLOCK *)EthDB->NoFTypeOpenList;
              if ( NoFTypeOpenList )
              {
                v20 = *(_DWORD *)(Pool2 + 688);
                v21 = *(_DWORD *)(Pool2 + 16) | 2;
                do
                {
                  IterativeDataPathTracker = (_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *)NoFTypeOpenList->IterativeDataPathTracker;
                  v23 = 0LL;
                  do
                  {
                    v24 = (unsigned int)v23;
                    v25 = *(struct _NET_BUFFER_LIST **)(Pool2 + 40 * v23 + 64);
                    v23 = (unsigned int)(v23 + 1);
                    if ( v25 )
                      ndisMIndicateNetBufferListsToOpen(
                        NoFTypeOpenList,
                        v25,
                        *(_DWORD *)(Pool2 + 40),
                        *(_DWORD *)(Pool2 + 40 * v24 + 80),
                        v21);
                  }
                  while ( (unsigned int)v23 <= v20 );
                  NoFTypeOpenList = (const struct _NDIS_FILTER_BLOCK *)IterativeDataPathTracker;
                }
                while ( IterativeDataPathTracker );
                v8 = v32;
                EthDB = v28;
              }
              if ( EthDB->FTypeOpenList )
                ndisIndicateSortedNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)Pool2);
            }
          }
        }
        Number = v31;
        v10 = v29;
        if ( !*(_BYTE *)(Pool2 + 692) || (v5 = *(struct _NET_BUFFER_LIST **)(Pool2 + 64)) == 0LL )
        {
LABEL_32:
          if ( v10 )
          {
            --*((_DWORD *)ndisPerProcRcvTrackers + 524 * Number);
          }
          else if ( Pool2 )
          {
            ExFreePoolWithTag((PVOID)Pool2, 0);
          }
          v2 = v30;
          goto LABEL_35;
        }
      }
      else
      {
        Pool2 = ExAllocatePool2(66LL, 696LL, 538985550);
        if ( Pool2 )
          goto LABEL_12;
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v27) = 2;
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v27,
            4,
            11,
            (struct _GUID *)&WPP_ab2fd775e6d238d6e5be27dfc6df6673_Traceguids);
        }
      }
      if ( byte_1401278B0 && (*((_DWORD *)&a1->PktMonComp + 14) & 2) != 0 )
        PktMonClientNblDropNdis((_DWORD)a1 + 5816, (_DWORD)v5, (_DWORD)v12, 1, -1073676270, -536866809);
      ndisReturnNetBufferListsInternal((struct _NDIS_FILTER_BLOCK *)a1, v5, 1u, 0LL);
      goto LABEL_32;
    }
    ndisMDispatchReceiveNetBufferListsWithLock(a1, v5, v6, v8, 1u);
LABEL_35:
    if ( a1->MajorNdisVersion < 6u && (a1->Flags & 0x40000) == 0 )
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
      a1->LockAcquired = 0;
      a1->LockThread = 0LL;
      a1->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    }
    a1->PeriodicReceiveQueue.TrackingIndicated += v8;
    v2 += v8;
    v30 = v2;
  }
  while ( Alignment );
  return v2;
}
