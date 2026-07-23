/*
 * XREFs of KeQueryAuxiliaryCounterFrequency @ 0x1405AD8B0
 * Callers:
 *     NtQueryAuxiliaryCounterFrequency @ 0x1407C2130 (NtQueryAuxiliaryCounterFrequency.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KeQueryAuxiliaryCounterFrequency(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(a1, a2);
}
