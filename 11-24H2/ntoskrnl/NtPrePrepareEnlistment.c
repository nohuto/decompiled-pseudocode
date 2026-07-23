/*
 * XREFs of NtPrePrepareEnlistment @ 0x1404F9970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtPrePrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_NtPrePrepareEnlistment(EnlistmentHandle, TmVirtualClock);
}
