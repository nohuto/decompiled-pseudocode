/*
 * XREFs of ?KiInterruptMessageDispatch@@YAEPEAU_KINTERRUPT@@PEAX@Z @ 0x14043F0F0
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x14033B0A0 (KiCallInterruptServiceRoutine.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiInterruptMessageDispatch(struct _KINTERRUPT *a1, void *a2, __int64 a3, __int64 a4)
{
  return guard_dispatch_icall_no_overrides(a1, a2, a1->MessageIndex, a4);
}
