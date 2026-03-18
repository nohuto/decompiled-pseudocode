/*
 * XREFs of HalQueryMaximumProcessorCount @ 0x1403BC0C0
 * Callers:
 *     PpmParkSteerInterrupts @ 0x140352C70 (PpmParkSteerInterrupts.c)
 *     HalpEfiLockOutRuntimeCallsForSystemSleep @ 0x1403BC158 (HalpEfiLockOutRuntimeCallsForSystemSleep.c)
 *     HalpTimerInitSystem @ 0x14053AFA0 (HalpTimerInitSystem.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x140541F70 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x140542DE8 (HalpMmAllocatePerProcessorMemory.c)
 *     HalpMmReservePageTablePages @ 0x140542F5C (HalpMmReservePageTablePages.c)
 *     HalpEfiBugCheckAddPagesCallback @ 0x14054CB20 (HalpEfiBugCheckAddPagesCallback.c)
 *     HalpHvDiscover @ 0x14055F020 (HalpHvDiscover.c)
 *     HalpHvTimerInitialize @ 0x14055F190 (HalpHvTimerInitialize.c)
 *     HalpTimerRegister @ 0x14056008C (HalpTimerRegister.c)
 *     HvlStartBootLogicalProcessors @ 0x140583AD8 (HvlStartBootLogicalProcessors.c)
 *     KiComputeEstimatedMaximumProcessors @ 0x1405B6790 (KiComputeEstimatedMaximumProcessors.c)
 *     RtlpHpHeapCreate @ 0x140604D0C (RtlpHpHeapCreate.c)
 *     HalpInterruptGetIrtInfo @ 0x1406FDDA4 (HalpInterruptGetIrtInfo.c)
 *     HalpQueryAcpiResourceRequirements @ 0x1407026A8 (HalpQueryAcpiResourceRequirements.c)
 *     EtwpInitLoggerContext @ 0x1408309D4 (EtwpInitLoggerContext.c)
 *     VfAvlInitializeTreeEx @ 0x140B83CD8 (VfAvlInitializeTreeEx.c)
 *     InitBootProcessor @ 0x140C0AC88 (InitBootProcessor.c)
 *     HalpInitializeInterrupts @ 0x140C0DE18 (HalpInitializeInterrupts.c)
 *     HalpInitializePmcCounterSetInfo @ 0x140C0E7E4 (HalpInitializePmcCounterSetInfo.c)
 * Callees:
 *     HalpInterruptModel @ 0x1403BAB3C (HalpInterruptModel.c)
 *     HalpInterruptSetProblemEx @ 0x1403BC82C (HalpInterruptSetProblemEx.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 HalQueryMaximumProcessorCount()
{
  int v0; // eax
  unsigned int v1; // r8d
  unsigned int v2; // r10d
  ULONG_PTR BugCheckParameter4; // r10

  if ( !HalpInterruptMaxProcessors || !HalpNumaInitializationComplete )
  {
    HalpInterruptSetProblemEx(0, 11, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\start.c", 726);
    KeBugCheckEx(0x5Cu, 0x8000uLL, HalpInterruptLastProblem, 0LL, BugCheckParameter4);
  }
  v0 = HalpInterruptModel();
  if ( (v0 == 1 || v0 == 2 || (unsigned int)(v0 - 3) <= 1) && HalpNumaConfig )
    v2 = *(_DWORD *)(HalpNumaConfig + 60);
  if ( v2 < v1 )
    return v1;
  return v2;
}
