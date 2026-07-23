/*
 * XREFs of IntpProcessorCompareEfficiencyClass @ 0x140C5F180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IntpProcessorCompareEfficiencyClass(_BYTE *a1, _BYTE *a2)
{
  unsigned __int8 v2; // r8
  unsigned __int8 v3; // cl

  v2 = a1[1];
  v3 = a2[1];
  if ( v2 >= v3 )
    return v2 > v3;
  else
    return 0xFFFFFFFFLL;
}
