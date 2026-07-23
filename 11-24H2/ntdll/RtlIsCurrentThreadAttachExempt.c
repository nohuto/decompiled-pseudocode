/*
 * XREFs of RtlIsCurrentThreadAttachExempt @ 0x1800EB840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsCurrentThreadAttachExempt(void)
{
  return (NtCurrentTeb()->SameTebFlags & 8) != 0 && (NtCurrentTeb()->SameTebFlags & 0x20) == 0;
}
