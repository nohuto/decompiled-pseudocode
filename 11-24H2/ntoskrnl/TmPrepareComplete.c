/*
 * XREFs of TmPrepareComplete @ 0x1404FC530
 * Callers:
 *     CmKtmNotification @ 0x140A048E0 (CmKtmNotification.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmPrepareComplete(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmPrepareComplete(Enlistment, TmVirtualClock);
}
