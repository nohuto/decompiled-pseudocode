/*
 * XREFs of NtIsSystemResumeAutomatic @ 0x140AA18D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool NtIsSystemResumeAutomatic()
{
  return (PopFullWake & 3) == 0;
}
