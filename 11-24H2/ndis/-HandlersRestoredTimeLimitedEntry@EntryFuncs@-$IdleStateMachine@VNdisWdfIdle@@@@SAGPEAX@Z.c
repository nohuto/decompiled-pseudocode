/*
 * XREFs of ?HandlersRestoredTimeLimitedEntry@EntryFuncs@?$IdleStateMachine@VNdisWdfIdle@@@@SAGPEAX@Z @ 0x1400AF9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?RestoreHandlers@NdisWdfIdle@@AEAAXXZ @ 0x1400AFBBC (-RestoreHandlers@NdisWdfIdle@@AEAAXXZ.c)
 */

__int64 __fastcall IdleStateMachine<NdisWdfIdle>::EntryFuncs::HandlersRestoredTimeLimitedEntry(NdisWdfIdle *a1)
{
  NdisWdfIdle::RestoreHandlers(a1);
  KeSetTimer(&a1->m_sleepTimer, (LARGE_INTEGER)(-10000LL * (int)ndisWdfIdleTimeoutMilliseconds), &a1->m_dpc);
  return 0LL;
}
