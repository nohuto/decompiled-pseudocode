/*
 * XREFs of TmPrePrepareComplete @ 0x1404FC4F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmPrePrepareComplete(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmPrePrepareComplete(Enlistment, TmVirtualClock);
}
