/*
 * XREFs of HalQueryMaximumProcessorCount @ 0x1404477E0
 * Callers:
 *     PpmParkSteerInterrupts @ 0x1403AE8E0 (PpmParkSteerInterrupts.c)
 *     HalpEfiLockOutRuntimeCallsForSystemSleep @ 0x140447878 (HalpEfiLockOutRuntimeCallsForSystemSleep.c)
 *     HalpTimerInitSystem @ 0x1405387F0 (HalpTimerInitSystem.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14053F740 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x1405405B8 (HalpMmAllocatePerProcessorMemory.c)
 *     HalpMmReservePageTablePages @ 0x14054072C (HalpMmReservePageTablePages.c)
 *     HalpEfiBugCheckAddPagesCallback @ 0x14054A230 (HalpEfiBugCheckAddPagesCallback.c)
 *     HalpHvDiscover @ 0x14055C720 (HalpHvDiscover.c)
 *     HalpHvTimerInitialize @ 0x14055C890 (HalpHvTimerInitialize.c)
 *     HalpTimerRegister @ 0x14055D78C (HalpTimerRegister.c)
 *     HvlStartBootLogicalProcessors @ 0x140580328 (HvlStartBootLogicalProcessors.c)
 *     KiComputeEstimatedMaximumProcessors @ 0x1405B28C0 (KiComputeEstimatedMaximumProcessors.c)
 *     RtlpHpHeapCreate @ 0x1405F89CC (RtlpHpHeapCreate.c)
 *     HalpInterruptGetIrtInfo @ 0x1406F1FB4 (HalpInterruptGetIrtInfo.c)
 *     HalpQueryAcpiResourceRequirements @ 0x1406F68B8 (HalpQueryAcpiResourceRequirements.c)
 *     EtwpInitLoggerContext @ 0x140A388E4 (EtwpInitLoggerContext.c)
 *     VfAvlInitializeTreeEx @ 0x140B73CF8 (VfAvlInitializeTreeEx.c)
 *     InitBootProcessor @ 0x140BF9C88 (InitBootProcessor.c)
 *     HalpInitializeInterrupts @ 0x140BFCE18 (HalpInitializeInterrupts.c)
 *     HalpInitializePmcCounterSetInfo @ 0x140BFD7E4 (HalpInitializePmcCounterSetInfo.c)
 * Callees:
 *     HalpInterruptSetProblemEx @ 0x1404443B8 (HalpInterruptSetProblemEx.c)
 *     HalpInterruptModel @ 0x1404469AC (HalpInterruptModel.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 HalQueryMaximumProcessorCount()
{
  int v0; // eax
  unsigned int v1; // r8d
  unsigned int v2; // r10d
  ULONG_PTR BugCheckParameter4; // r10

  if ( !HalpInterruptMaxProcessors || !HalpNumaInitializationComplete )
  {
    HalpInterruptSetProblemEx(0LL, 11, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\start.c", 0x2D6u);
    KeBugCheckEx(0x5Cu, 0x8000uLL, HalpInterruptLastProblem, 0LL, BugCheckParameter4);
  }
  v0 = HalpInterruptModel();
  if ( (v0 == 1 || v0 == 2 || (unsigned int)(v0 - 3) <= 1) && HalpNumaConfig )
    v2 = *(_DWORD *)(HalpNumaConfig + 60);
  if ( v2 < v1 )
    return v1;
  return v2;
}
