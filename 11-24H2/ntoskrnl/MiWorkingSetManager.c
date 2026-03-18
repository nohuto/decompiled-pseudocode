/*
 * XREFs of MiWorkingSetManager @ 0x1402D3D20
 * Callers:
 *     KeBalanceSetManager @ 0x1405C45C0 (KeBalanceSetManager.c)
 *     MiPartitionWorkingSetManager @ 0x1406732E0 (MiPartitionWorkingSetManager.c)
 * Callees:
 *     MiAdjustCachedStacks @ 0x140269740 (MiAdjustCachedStacks.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x1402D25D4 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiFreeDeferredAcceleratorPool @ 0x1402D26BC (MiFreeDeferredAcceleratorPool.c)
 *     MiCheckLogPinDriverAddresses @ 0x1402D2718 (MiCheckLogPinDriverAddresses.c)
 *     MiAdjustModifiedPageLoad @ 0x1402D2864 (MiAdjustModifiedPageLoad.c)
 *     MiScanPagefiles @ 0x1402D2B08 (MiScanPagefiles.c)
 *     MiPruneProcessLargePageCaches @ 0x1402D2D24 (MiPruneProcessLargePageCaches.c)
 *     MiLogPeriodicTelemetry @ 0x1402D2E24 (MiLogPeriodicTelemetry.c)
 *     MiCheckTrimUnusedPageFileRegions @ 0x1402D3414 (MiCheckTrimUnusedPageFileRegions.c)
 *     MiSignalLargePageRebuild @ 0x1402D34E0 (MiSignalLargePageRebuild.c)
 *     MiScheduleZeroPageThreads @ 0x1402D36A0 (MiScheduleZeroPageThreads.c)
 *     MiFreeUnusedSlabPages @ 0x1402D398C (MiFreeUnusedSlabPages.c)
 *     MiEmptyDecayClusterTimers @ 0x1402D4090 (MiEmptyDecayClusterTimers.c)
 *     MiReleaseSystemCacheView @ 0x1402D4388 (MiReleaseSystemCacheView.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     MiProcessWorkingSets @ 0x140378690 (MiProcessWorkingSets.c)
 *     MiWakeZeroingThreads @ 0x1403C7310 (MiWakeZeroingThreads.c)
 *     MiAdjustPteBins @ 0x1403FC540 (MiAdjustPteBins.c)
 *     KePulseEvent @ 0x1404674D0 (KePulseEvent.c)
 *     MiQueueExtentPfnDeletion @ 0x1404CF468 (MiQueueExtentPfnDeletion.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
  __int64 v13; // rdx
  int v14; // eax
  int v15; // ebp
  char v16; // al
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  KIRQL v20; // r15
  __int64 v21; // rcx
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  char v25; // di
  struct _KTHREAD *CurrentThread; // rax
  KIRQL v27; // di
  _BYTE v28[4]; // [rsp+20h] [rbp-A8h] BYREF
  char v29; // [rsp+24h] [rbp-A4h]

  memset_0(v28, 0, 0x70uLL);
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
          v20 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 15280));
          if ( *(_QWORD *)(v5 + 15272) )
          {
            if ( !*(_BYTE *)(v5 + 15296) )
            {
              v21 = *(_QWORD *)(v5 + 15272);
              *(_BYTE *)(v5 + 15296) = 1;
              MiWakeZeroingThreads(v21);
            }
          }
          MiReleaseSpinLockExclusive((_DWORD *)(v5 + 15280), v20);
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
    if ( stru_140E2FEA8.Header.SignalState )
    {
      if ( byte_140E30152 == 1 && ((unsigned __int8)MiFlags & 0x30u) >= 0x20 )
      {
        v27 = ExAcquireSpinLockExclusive(dword_140E3A7A0);
        if ( byte_140E30152 == 1 )
        {
          stru_140E30180.Parameter = 0LL;
          stru_140E30180.List.Flink = 0LL;
          stru_140E30180.WorkerRoutine = (void (__fastcall *)(void *))MiBadPageSignaler;
          byte_140E30152 = 2;
          ExQueueWorkItem(&stru_140E30180, DelayedWorkQueue);
        }
        MiReleaseSpinLockExclusive(dword_140E3A7A0, v27);
      }
    }
  }
  MiEmptyDecayClusterTimers(a1);
  MiFreeUnusedSlabPages((_QWORD *)a1);
  MiPruneProcessLargePageCaches(a1, 1);
  MiReleaseSystemCacheView(a1, 0LL);
  v14 = *(_DWORD *)(v4 + 32) + 1;
  *(_DWORD *)(v4 + 32) = v14;
  if ( v14 == *(_DWORD *)(v4 + 36) )
  {
    v22 = *(_DWORD *)(v4 + 24);
    *(_DWORD *)(v4 + 32) = 0;
    v23 = ((_BYTE)v22 + 1) & 0xF;
    *(_DWORD *)(v4 + 24) = v23;
    v24 = ((_BYTE)v23 - 8) & 0xF;
    if ( *(_QWORD *)(88 * (v24 + 64) + a1) )
      KeSetEvent((PRKEVENT)(a1 + 8 * (v24 + 2 * (v24 + 457))), 0, 0);
  }
  if ( (ULONG *)a1 == &MiSystemPartition && !a2 )
    KePulseEvent(&Event, 0, 0);
  MiLogPeriodicTelemetry((ULONG *)a1, v13);
  v29 = 1;
  v15 = 0;
  MiProcessWorkingSets(a1);
  v16 = v29;
  if ( v29 != 1 )
  {
    v25 = 1;
    do
    {
      if ( v16 == 3 )
        break;
      if ( v25 == v16 )
      {
        v29 = 3;
        ++*(_DWORD *)(v4 + 504);
      }
      else
      {
        MiAdjustModifiedPageLoad(a1, *(_QWORD *)(v4 + 264), *(_DWORD *)(v4 + 120));
        ++*(_DWORD *)(v4 + 500);
        MiScanPagefiles(a1);
        v15 = 1;
      }
      v25 = v29;
      MiProcessWorkingSets(a1);
      v16 = v29;
    }
    while ( v29 != 1 );
  }
  if ( (ULONG *)a1 == &MiSystemPartition )
  {
    MiAdjustPteBins();
    if ( byte_140E2D602 )
      MiQueueExtentPfnDeletion(0LL);
  }
  MiAdjustCachedStacks(a1, 0);
  if ( !v15 )
  {
    MiAdjustModifiedPageLoad(a1, *(_QWORD *)(v4 + 264), *(_DWORD *)(v4 + 120));
    MiScanPagefiles(a1);
  }
  MiCheckTrimUnusedPageFileRegions(a1);
  v17 = *(_QWORD *)(a1 + 19392);
  v18 = *(_QWORD *)(a1 + 19616);
  if ( v17 > v18 && v17 - v18 >= 0x320 )
    KeSetEvent((PRKEVENT)(a1 + 840), 0, 0);
  MiSignalLargePageRebuild(a1);
  return MiScheduleZeroPageThreads(a1);
}
