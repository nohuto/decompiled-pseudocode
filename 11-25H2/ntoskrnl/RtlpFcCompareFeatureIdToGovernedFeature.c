/*
 * XREFs of RtlpFcCompareFeatureIdToGovernedFeature @ 0x140A934B0
 * Callers:
 *     RtlpFcIsGovernedFeatureTableUpdateNeeded @ 0x14077DFB4 (RtlpFcIsGovernedFeatureTableUpdateNeeded.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcCompareFeatureIdToGovernedFeature(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 <= *a2 )
    return (unsigned int)-(*a1 < *a2);
  else
    return 1LL;
}
