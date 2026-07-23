/*
 * XREFs of RtlpFcCompareFeatureToUpdate @ 0x140A93CB0
 * Callers:
 *     RtlpFcCalculateRequiredSizeForNewFeatureTable @ 0x140A93B4C (RtlpFcCalculateRequiredSizeForNewFeatureTable.c)
 *     RtlpFcUpdateFeatureConfiguration @ 0x140AA0444 (RtlpFcUpdateFeatureConfiguration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcCompareFeatureToUpdate(_DWORD *a1, _DWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // eax

  if ( *a1 > *a2 )
    return 1LL;
  if ( *a1 < *a2 )
    return 0xFFFFFFFFLL;
  v3 = a1[1];
  v4 = a2[1];
  v5 = v3 & 0xF;
  if ( v4 <= v5 )
    return (unsigned int)-(v4 < v5);
  else
    return 1LL;
}
