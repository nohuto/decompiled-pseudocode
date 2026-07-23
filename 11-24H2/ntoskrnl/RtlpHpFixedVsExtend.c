/*
 * XREFs of RtlpHpFixedVsExtend @ 0x140602E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpFixedVsExtend(__int64 a1, unsigned __int64 a2)
{
  signed __int8 v2; // r9
  unsigned __int64 v3; // rdx
  signed __int8 v4; // al

  v2 = *(_BYTE *)(a1 + 33);
  v3 = a2 >> 6;
  while ( v2 >= v3 )
  {
    v4 = _InterlockedCompareExchange8((volatile signed __int8 *)(a1 + 33), v2 - v3, v2);
    if ( v2 == v4 )
      return a1 + ((char)(3 - v2) << 6) + 192LL;
    v2 = v4;
  }
  return 0LL;
}
