/*
 * XREFs of sub_180095D94 @ 0x180095D94
 * Callers:
 *     sub_18002A310 @ 0x18002A310 (sub_18002A310.c)
 * Callees:
 *     sub_18000C620 @ 0x18000C620 (sub_18000C620.c)
 *     sub_180027FBC @ 0x180027FBC (sub_180027FBC.c)
 *     sub_18002815C @ 0x18002815C (sub_18002815C.c)
 *     sub_180095E8C @ 0x180095E8C (sub_180095E8C.c)
 *     sub_180097A70 @ 0x180097A70 (sub_180097A70.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180095D94(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  int v6; // eax
  int v7; // eax
  int v8; // eax
  _BYTE v10[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]

  sub_180027FBC(a1);
  sub_180095E8C(a1, v10, a2);
  if ( !v10[0] )
  {
    if ( a2 < sub_18000C620((const __m128i *)(a1 + 144), (const __m128i *)(a1 + 184), 0)->m128i_i64[0] )
    {
      sub_18002815C(a1);
      return 2LL;
    }
    goto LABEL_12;
  }
  v6 = sub_180097A70(*(_QWORD *)(a1 + 16 * v11 + 64), a3);
  if ( !v6 )
  {
LABEL_12:
    sub_18002815C(a1);
    return 3LL;
  }
  v7 = v6 - 1;
  if ( v7 && (v8 = v7 - 1) != 0 )
  {
    if ( v8 == 1 )
    {
      sub_18002815C(a1);
      return 0LL;
    }
    else
    {
      sub_18002815C(a1);
      return 4LL;
    }
  }
  else
  {
    sub_18002815C(a1);
    return 1LL;
  }
}
