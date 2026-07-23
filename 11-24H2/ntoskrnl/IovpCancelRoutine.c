/*
 * XREFs of IovpCancelRoutine @ 0x140B8F508
 * Callers:
 *     IoCancelIrp @ 0x140408D50 (IoCancelIrp.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IovpCancelRoutine(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(a1, a2);
}
