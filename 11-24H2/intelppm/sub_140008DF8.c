/*
 * XREFs of sub_140008DF8 @ 0x140008DF8
 * Callers:
 *     sub_140008E98 @ 0x140008E98 (sub_140008E98.c)
 *     sub_14000E5C0 @ 0x14000E5C0 (sub_14000E5C0.c)
 * Callees:
 *     sub_140008EFC @ 0x140008EFC (sub_140008EFC.c)
 */

__int64 __fastcall sub_140008DF8(unsigned int a1, _BYTE *a2, __int64 a3)
{
  char v3; // r11
  __int64 v6; // rdx
  unsigned __int8 v7; // di
  __int64 v8; // r9
  char v9; // cl
  __int64 v10; // rdx

  v3 = a2[2];
  if ( v3 || a2[1] != a2[3] )
  {
    v7 = a2[1];
    v8 = ((1LL << v7) - 1) << v3;
    v9 = a2[3];
    if ( v9 == 64 )
      v10 = -1LL;
    else
      v10 = (1LL << v9) - 1;
    v6 = ~v8 & v10;
    if ( v7 < 0x40u || v3 )
      a3 = v8 & (a3 << v3);
  }
  else
  {
    v6 = 0LL;
  }
  return sub_140008EFC(a1, a2, v6, a3);
}
