/*
 * XREFs of RtlGetCurrentThreadPrimaryGroup @ 0x18010CE20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlGetCurrentThreadPrimaryGroup()
{
  return NtCurrentTeb()->PrimaryGroupAffinity.Group;
}
