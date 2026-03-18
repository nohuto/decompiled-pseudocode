/*
 * XREFs of MmReportParkedProcessors @ 0x14026BF50
 * Callers:
 *     PpmParkReportMask @ 0x14026BAE0 (PpmParkReportMask.c)
 * Callees:
 *     MiMoveBackgroundZeroThreads @ 0x14026C160 (MiMoveBackgroundZeroThreads.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlCompareMemory @ 0x1406A86C0 (RtlCompareMemory.c)
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

  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2EA00);
  v0 = &PpmPerfCoreParkingMask;
  if ( RtlCompareMemory(&word_140E2EA08, &PpmPerfCoreParkingMask, 0x108uLL) == 264 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2EA00);
  }
  else
  {
    v1 = &word_140E2EA08;
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
    if ( WorkItem.Parameter )
    {
      if ( WorkItem.Parameter == (void *)1 )
        WorkItem.Parameter = (void *)2;
    }
    else
    {
      WorkItem.List.Flink = 0LL;
      WorkItem.WorkerRoutine = (void (__fastcall *)(void *))MiSendParkedCoreUpdateToAllChildPartitions;
      WorkItem.Parameter = (void *)1;
      ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2EA00);
    MiMoveBackgroundZeroThreads(&MiSystemPartition, 1LL);
  }
}
