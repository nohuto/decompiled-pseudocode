/*
 * XREFs of NtIsSystemResumeAutomatic @ 0x140A9C040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool NtIsSystemResumeAutomatic()
{
  return (PopFullWake & 3) == 0;
}
