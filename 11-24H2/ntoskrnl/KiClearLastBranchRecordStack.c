/*
 * XREFs of KiClearLastBranchRecordStack @ 0x140410340
 * Callers:
 *     SwapContext @ 0x1406B3AE0 (SwapContext.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiClearLastBranchRecordStack(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(a1, a2);
}
