/*
 * XREFs of MiWorkingSetManager @ 0x140354FA0
 * Callers:
 *     KeBalanceSetManager @ 0x1405C1BE0 (KeBalanceSetManager.c)
 *     MiPartitionWorkingSetManager @ 0x1406744B0 (MiPartitionWorkingSetManager.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiAdjustCachedStacks @ 0x1402AF604 (MiAdjustCachedStacks.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     MiProcessWorkingSets @ 0x1402F2D10 (MiProcessWorkingSets.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x14035384C (MiReclaimUnusedUltraMdlMaps.c)
 *     MiFreeDeferredAcceleratorPool @ 0x140353934 (MiFreeDeferredAcceleratorPool.c)
 *     MiCheckLogPinDriverAddresses @ 0x140353990 (MiCheckLogPinDriverAddresses.c)
 *     MiAdjustModifiedPageLoad @ 0x140353ADC (MiAdjustModifiedPageLoad.c)
 *     MiScanPagefiles @ 0x140353D80 (MiScanPagefiles.c)
 *     MiPruneProcessLargePageCaches @ 0x140353F9C (MiPruneProcessLargePageCaches.c)
 *     MiLogPeriodicTelemetry @ 0x14035409C (MiLogPeriodicTelemetry.c)
 *     MiCheckTrimUnusedPageFileRegions @ 0x14035468C (MiCheckTrimUnusedPageFileRegions.c)
 *     MiSignalLargePageRebuild @ 0x140354758 (MiSignalLargePageRebuild.c)
 *     MiScheduleZeroPageThreads @ 0x140354918 (MiScheduleZeroPageThreads.c)
 *     MiFreeUnusedSlabPages @ 0x140354C04 (MiFreeUnusedSlabPages.c)
 *     MiEmptyDecayClusterTimers @ 0x140355310 (MiEmptyDecayClusterTimers.c)
 *     MiReleaseSystemCacheView @ 0x140355608 (MiReleaseSystemCacheView.c)
 *     MiAdjustPteBins @ 0x1403F5F00 (MiAdjustPteBins.c)
 *     MiWakeZeroingThreads @ 0x140412F50 (MiWakeZeroingThreads.c)
 *     KePulseEvent @ 0x14045EF70 (KePulseEvent.c)
 *     MiQueueExtentPfnDeletion @ 0x1404C8730 (MiQueueExtentPfnDeletion.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

LARGE_INTEGER __fastcall MiWorkingSetManager(__int64 a1, int a2)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbp
  __int64 v7; // rax
  __int64 *v8; // r8
  __int64 v9; // rcx
  __int64 *v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r10
  int v13; // eax
  int v14; // ebp
  char v15; // al
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
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
        v11 = 0LL;
        v8 = MiPageSizes;
        v10 = (__int64 *)(v5 + 16);
        v12 = 3LL;
        do
        {
          v7 = *v8++;
          v9 = *v10;
          v10 += 160;
          v11 += v7 * v9;
          --v12;
        }
        while ( v12 );
        if ( (unsigned __int64)(v11 + *(_QWORD *)(v5 + 3856)) >= 0x40 )
        {
          v19 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 15280));
          if ( *(_QWORD *)(v5 + 15272) )
          {
            if ( !*(_BYTE *)(v5 + 15296) )
            {
              v20 = *(_QWORD *)(v5 + 15272);
              *(_BYTE *)(v5 + 15296) = 1;
              MiWakeZeroingThreads(v20);
            }
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
    if ( stru_140E2FFE8.Header.SignalState )
    {
      if ( byte_140E30292 == 1 && ((unsigned __int8)MiFlags & 0x30u) >= 0x20 )
      {
        v26 = ExAcquireSpinLockExclusive(dword_140E3A8E0);
        if ( byte_140E30292 == 1 )
        {
          stru_140E302C0.Parameter = 0LL;
          stru_140E302C0.List.Flink = 0LL;
          stru_140E302C0.WorkerRoutine = (void (__fastcall *)(void *))MiBadPageSignaler;
          byte_140E30292 = 2;
          ExQueueWorkItem(&stru_140E302C0, DelayedWorkQueue);
        }
        MiReleaseSpinLockExclusive(dword_140E3A8E0, v26);
      }
    }
  }
  MiEmptyDecayClusterTimers(a1);
  MiFreeUnusedSlabPages((_QWORD *)a1);
  MiPruneProcessLargePageCaches(a1, 1);
  MiReleaseSystemCacheView(a1, 0LL);
  v13 = *(_DWORD *)(v4 + 32) + 1;
  *(_DWORD *)(v4 + 32) = v13;
  if ( v13 == *(_DWORD *)(v4 + 36) )
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
    KePulseEvent(&stru_140E37508, 0, 0);
  MiLogPeriodicTelemetry((ULONG *)a1);
  v28 = 1;
  v14 = 0;
  MiProcessWorkingSets(a1, (__int64)v27);
  v15 = v28;
  if ( v28 != 1 )
  {
    v24 = 1;
    do
    {
      if ( v15 == 3 )
        break;
      if ( v24 == v15 )
      {
        v28 = 3;
        ++*(_DWORD *)(v4 + 504);
      }
      else
      {
        MiAdjustModifiedPageLoad(a1, *(_QWORD *)(v4 + 264), *(_DWORD *)(v4 + 120));
        ++*(_DWORD *)(v4 + 500);
        MiScanPagefiles(a1);
        v14 = 1;
      }
      v24 = v28;
      MiProcessWorkingSets(a1, (__int64)v27);
      v15 = v28;
    }
    while ( v28 != 1 );
  }
  if ( (ULONG *)a1 == &MiSystemPartition )
  {
    MiAdjustPteBins();
    if ( byte_140E2D742 )
      MiQueueExtentPfnDeletion(0LL);
  }
  MiAdjustCachedStacks(a1, 0);
  if ( !v14 )
  {
    MiAdjustModifiedPageLoad(a1, *(_QWORD *)(v4 + 264), *(_DWORD *)(v4 + 120));
    MiScanPagefiles(a1);
  }
  MiCheckTrimUnusedPageFileRegions(a1);
  v16 = *(_QWORD *)(a1 + 19392);
  v17 = *(_QWORD *)(a1 + 19616);
  if ( v16 > v17 && v16 - v17 >= 0x320 )
    KeSetEvent((PRKEVENT)(a1 + 840), 0, 0);
  MiSignalLargePageRebuild(a1);
  return MiScheduleZeroPageThreads(a1);
}
