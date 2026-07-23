/*
 * XREFs of RtlTimeToTimeFields @ 0x1800F06D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlTimeToTimeFields(PLARGE_INTEGER Time, PTIME_FIELDS TimeFields)
{
  RtlpTimeToTimeFields((__int64 *)Time, TimeFields, 0LL);
}
