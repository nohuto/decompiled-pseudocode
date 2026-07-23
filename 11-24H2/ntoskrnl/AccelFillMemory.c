/*
 * XREFs of AccelFillMemory @ 0x140402B5C
 * Callers:
 *     MiZeroPhysicalPage @ 0x14024B990 (MiZeroPhysicalPage.c)
 *     MiZeroLargePage @ 0x140312ABC (MiZeroLargePage.c)
 *     MiZeroWithUltraSpace @ 0x140312E40 (MiZeroWithUltraSpace.c)
 *     MiTryZeroMemory @ 0x140331A60 (MiTryZeroMemory.c)
 * Callees:
 *     AccelBuildDescriptorMemoryFill @ 0x140402B9C (AccelBuildDescriptorMemoryFill.c)
 *     AccelpSubmitWork @ 0x140403070 (AccelpSubmitWork.c)
 */

__int64 __fastcall AccelFillMemory(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  __int64 result; // rax

  result = AccelBuildDescriptorMemoryFill(a1, a2, a3, a4, a5);
  if ( (int)result >= 0 )
    return AccelpSubmitWork(a1, a5);
  return result;
}
