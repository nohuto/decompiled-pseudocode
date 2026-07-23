/*
 * XREFs of RtlGetNtGlobalFlags @ 0x1800E3D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG RtlGetNtGlobalFlags(void)
{
  return NtCurrentPeb()->NtGlobalFlag;
}
