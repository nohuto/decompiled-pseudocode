/*
 * XREFs of MiFlushAllStoreSwapPages @ 0x1402D01D8
 * Callers:
 *     SmpFlushStorePages @ 0x140A868B0 (SmpFlushStorePages.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14020A160 (KeSetActualBasePriorityThread.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MiCanFlushMakeProgress @ 0x1402D0318 (MiCanFlushMakeProgress.c)
 *     MiWakeModifiedPageWriter @ 0x1402D0460 (MiWakeModifiedPageWriter.c)
 *     MiStoreUpdateMemoryConditions @ 0x1402D10D4 (MiStoreUpdateMemoryConditions.c)
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 */

__int64 __fastcall MiFlushAllStoreSwapPages(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v5; // r12d
  __int64 v6; // r15
  __int64 v7; // rcx
  unsigned int v8; // ebp
  __int64 v9; // r14
  __int64 v10; // r8
  __int64 v11; // rdx
  $81B80DCEA5A02D890AB7B2872B48AC01 *v13; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( *(_DWORD *)(a1 + 1204) == -1 )
    return 1LL;
  --CurrentThread->SpecialApcDisable;
  v5 = KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, 18, a3);
  v6 = MEMORY[0xFFFFF78000000008];
  v7 = *(unsigned int *)(a1 + 1204);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 1200), 2u);
  v8 = 0;
  v9 = 88 * (v7 + 48);
  while ( *(_QWORD *)(v9 + a1) )
  {
    if ( (unsigned int)MiCanFlushMakeProgress(a1, 1LL, 1LL) )
    {
      MiWakeModifiedPageWriter(a1, -1LL);
      MiStoreUpdateMemoryConditions(a1);
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
      if ( (unsigned __int64)(MEMORY[0xFFFFF78000000008] - v6) <= 0x2FAF080 )
        continue;
    }
    goto LABEL_8;
  }
  v8 = 1;
LABEL_8:
  _InterlockedOr((volatile signed __int32 *)(a1 + 1200), 1u);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 1200), 0xFFFFFFFE);
  KeSetEvent((PRKEVENT)(a1 + 928), 0, 0);
  KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, v5, v10);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v13 = &CurrentThread->152;
    if ( ($81B80DCEA5A02D890AB7B2872B48AC01 *)v13->ApcState.ApcListHead[0].Flink != v13 )
      KiCheckForKernelApcDelivery((__int64)v13, v11);
  }
  return v8;
}
