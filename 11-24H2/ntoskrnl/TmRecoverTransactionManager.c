/*
 * XREFs of TmRecoverTransactionManager @ 0x1404F9ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmRecoverTransactionManager(PKTM Tm, PLARGE_INTEGER TargetVirtualClock)
{
  return __imp_TmRecoverTransactionManager(Tm, TargetVirtualClock);
}
