/*
 * XREFs of ACPIThermalTMPCallback @ 0x1400379A0
 * Callers:
 *     ACPIThermalLoopEx @ 0x140037A14 (ACPIThermalLoopEx.c)
 * Callees:
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     ACPIThermalLoop @ 0x1400379FC (ACPIThermalLoop.c)
 *     ACPIThermalUpdateTemperature @ 0x140038030 (ACPIThermalUpdateTemperature.c)
 */

__int64 __fastcall ACPIThermalTMPCallback(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  if ( a2 >= 0 )
  {
    ACPIThermalUpdateTemperature(a4, *(unsigned int *)(a3 + 16));
    dword_1400890B8 = 0;
    pszDest = 0;
    FreeDataBuffs(a3, 1u);
  }
  return ACPIThermalLoop(a4, 0x40000000LL);
}
