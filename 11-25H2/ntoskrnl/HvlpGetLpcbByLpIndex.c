/*
 * XREFs of HvlpGetLpcbByLpIndex @ 0x1403ED27C
 * Callers:
 *     PpmHvSnapPerformanceAccumulation @ 0x1403ECC24 (PpmHvSnapPerformanceAccumulation.c)
 *     HvlEnlightenProcessor @ 0x1404D3598 (HvlEnlightenProcessor.c)
 *     HvlGetApicIdFromLpIndex @ 0x14057FB20 (HvlGetApicIdFromLpIndex.c)
 *     HvlGetVpSintMessagePage @ 0x14057FC70 (HvlGetVpSintMessagePage.c)
 *     HvlQueryHypervisorProcessorNodeNumber @ 0x14057FD50 (HvlQueryHypervisorProcessorNodeNumber.c)
 *     HvlQueryProcessorTopologyEx @ 0x140580070 (HvlQueryProcessorTopologyEx.c)
 *     HvlpInitializeBootProcessor @ 0x140580E74 (HvlpInitializeBootProcessor.c)
 *     HvlInitializeProcessor @ 0x140702EEC (HvlInitializeProcessor.c)
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
      return &xmmword_140E3EA20;
  }
  return result;
}
