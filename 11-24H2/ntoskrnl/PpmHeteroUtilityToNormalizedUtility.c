/*
 * XREFs of PpmHeteroUtilityToNormalizedUtility @ 0x1404176C4
 * Callers:
 *     PpmHeteroComputeCoreParkingUtilities @ 0x140416EEC (PpmHeteroComputeCoreParkingUtilities.c)
 *     PpmParkDistributeUtility @ 0x140417110 (PpmParkDistributeUtility.c)
 *     PpmCheckComputeHeteroResponse @ 0x1404E3AD0 (PpmCheckComputeHeteroResponse.c)
 *     PpmCheckComputeHeteroResponseEx @ 0x1405DC8E0 (PpmCheckComputeHeteroResponseEx.c)
 *     PpmHeteroComputeCoreParkingUtilitiesEx @ 0x1405DD6A8 (PpmHeteroComputeCoreParkingUtilitiesEx.c)
 *     PpmParkDistributeUtilityEx @ 0x1405E0904 (PpmParkDistributeUtilityEx.c)
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
