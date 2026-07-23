/*
 * XREFs of KeInitializeSchedulerSubNodeEnumerationContext @ 0x140412310
 * Callers:
 *     KeUpdateProcessorRestrictionsEx @ 0x1405B273C (KeUpdateProcessorRestrictionsEx.c)
 *     KeQueryNodeActiveProcessorCount @ 0x1405B8070 (KeQueryNodeActiveProcessorCount.c)
 *     PoAllProcessorsDeepIdle @ 0x1405CB1F8 (PoAllProcessorsDeepIdle.c)
 *     PpmParkRegisterParking @ 0x1405D72D0 (PpmParkRegisterParking.c)
 *     PpmParkRegisterParkingEx @ 0x1405E1218 (PpmParkRegisterParkingEx.c)
 *     KiSynchNumaCounterSetCallback @ 0x140A58E70 (KiSynchNumaCounterSetCallback.c)
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 *     KiConfigureAllSchedulingInformation @ 0x140C29E84 (KiConfigureAllSchedulingInformation.c)
 *     KiCountNodeZeroSetBitsGroupAffinity @ 0x140C29F90 (KiCountNodeZeroSetBitsGroupAffinity.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 */

void *__fastcall KeInitializeSchedulerSubNodeEnumerationContext(_QWORD *a1, __int64 a2)
{
  a1[1] = 0LL;
  a1[2] = 0LL;
  *a1 = a2;
  return RtlCopyVolatileMemory(a1 + 1, (const void *)(a2 + 16), 0x10uLL);
}
