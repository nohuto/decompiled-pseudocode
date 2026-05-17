/*
 * XREFs of RtlIsCurrentThreadAttachExempt @ 0x1800F2730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 RtlIsCurrentThreadAttachExempt()
{
  return (NtCurrentTeb()->SameTebFlags & 8) != 0 && (NtCurrentTeb()->SameTebFlags & 0x20) == 0;
}
