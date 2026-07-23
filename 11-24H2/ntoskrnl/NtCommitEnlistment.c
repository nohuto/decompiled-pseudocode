/*
 * XREFs of NtCommitEnlistment @ 0x1404F97B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtCommitEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_NtCommitEnlistment(EnlistmentHandle, TmVirtualClock);
}
