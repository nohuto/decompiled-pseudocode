/*
 * XREFs of RtlGetLastWin32Error @ 0x1800ED8C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int RtlGetLastWin32Error()
{
  return NtCurrentTeb()->LastErrorValue;
}
