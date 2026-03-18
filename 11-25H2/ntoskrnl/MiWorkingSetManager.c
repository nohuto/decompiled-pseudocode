/*
 * XREFs of MiWorkingSetManager @ 0x1403B36E0
 * Callers:
 *     KeBalanceSetManager @ 0x1405C0270 (KeBalanceSetManager.c)
 *     MiPartitionWorkingSetManager @ 0x140667880 (MiPartitionWorkingSetManager.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiScanPagefiles @ 0x140379364 (MiScanPagefiles.c)
 *     MiAdjustCachedStacks @ 0x1403B1C48 (MiAdjustCachedStacks.c)
 *     MiCheckTrimUnusedPageFileRegions @ 0x1403B3478 (MiCheckTrimUnusedPageFileRegions.c)
 *     MiSignalLargePageRebuild @ 0x1403B3544 (MiSignalLargePageRebuild.c)
 *     MiEmptyDecayClusterTimers @ 0x1403B3A50 (MiEmptyDecayClusterTimers.c)
 *     MiReleaseSystemCacheView @ 0x1403B5010 (MiReleaseSystemCacheView.c)
 *     MiFreeUnusedSlabPages @ 0x1403B5490 (MiFreeUnusedSlabPages.c)
 *     MiScheduleZeroPageThreads @ 0x1403B582C (MiScheduleZeroPageThreads.c)
 *     MiLogPeriodicTelemetry @ 0x1403BA494 (MiLogPeriodicTelemetry.c)
 *     MiProcessWorkingSets @ 0x1403C24F0 (MiProcessWorkingSets.c)
 *     MiAdjustPteBins @ 0x1403F4BB4 (MiAdjustPteBins.c)
 *     MiWakeZeroingThreads @ 0x140437060 (MiWakeZeroingThreads.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x140450C38 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiCheckLogPinDriverAddresses @ 0x14045F5E8 (MiCheckLogPinDriverAddresses.c)
 *     KePulseEvent @ 0x14046B330 (KePulseEvent.c)
 *     MiPruneProcessLargePageCaches @ 0x14047FD48 (MiPruneProcessLargePageCaches.c)
 *     MiAdjustModifiedPageLoad @ 0x14049364C (MiAdjustModifiedPageLoad.c)
 *     MiFreeDeferredAcceleratorPool @ 0x1404A6F24 (MiFreeDeferredAcceleratorPool.c)
 *     MiQueueExtentPfnDeletion @ 0x1404F35A4 (MiQueueExtentPfnDeletion.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiWorkingSetManager(__int64 a1, int a2)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbp
  int v7; // eax
  int v8; // ebp
  char v9; // al
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v13; // rdx
  __int64 *v14; // r8
  __int64 *v15; // r9
  __int64 v16; // r10
  __int64 v17; // rax
  __int64 v18; // rcx
  KIRQL v19; // r15
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  char v24; // di
  struct _KTHREAD *CurrentThread; // rax
  KIRQL v26; // di
  _BYTE v27[4]; // [rsp+20h] [rbp-A8h] BYREF
  char v28; // [rsp+24h] [rbp-A4h]

  memset_0(v27, 0, 0x70uLL);
  v4 = *(_QWORD *)(a1 + 17600);
  if ( !*(_QWORD *)(v4 + 88) )
  {
    CurrentThread = KeGetCurrentThread();
    *(_QWORD *)(v4 + 88) = CurrentThread;
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x2000u;
  }
  if ( !*(_DWORD *)(a1 + 16944) )
  {
    v5 = *(_QWORD *)(a1 + 16);
    v6 = v5 + 57216LL * (unsigned __int16)KeNumberNodes;
    while ( v5 < v6 )
    {
      if ( !*(_BYTE *)(v5 + 15296) )
      {
        v13 = 0LL;
        v14 = MiPageSizes;
        v15 = (__int64 *)(v5 + 16);
        v16 = 3LL;
        do
        {
          v17 = *v14++;
          v18 = *v15;
          v15 += 160;
          v13 += v17 * v18;
          --v16;
        }
        while ( v16 );
        if ( (unsigned __int64)(v13 + *(_QWORD *)(v5 + 3856)) >= 0x40 )
        {
          v19 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 15280));
          if ( *(_QWORD *)(v5 + 15272) && !*(_BYTE *)(v5 + 15296) )
          {
            v20 = *(_QWORD *)(v5 + 15272);
            *(_BYTE *)(v5 + 15296) = 1;
            MiWakeZeroingThreads(v20);
          }
          MiReleaseSpinLockExclusive((_DWORD *)(v5 + 15280), v19);
        }
      }
      v5 += 57216LL;
    }
  }
  if ( (ULONG *)a1 == &MiSystemPartition )
  {
    MiReclaimUnusedUltraMdlMaps();
    MiFreeDeferredAcceleratorPool();
    MiCheckLogPinDriverAddresses();
    if ( stru_140E2FC68.Header.SignalState )
    {
      if ( byte_140E2FF0A == 1 && ((unsigned __int8)MiFlags & 0x30u) >= 0x20 )
      {
        v26 = ExAcquireSpinLockExclusive(dword_140E3A560);
        if ( byte_140E2FF0A == 1 )
        {
          stru_140E2FF38.Parameter = 0LL;
          stru_140E2FF38.List.Flink = 0LL;
          stru_140E2FF38.WorkerRoutine = (void (__fastcall *)(void *))MiBadPageSignaler;
          byte_140E2FF0A = 2;
          ExQueueWorkItem(&stru_140E2FF38, DelayedWorkQueue);
        }
        MiReleaseSpinLockExclusive(dword_140E3A560, v26);
      }
    }
  }
  MiEmptyDecayClusterTimers(a1);
  MiFreeUnusedSlabPages(a1);
  MiPruneProcessLargePageCaches(a1, 1LL);
  MiReleaseSystemCacheView(a1, 0LL);
  v7 = *(_DWORD *)(v4 + 32) + 1;
  *(_DWORD *)(v4 + 32) = v7;
  if ( v7 == *(_DWORD *)(v4 + 36) )
  {
    v21 = *(_DWORD *)(v4 + 24);
    *(_DWORD *)(v4 + 32) = 0;
    v22 = ((_BYTE)v21 + 1) & 0xF;
    *(_DWORD *)(v4 + 24) = v22;
    v23 = ((_BYTE)v22 - 8) & 0xF;
    if ( *(_QWORD *)(88 * (v23 + 64) + a1) )
      KeSetEvent((PRKEVENT)(a1 + 8 * (v23 + 2 * (v23 + 457))), 0, 0);
  }
  if ( (ULONG *)a1 == &MiSystemPartition && !a2 )
    KePulseEvent(&stru_140E37188, 0, 0);
  MiLogPeriodicTelemetry(a1);
  v28 = 1;
  v8 = 0;
  MiProcessWorkingSets(a1);
  v9 = v28;
  if ( v28 != 1 )
  {
    v24 = 1;
    do
    {
      if ( v9 == 3 )
        break;
      if ( v24 == v9 )
      {
        v28 = 3;
        ++*(_DWORD *)(v4 + 504);
      }
      else
      {
        MiAdjustModifiedPageLoad(a1, *(_QWORD *)(v4 + 264), *(unsigned int *)(v4 + 120));
        ++*(_DWORD *)(v4 + 500);
        MiScanPagefiles(a1);
        v8 = 1;
      }
      v24 = v28;
      MiProcessWorkingSets(a1);
      v9 = v28;
    }
    while ( v28 != 1 );
  }
  if ( (ULONG *)a1 == &MiSystemPartition )
  {
    MiAdjustPteBins();
    if ( byte_140E2D3C2 )
      MiQueueExtentPfnDeletion(0LL);
  }
  MiAdjustCachedStacks(a1, 0);
  if ( !v8 )
  {
    MiAdjustModifiedPageLoad(a1, *(_QWORD *)(v4 + 264), *(unsigned int *)(v4 + 120));
    MiScanPagefiles(a1);
  }
  MiCheckTrimUnusedPageFileRegions();
  v10 = *(_QWORD *)(a1 + 19392);
  v11 = *(_QWORD *)(a1 + 19616);
  if ( v10 > v11 && v10 - v11 >= 0x320 )
    KeSetEvent((PRKEVENT)(a1 + 840), 0, 0);
  MiSignalLargePageRebuild(a1);
  return MiScheduleZeroPageThreads(a1);
}
