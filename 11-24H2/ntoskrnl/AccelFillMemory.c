/*
 * XREFs of AccelFillMemory @ 0x14040A67C
 * Callers:
 *     MiTryZeroMemory @ 0x14020BD20 (MiTryZeroMemory.c)
 *     MiZeroPhysicalPage @ 0x14021EC40 (MiZeroPhysicalPage.c)
 *     MiZeroLargePage @ 0x140308BDC (MiZeroLargePage.c)
 *     MiZeroWithUltraSpace @ 0x140308F60 (MiZeroWithUltraSpace.c)
 * Callees:
 *     AccelBuildDescriptorMemoryFill @ 0x14040A6BC (AccelBuildDescriptorMemoryFill.c)
 *     AccelpSubmitWork @ 0x14040AB90 (AccelpSubmitWork.c)
 */

__int64 __fastcall AccelFillMemory(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  __int64 result; // rax

  result = AccelBuildDescriptorMemoryFill(a1, a2, a3, a4, a5);
  if ( (int)result >= 0 )
    return AccelpSubmitWork(a1, a5);
  return result;
}
