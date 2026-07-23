/*
 * XREFs of KiIntSteerComputeCpuSet @ 0x1404A16C4
 * Callers:
 *     KiIntSteerCalculateDistribution @ 0x1402B1990 (KiIntSteerCalculateDistribution.c)
 *     KiIntSteerAssignCpuSet @ 0x1405C1860 (KiIntSteerAssignCpuSet.c)
 * Callees:
 *     KiComputeCpuSetAffinityMask @ 0x1404A1750 (KiComputeCpuSetAffinityMask.c)
 */

__int64 __fastcall KiIntSteerComputeCpuSet(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rax

  v2 = 0;
  v3 = KiComputeCpuSetAffinityMask(0LL, a1 + 152, *(unsigned __int16 *)(a1 + 144), *(_QWORD *)(a1 + 136), 0LL);
  if ( !*(_WORD *)(a1 + 72) && v3 && (v3 | *(_QWORD *)(a1 + 64)) == *(_QWORD *)(a1 + 64) )
  {
    *(_WORD *)(a1 + 184) = 0;
    *(_QWORD *)(a1 + 176) = v3;
  }
  else
  {
    *(_QWORD *)(a1 + 176) = 0LL;
    return (unsigned int)-1073741823;
  }
  return v2;
}
