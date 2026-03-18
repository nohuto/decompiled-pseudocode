/*
 * XREFs of IovpCancelRoutine @ 0x140B7D528
 * Callers:
 *     IoCancelIrp @ 0x14041B240 (IoCancelIrp.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IovpCancelRoutine(__int64 a1)
{
  return guard_dispatch_icall_no_overrides(a1);
}
