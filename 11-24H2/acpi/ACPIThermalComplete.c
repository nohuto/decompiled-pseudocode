/*
 * XREFs of ACPIThermalComplete @ 0x140036740
 * Callers:
 *     <none>
 * Callees:
 *     ACPIThermalLoop @ 0x1400379FC (ACPIThermalLoop.c)
 */

__int64 __fastcall ACPIThermalComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ACPIThermalLoop(a4, 0x40000000LL);
}
