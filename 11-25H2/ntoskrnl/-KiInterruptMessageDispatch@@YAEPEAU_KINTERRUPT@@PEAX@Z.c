/*
 * XREFs of ?KiInterruptMessageDispatch@@YAEPEAU_KINTERRUPT@@PEAX@Z @ 0x14043EA80
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x140279DF0 (KiCallInterruptServiceRoutine.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiInterruptMessageDispatch(struct _KINTERRUPT *a1, void *a2)
{
  return guard_dispatch_icall_no_overrides(a1, a2);
}
