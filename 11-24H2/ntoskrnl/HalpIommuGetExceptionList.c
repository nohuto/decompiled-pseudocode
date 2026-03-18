/*
 * XREFs of HalpIommuGetExceptionList @ 0x140552438
 * Callers:
 *     IvtLegacyProcessDeviceExceptions @ 0x140B5250C (IvtLegacyProcessDeviceExceptions.c)
 *     IvtProcessDeviceExceptions @ 0x140B527F4 (IvtProcessDeviceExceptions.c)
 * Callees:
 *     <none>
 */

__int64 *HalpIommuGetExceptionList()
{
  return &HalpIommuExceptionList;
}
