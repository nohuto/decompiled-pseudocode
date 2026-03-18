/*
 * XREFs of MiFlushAllStoreSwapPages @ 0x1403C1088
 * Callers:
 *     SmpFlushStorePages @ 0x140A82120 (SmpFlushStorePages.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14020E620 (KeSetActualBasePriorityThread.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MiCanFlushMakeProgress @ 0x1403C11C8 (MiCanFlushMakeProgress.c)
 *     MiWakeModifiedPageWriter @ 0x1403C1310 (MiWakeModifiedPageWriter.c)
 *     MiStoreUpdateMemoryConditions @ 0x1403C1B60 (MiStoreUpdateMemoryConditions.c)
 */

__int64 __fastcall MiFlushAllStoreSwapPages(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v3; // r12d
  __int64 v4; // r15
  __int64 v5; // rcx
  unsigned int v6; // ebp
  __int64 v7; // r14

  CurrentThread = KeGetCurrentThread();
  if ( *(_DWORD *)(a1 + 1204) == -1 )
    return 1LL;
  --CurrentThread->SpecialApcDisable;
  v3 = KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, 18);
  v4 = MEMORY[0xFFFFF78000000008];
  v5 = *(unsigned int *)(a1 + 1204);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 1200), 2u);
  v6 = 0;
  v7 = 88 * (v5 + 48);
  while ( *(_QWORD *)(v7 + a1) )
  {
    if ( (unsigned int)MiCanFlushMakeProgress(a1, 1LL, 1LL) )
    {
      MiWakeModifiedPageWriter(a1, -1LL);
      MiStoreUpdateMemoryConditions(a1);
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
      if ( (unsigned __int64)(MEMORY[0xFFFFF78000000008] - v4) <= 0x2FAF080 )
        continue;
    }
    goto LABEL_8;
  }
  v6 = 1;
LABEL_8:
  _InterlockedOr((volatile signed __int32 *)(a1 + 1200), 1u);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 1200), 0xFFFFFFFE);
  KeSetEvent((PRKEVENT)(a1 + 928), 0, 0);
  KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, v3);
  if ( CurrentThread->SpecialApcDisable++ == -1
    && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery();
  }
  return v6;
}
