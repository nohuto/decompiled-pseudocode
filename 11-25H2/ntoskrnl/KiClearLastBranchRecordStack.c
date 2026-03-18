/*
 * XREFs of KiClearLastBranchRecordStack @ 0x14041F030
 * Callers:
 *     SwapContext @ 0x1406A7870 (SwapContext.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiClearLastBranchRecordStack(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(a1, a2);
}
