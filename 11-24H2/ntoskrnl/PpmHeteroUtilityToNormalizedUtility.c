/*
 * XREFs of PpmHeteroUtilityToNormalizedUtility @ 0x140423814
 * Callers:
 *     PpmHeteroComputeCoreParkingUtilities @ 0x14042303C (PpmHeteroComputeCoreParkingUtilities.c)
 *     PpmParkDistributeUtility @ 0x140423260 (PpmParkDistributeUtility.c)
 *     PpmCheckComputeHeteroResponse @ 0x1404EC390 (PpmCheckComputeHeteroResponse.c)
 *     PpmCheckComputeHeteroResponseEx @ 0x1405DF774 (PpmCheckComputeHeteroResponseEx.c)
 *     PpmHeteroComputeCoreParkingUtilitiesEx @ 0x1405E0088 (PpmHeteroComputeCoreParkingUtilitiesEx.c)
 *     PpmParkDistributeUtilityEx @ 0x1405E337C (PpmParkDistributeUtilityEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmHeteroUtilityToNormalizedUtility(__int64 a1, unsigned int a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 64);
  if ( v2 )
    return (v2 * a2) >> 16;
  return a2;
}
