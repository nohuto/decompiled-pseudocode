/*
 * XREFs of RtlTimeFieldsToTime @ 0x1800EED00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlTimeFieldsToTime(PTIME_FIELDS TimeFields, PLARGE_INTEGER Time)
{
  return RtlpTimeFieldsToTime(&TimeFields->Year, (__int64 *)Time, 0LL);
}
