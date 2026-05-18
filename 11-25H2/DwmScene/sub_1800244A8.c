/*
 * XREFs of sub_1800244A8 @ 0x1800244A8
 * Callers:
 *     sub_180023ADC @ 0x180023ADC (sub_180023ADC.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_180012040 @ 0x180012040 (sub_180012040.c)
 */

__int64 __fastcall sub_1800244A8(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v3; // rcx

  v1 = *(__int64 **)(a1 + 8);
  if ( v1 )
  {
    v3 = v1[5];
    if ( v3 )
    {
      sub_180012040(v3, v1[6]);
      sub_180010134((void *)v1[5], (v1[7] - v1[5]) & 0xFFFFFFFFFFFFFFF0uLL);
      v1[5] = 0LL;
      v1[6] = 0LL;
      v1[7] = 0LL;
    }
  }
  return sub_180024424(a1);
}
