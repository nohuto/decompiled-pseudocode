/*
 * XREFs of NtIsSystemResumeAutomatic @ 0x140A9C040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN NtIsSystemResumeAutomatic(void)
{
  return (PopFullWake & 3) == 0;
}
