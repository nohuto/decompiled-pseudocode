/*
 * XREFs of KiAllocateCpuSetData @ 0x140C2BC7C
 * Callers:
 *     KeStartAllProcessors @ 0x140C28DA8 (KeStartAllProcessors.c)
 * Callees:
 *     KiCreateCpuSetForProcessor @ 0x140B59DB0 (KiCreateCpuSetForProcessor.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall KiAllocateCpuSetData(unsigned int a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( KiMaximumGroups != 1 )
    a1 = (unsigned __int16)KiMaximumGroups << 6;
  result = ExAllocatePool2(0x40uLL, 32 * a1, 0x2020654BuLL);
  if ( result )
  {
    KiCpuSetAffinities = (void *)result;
    v3 = 8LL * a1;
    KiCpuSetAffinitiesShadow = (void *)(v3 + result);
    KiCpuSetData = v3 + result + v3;
    LODWORD(KiCpuSetAffinitySize) = 8 * a1;
    KiCreateCpuSetForProcessor(KiProcessorBlock[0]);
    return 1LL;
  }
  return result;
}
