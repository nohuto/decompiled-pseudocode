/*
 * XREFs of ?RtlpCompareRelocation@@YAHPEBX0@Z @ 0x140A26420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpCompareRelocation(_WORD *a1, _WORD *a2)
{
  unsigned __int16 v2; // r8
  unsigned __int16 v3; // r9

  v2 = *a1 & 0xFFF;
  v3 = *a2 & 0xFFF;
  if ( v2 < v3 )
    return 0xFFFFFFFFLL;
  else
    return v2 > v3;
}
