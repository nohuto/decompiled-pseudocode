/*
 * XREFs of PpmHeteroUtilityToNormalizedUtility @ 0x140408E54
 * Callers:
 *     PpmHeteroComputeCoreParkingUtilities @ 0x140408264 (PpmHeteroComputeCoreParkingUtilities.c)
 *     PpmParkDistributeUtility @ 0x1404088A0 (PpmParkDistributeUtility.c)
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
