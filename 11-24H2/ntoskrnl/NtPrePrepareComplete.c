/*
 * XREFs of NtPrePrepareComplete @ 0x1404F9950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtPrePrepareComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_NtPrePrepareComplete(EnlistmentHandle, TmVirtualClock);
}
