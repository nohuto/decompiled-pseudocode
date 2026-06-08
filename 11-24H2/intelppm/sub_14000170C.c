/*
 * XREFs of sub_14000170C @ 0x14000170C
 * Callers:
 *     sub_1400015F0 @ 0x1400015F0 (sub_1400015F0.c)
 *     sub_140008E98 @ 0x140008E98 (sub_140008E98.c)
 *     sub_140008ECC @ 0x140008ECC (sub_140008ECC.c)
 * Callees:
 *     sub_140001790 @ 0x140001790 (sub_140001790.c)
 *     sub_1400018A4 @ 0x1400018A4 (sub_1400018A4.c)
 *     sub_140001A70 @ 0x140001A70 (sub_140001A70.c)
 */

__int64 __fastcall sub_14000170C(_BYTE *a1, __int64 a2)
{
  __int64 v2; // rbx
  _BYTE *v3; // r11
  __int64 v4; // rax
  unsigned __int8 v5; // cl

  v2 = a2;
  v3 = a1;
  if ( *a1 == 1 || *a1 == 127 )
    return sub_140001A70(a1, a2);
  if ( a1[2] || a1[1] != 64 )
  {
    v4 = sub_1400018A4();
    v5 = v3[1];
    if ( v5 < 0x40u || v3[2] )
      v2 = v4 & ~(((1LL << v5) - 1) << v3[2]) | (((1LL << v5) - 1) << v3[2]) & (v2 << v3[2]);
  }
  return sub_140001790(v3, v2);
}
