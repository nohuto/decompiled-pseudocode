/*
 * XREFs of HvlpGetLpcbByLpIndex @ 0x1404485D0
 * Callers:
 *     PpmHvSnapPerformanceAccumulation @ 0x140448064 (PpmHvSnapPerformanceAccumulation.c)
 *     HvlEnlightenProcessor @ 0x1404D33C4 (HvlEnlightenProcessor.c)
 *     HvlGetApicIdFromLpIndex @ 0x1405832D0 (HvlGetApicIdFromLpIndex.c)
 *     HvlGetVpSintMessagePage @ 0x140583420 (HvlGetVpSintMessagePage.c)
 *     HvlQueryHypervisorProcessorNodeNumber @ 0x140583500 (HvlQueryHypervisorProcessorNodeNumber.c)
 *     HvlQueryProcessorTopologyEx @ 0x140583820 (HvlQueryProcessorTopologyEx.c)
 *     HvlpInitializeBootProcessor @ 0x140584624 (HvlpInitializeBootProcessor.c)
 *     HvlInitializeProcessor @ 0x14070EDCC (HvlInitializeProcessor.c)
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
      return &xmmword_140E3EC60;
  }
  return result;
}
