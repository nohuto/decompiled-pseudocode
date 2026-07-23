/*
 * XREFs of MiFlushAllStoreSwapPages @ 0x1402611E0
 * Callers:
 *     SmpFlushStorePages @ 0x140A813F0 (SmpFlushStorePages.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiCanFlushMakeProgress @ 0x140261320 (MiCanFlushMakeProgress.c)
 *     MiWakeModifiedPageWriter @ 0x140261468 (MiWakeModifiedPageWriter.c)
 *     MiStoreUpdateMemoryConditions @ 0x1402F4DDC (MiStoreUpdateMemoryConditions.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     KeSetActualBasePriorityThread @ 0x140331740 (KeSetActualBasePriorityThread.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall MiFlushAllStoreSwapPages(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // r15
  __int64 v4; // rcx
  unsigned int v5; // ebp
  __int64 v6; // r14

  CurrentThread = KeGetCurrentThread();
  if ( *(_DWORD *)(a1 + 1204) == -1 )
    return 1LL;
  --CurrentThread->SpecialApcDisable;
  KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread);
  v3 = MEMORY[0xFFFFF78000000008];
  v4 = *(unsigned int *)(a1 + 1204);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 1200), 2u);
  v5 = 0;
  v6 = 88 * (v4 + 48);
  while ( *(_QWORD *)(v6 + a1) )
  {
    if ( (unsigned int)MiCanFlushMakeProgress(a1, 1LL, 1LL) )
    {
      MiWakeModifiedPageWriter(a1, -1LL);
      MiStoreUpdateMemoryConditions(a1);
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
      if ( (unsigned __int64)(MEMORY[0xFFFFF78000000008] - v3) <= 0x2FAF080 )
        continue;
    }
    goto LABEL_8;
  }
  v5 = 1;
LABEL_8:
  _InterlockedOr((volatile signed __int32 *)(a1 + 1200), 1u);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 1200), 0xFFFFFFFE);
  KeSetEvent((PRKEVENT)(a1 + 928), 0, 0);
  KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread);
  if ( CurrentThread->SpecialApcDisable++ == -1
    && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery();
  }
  return v5;
}
