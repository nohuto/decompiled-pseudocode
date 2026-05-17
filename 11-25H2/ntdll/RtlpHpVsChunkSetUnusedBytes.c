/*
 * XREFs of RtlpHpVsChunkSetUnusedBytes @ 0x1800DD220
 * Callers:
 *     RtlpHpVsContextGrowInPlace @ 0x18002D3B8 (RtlpHpVsContextGrowInPlace.c)
 *     RtlpHpVsContextAllocateFinalize @ 0x18011D40C (RtlpHpVsContextAllocateFinalize.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RtlpHpVsChunkSetUnusedBytes(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r9
  __int16 v4; // cx
  __int16 result; // ax

  v3 = a1 + a2;
  *(_BYTE *)(v3 - 1) = 0;
  v4 = *(_WORD *)(v3 - 2);
  result = v4 ^ (a3 ^ v4) & 0x1FFF;
  if ( a3 == 1 )
    result = v4 | 0x8000;
  *(_WORD *)(v3 - 2) = result;
  return result;
}
