/*
 * XREFs of NtRecoverEnlistment @ 0x1404F9AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtRecoverEnlistment(HANDLE EnlistmentHandle, PVOID EnlistmentKey)
{
  return __imp_NtRecoverEnlistment(EnlistmentHandle, EnlistmentKey);
}
