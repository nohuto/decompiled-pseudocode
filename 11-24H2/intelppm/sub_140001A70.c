/*
 * XREFs of sub_140001A70 @ 0x140001A70
 * Callers:
 *     sub_1400014D0 @ 0x1400014D0 (sub_1400014D0.c)
 *     sub_14000170C @ 0x14000170C (sub_14000170C.c)
 *     sub_140008540 @ 0x140008540 (sub_140008540.c)
 *     sub_140009E10 @ 0x140009E10 (sub_140009E10.c)
 *     sub_140009EE0 @ 0x140009EE0 (sub_140009EE0.c)
 *     sub_140009FE0 @ 0x140009FE0 (sub_140009FE0.c)
 * Callees:
 *     sub_140001990 @ 0x140001990 (sub_140001990.c)
 *     sub_140001AF0 @ 0x140001AF0 (sub_140001AF0.c)
 */

void __fastcall sub_140001A70(_BYTE *a1, __int64 a2)
{
  __int64 v2; // r10
  _BYTE *v3; // r9
  unsigned __int64 v4; // rax
  unsigned __int8 v5; // cl

  v2 = a2;
  v3 = a1;
  if ( a1 )
  {
    if ( a1[2] || a1[1] != a1[3] )
    {
      v4 = sub_140001990((__int64)a1);
      v5 = v3[1];
      if ( v5 < 0x40u || v3[2] )
        v2 = v4 & ~(((1LL << v5) - 1) << v3[2]) | (((1LL << v5) - 1) << v3[2]) & (v2 << v3[2]);
    }
    sub_140001AF0(v3, v2);
  }
}
