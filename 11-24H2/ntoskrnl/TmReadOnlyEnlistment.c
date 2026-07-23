/*
 * XREFs of TmReadOnlyEnlistment @ 0x1404F9E70
 * Callers:
 *     CmKtmNotification @ 0x140A00E10 (CmKtmNotification.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmReadOnlyEnlistment(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmReadOnlyEnlistment(Enlistment, TmVirtualClock);
}
