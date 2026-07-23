/*
 * XREFs of HvlpGetLpcbByLpIndex @ 0x140440CF0
 * Callers:
 *     PpmHvSnapPerformanceAccumulation @ 0x140440784 (PpmHvSnapPerformanceAccumulation.c)
 *     HvlEnlightenProcessor @ 0x1404CC584 (HvlEnlightenProcessor.c)
 *     HvlGetApicIdFromLpIndex @ 0x140580650 (HvlGetApicIdFromLpIndex.c)
 *     HvlGetVpSintMessagePage @ 0x1405807A0 (HvlGetVpSintMessagePage.c)
 *     HvlQueryHypervisorProcessorNodeNumber @ 0x140580880 (HvlQueryHypervisorProcessorNodeNumber.c)
 *     HvlQueryProcessorTopologyEx @ 0x140580BA0 (HvlQueryProcessorTopologyEx.c)
 *     HvlpInitializeBootProcessor @ 0x1405819A4 (HvlpInitializeBootProcessor.c)
 *     HvlInitializeProcessor @ 0x14070C95C (HvlInitializeProcessor.c)
 * Callees:
 *     <none>
 */

__int128 *__fastcall HvlpGetLpcbByLpIndex(unsigned int a1)
{
  __int128 *result; // rax
  _DWORD *v2; // rdx
  unsigned int i; // r8d

  if ( a1 >= (unsigned int)HvlpLogicalProcessorCount
    || (result = (__int128 *)((char *)HvlpLogicalProcessorRegions + 104 * a1), *((_DWORD *)result + 1) != a1) )
  {
    v2 = HvlpLogicalProcessorRegions;
    result = 0LL;
    for ( i = 0; i < (unsigned int)HvlpLogicalProcessorCount; ++i )
    {
      if ( v2[1] == a1 )
        return (__int128 *)v2;
      v2 += 26;
    }
    if ( !a1 )
      return &xmmword_140E3EDA0;
  }
  return result;
}
