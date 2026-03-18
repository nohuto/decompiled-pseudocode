/*
 * XREFs of NtSinglePhaseReject @ 0x1404FA030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtSinglePhaseReject(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_NtSinglePhaseReject(EnlistmentHandle, TmVirtualClock);
}
