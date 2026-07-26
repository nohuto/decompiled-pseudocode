/*
 * XREFs of ?RestoreHandlersCleanupEntry@EntryFuncs@?$IdleStateMachine@VNdisWdfIdle@@@@SAGPEAX@Z @ 0x1400AFC30
 * Callers:
 *     <none>
 * Callees:
 *     ?RestoreHandlers@NdisWdfIdle@@AEAAXXZ @ 0x1400AFBBC (-RestoreHandlers@NdisWdfIdle@@AEAAXXZ.c)
 */

__int64 __fastcall IdleStateMachine<NdisWdfIdle>::EntryFuncs::RestoreHandlersCleanupEntry(NdisWdfIdle *a1)
{
  NdisWdfIdle::RestoreHandlers(a1);
  return 1LL;
}
