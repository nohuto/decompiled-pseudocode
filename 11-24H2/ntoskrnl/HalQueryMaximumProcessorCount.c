/*
 * XREFs of HalQueryMaximumProcessorCount @ 0x140375540
 * Callers:
 *     PpmParkSteerInterrupts @ 0x1402B0A40 (PpmParkSteerInterrupts.c)
 *     HalpEfiLockOutRuntimeCallsForSystemSleep @ 0x1403755D8 (HalpEfiLockOutRuntimeCallsForSystemSleep.c)
 *     HalpTimerInitSystem @ 0x1405387E0 (HalpTimerInitSystem.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14053F86C (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x140540738 (HalpMmAllocatePerProcessorMemory.c)
 *     HalpMmReservePageTablePages @ 0x1405408AC (HalpMmReservePageTablePages.c)
 *     HalpEfiBugCheckAddPagesCallback @ 0x14054A3E0 (HalpEfiBugCheckAddPagesCallback.c)
 *     HalpInterruptAllocateCacheDomainTable @ 0x14055691C (HalpInterruptAllocateCacheDomainTable.c)
 *     HalpHvDiscover @ 0x14055CC50 (HalpHvDiscover.c)
 *     HalpHvTimerInitialize @ 0x14055CDC0 (HalpHvTimerInitialize.c)
 *     HalpTimerRegister @ 0x14055DCBC (HalpTimerRegister.c)
 *     HvlStartBootLogicalProcessors @ 0x140580E58 (HvlStartBootLogicalProcessors.c)
 *     KiComputeEstimatedMaximumProcessors @ 0x1405B3A50 (KiComputeEstimatedMaximumProcessors.c)
 *     RtlpHpHeapCreate @ 0x14060234C (RtlpHpHeapCreate.c)
 *     HalpInterruptGetIrtInfo @ 0x1406FB9E4 (HalpInterruptGetIrtInfo.c)
 *     HalpQueryAcpiResourceRequirements @ 0x1407002E8 (HalpQueryAcpiResourceRequirements.c)
 *     EtwpInitLoggerContext @ 0x1409CFDB8 (EtwpInitLoggerContext.c)
 *     VfAvlInitializeTreeEx @ 0x140B85CD8 (VfAvlInitializeTreeEx.c)
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 *     HalpInitializeInterrupts @ 0x140C0FE18 (HalpInitializeInterrupts.c)
 *     HalpInitializePmcCounterSetInfo @ 0x140C107E4 (HalpInitializePmcCounterSetInfo.c)
 * Callees:
 *     HalpInterruptModel @ 0x1403744A8 (HalpInterruptModel.c)
 *     HalpInterruptSetProblemEx @ 0x14037537C (HalpInterruptSetProblemEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
