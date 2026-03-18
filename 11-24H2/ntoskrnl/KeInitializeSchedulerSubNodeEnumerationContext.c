/*
 * XREFs of KeInitializeSchedulerSubNodeEnumerationContext @ 0x14041DF40
 * Callers:
 *     KeUpdateProcessorRestrictionsEx @ 0x1405B5474 (KeUpdateProcessorRestrictionsEx.c)
 *     KeQueryNodeActiveProcessorCount @ 0x1405BAA40 (KeQueryNodeActiveProcessorCount.c)
 *     PoAllProcessorsDeepIdle @ 0x1405CDADC (PoAllProcessorsDeepIdle.c)
 *     PpmParkRegisterParking @ 0x1405D9FB4 (PpmParkRegisterParking.c)
 *     PpmParkRegisterParkingEx @ 0x1405E3C90 (PpmParkRegisterParkingEx.c)
 *     KiSynchNumaCounterSetCallback @ 0x140A60920 (KiSynchNumaCounterSetCallback.c)
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 *     KeStartAllProcessors @ 0x140C26D58 (KeStartAllProcessors.c)
 *     KiConfigureAllSchedulingInformation @ 0x140C27EA8 (KiConfigureAllSchedulingInformation.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x1406B5CF0 (RtlCopyVolatileMemory.c)
 */

void *__fastcall KeInitializeSchedulerSubNodeEnumerationContext(_QWORD *a1, __int64 a2)
{
  a1[1] = 0LL;
  a1[2] = 0LL;
  *a1 = a2;
  return RtlCopyVolatileMemory(a1 + 1, (const void *)(a2 + 16), 0x10uLL);
}
