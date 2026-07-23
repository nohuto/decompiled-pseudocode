/*
 * XREFs of RtlGetCurrentPeb @ 0x1800F4A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PPEB RtlGetCurrentPeb(void)
{
  return NtCurrentTeb()->ProcessEnvironmentBlock;
}
