/*
 * XREFs of ?KiInterruptMessageDispatch@@YAEPEAU_KINTERRUPT@@PEAX@Z @ 0x140434CA0
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x14031A580 (KiCallInterruptServiceRoutine.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiInterruptMessageDispatch(struct _KINTERRUPT *a1, void *a2)
{
  return guard_dispatch_icall_no_overrides(a1, a2);
}
