/*
 * XREFs of HalpIommuGetExceptionList @ 0x14054FB38
 * Callers:
 *     IvtLegacyProcessDeviceExceptions @ 0x140B4250C (IvtLegacyProcessDeviceExceptions.c)
 *     IvtProcessDeviceExceptions @ 0x140B427F4 (IvtProcessDeviceExceptions.c)
 * Callees:
 *     <none>
 */

__int64 *HalpIommuGetExceptionList()
{
  return &HalpIommuExceptionList;
}
