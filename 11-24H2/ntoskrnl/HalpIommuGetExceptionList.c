/*
 * XREFs of HalpIommuGetExceptionList @ 0x14054FD78
 * Callers:
 *     IvtLegacyProcessDeviceExceptions @ 0x140B5455C (IvtLegacyProcessDeviceExceptions.c)
 *     IvtProcessDeviceExceptions @ 0x140B54844 (IvtProcessDeviceExceptions.c)
 * Callees:
 *     <none>
 */

__int64 *HalpIommuGetExceptionList()
{
  return &HalpIommuExceptionList;
}
