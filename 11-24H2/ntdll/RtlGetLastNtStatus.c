/*
 * XREFs of RtlGetLastNtStatus @ 0x1800F88D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int RtlGetLastNtStatus()
{
  return NtCurrentTeb()->LastStatusValue;
}
