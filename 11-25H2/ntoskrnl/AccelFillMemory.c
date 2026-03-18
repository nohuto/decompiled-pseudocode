/*
 * XREFs of AccelFillMemory @ 0x140406838
 * Callers:
 *     MiTryZeroMemory @ 0x140210860 (MiTryZeroMemory.c)
 *     MiZeroLargePage @ 0x140223DEC (MiZeroLargePage.c)
 *     MiZeroWithUltraSpace @ 0x140224410 (MiZeroWithUltraSpace.c)
 *     MiZeroPhysicalPage @ 0x14024D560 (MiZeroPhysicalPage.c)
 *     MiFillPhysicalPages @ 0x14024D8D0 (MiFillPhysicalPages.c)
 *     MiFillMemory @ 0x1404067B0 (MiFillMemory.c)
 * Callees:
 *     AccelBuildDescriptorMemoryFill @ 0x140406878 (AccelBuildDescriptorMemoryFill.c)
 *     AccelpSubmitWork @ 0x1404F68DC (AccelpSubmitWork.c)
 */

__int64 __fastcall AccelFillMemory(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  __int64 result; // rax

  result = AccelBuildDescriptorMemoryFill(a1, a2, a3, a4, a5);
  if ( (int)result >= 0 )
    return AccelpSubmitWork(a1, a5);
  return result;
}
