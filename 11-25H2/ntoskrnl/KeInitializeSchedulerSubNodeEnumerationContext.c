/*
 * XREFs of KeInitializeSchedulerSubNodeEnumerationContext @ 0x1404206E0
 * Callers:
 *     KeQueryNodeActiveProcessorCount @ 0x1405B6BB0 (KeQueryNodeActiveProcessorCount.c)
 *     PoAllProcessorsDeepIdle @ 0x1405C9424 (PoAllProcessorsDeepIdle.c)
 *     PpmParkRegisterParking @ 0x1405D55E0 (PpmParkRegisterParking.c)
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 *     KiSynchNumaCounterSetCallback @ 0x140A5EA90 (KiSynchNumaCounterSetCallback.c)
 *     KeStartAllProcessors @ 0x140C15CC8 (KeStartAllProcessors.c)
 *     KiConfigureAllSchedulingInformation @ 0x140C16E18 (KiConfigureAllSchedulingInformation.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x1406AAA20 (RtlCopyVolatileMemory.c)
 */

void *__fastcall KeInitializeSchedulerSubNodeEnumerationContext(_QWORD *a1, __int64 a2)
{
  a1[1] = 0LL;
  a1[2] = 0LL;
  *a1 = a2;
  return RtlCopyVolatileMemory(a1 + 1, (const void *)(a2 + 16), 0x10uLL);
}
