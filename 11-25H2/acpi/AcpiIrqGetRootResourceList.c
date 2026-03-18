/*
 * XREFs of AcpiIrqGetRootResourceList @ 0x1400566D4
 * Callers:
 *     ProcessorpReserveUnownedRanges @ 0x1400C0924 (ProcessorpReserveUnownedRanges.c)
 * Callees:
 *     <none>
 */

__int64 AcpiIrqGetRootResourceList()
{
  return *(_QWORD *)(RootDeviceExtension + 672);
}
