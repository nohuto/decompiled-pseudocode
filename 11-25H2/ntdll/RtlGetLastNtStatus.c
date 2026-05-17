/*
 * XREFs of RtlGetLastNtStatus @ 0x1800FA4F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int RtlGetLastNtStatus()
{
  return NtCurrentTeb()->LastStatusValue;
}
