/*
 * XREFs of NtGetTickCount_syscall_thunk @ 0x180166F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned __int64 NtGetTickCount_syscall_thunk()
{
  return RtlGetTickCount();
}
