/*
 * XREFs of RtlDllShutdownInProgress @ 0x1800DEC30
 * Callers:
 *     RtlResetNtUserPfn @ 0x1801221A0 (RtlResetNtUserPfn.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlDllShutdownInProgress(void)
{
  return byte_1801D4988 != 0;
}
