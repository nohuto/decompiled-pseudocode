/*
 * XREFs of RtlGetCurrentThreadPrimaryGroup @ 0x180107C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlGetCurrentThreadPrimaryGroup()
{
  return NtCurrentTeb()->PrimaryGroupAffinity.Group;
}
