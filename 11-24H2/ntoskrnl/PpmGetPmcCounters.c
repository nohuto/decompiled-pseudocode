/*
 * XREFs of PpmGetPmcCounters @ 0x140456D70
 * Callers:
 *     PpmEndActiveTimeAccumulation @ 0x1403B69C4 (PpmEndActiveTimeAccumulation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmGetPmcCounters(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = PopSnapEnergyCounters;
  if ( PopSnapEnergyCounters )
    return guard_dispatch_icall_no_overrides(*(unsigned int *)(a1 + 36), a2, a3, a4);
  return result;
}
