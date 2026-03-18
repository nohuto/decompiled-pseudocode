/*
 * XREFs of MmReportParkedProcessors @ 0x1403C8D50
 * Callers:
 *     PpmParkReportMask @ 0x1403C88E0 (PpmParkReportMask.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     MiMoveBackgroundZeroThreads @ 0x1403C8F60 (MiMoveBackgroundZeroThreads.c)
 *     RtlCompareMemory @ 0x1406B3990 (RtlCompareMemory.c)
 */

void MmReportParkedProcessors()
{
  struct _KAFFINITY_EX *v0; // rbx
  __int16 *v1; // rcx
  __int64 v2; // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1

  ExAcquireSpinLockExclusiveAtDpcLevel(&SpinLock);
  v0 = &PpmPerfCoreParkingMask;
  if ( RtlCompareMemory(&word_140E2EC48, &PpmPerfCoreParkingMask, 0x108uLL) == 264 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(&SpinLock);
  }
  else
  {
    v1 = &word_140E2EC48;
    v2 = 2LL;
    do
    {
      v3 = *(_OWORD *)&v0->StaticBitmap[1];
      *(_OWORD *)v1 = *(_OWORD *)&v0->Count;
      v4 = *(_OWORD *)&v0->StaticBitmap[3];
      *((_OWORD *)v1 + 1) = v3;
      v5 = *(_OWORD *)&v0->StaticBitmap[5];
      *((_OWORD *)v1 + 2) = v4;
      v6 = *(_OWORD *)&v0->StaticBitmap[7];
      *((_OWORD *)v1 + 3) = v5;
      v7 = *(_OWORD *)&v0->StaticBitmap[9];
      *((_OWORD *)v1 + 4) = v6;
      v8 = *(_OWORD *)&v0->StaticBitmap[11];
      *((_OWORD *)v1 + 5) = v7;
      v9 = *(_OWORD *)&v0->StaticBitmap[13];
      v0 = (struct _KAFFINITY_EX *)((char *)v0 + 128);
      *((_OWORD *)v1 + 6) = v8;
      v1 += 64;
      *((_OWORD *)v1 - 1) = v9;
      --v2;
    }
    while ( v2 );
    *(_QWORD *)v1 = *(_QWORD *)&v0->Count;
    if ( stru_140E2ED50.Parameter )
    {
      if ( stru_140E2ED50.Parameter == (void *)1 )
        stru_140E2ED50.Parameter = (void *)2;
    }
    else
    {
      stru_140E2ED50.List.Flink = 0LL;
      stru_140E2ED50.WorkerRoutine = (void (__fastcall *)(void *))MiSendParkedCoreUpdateToAllChildPartitions;
      stru_140E2ED50.Parameter = (void *)1;
      ExQueueWorkItem(&stru_140E2ED50, DelayedWorkQueue);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&SpinLock);
    MiMoveBackgroundZeroThreads(&MiSystemPartition, 1LL);
  }
}
