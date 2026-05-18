/*
 * XREFs of sub_180054430 @ 0x180054430
 * Callers:
 *     sub_180054430 @ 0x180054430 (sub_180054430.c)
 *     sub_1800555EC @ 0x1800555EC (sub_1800555EC.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_180029C3C @ 0x180029C3C (sub_180029C3C.c)
 *     sub_180054430 @ 0x180054430 (sub_180054430.c)
 *     sub_180054A9C @ 0x180054A9C (sub_180054A9C.c)
 */

__int64 __fastcall sub_180054430(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rcx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v6 = *a1;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v10[0] = a1;
    v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x58uLL);
    sub_180054A9C(v8, v7 + 32, a2 + 32);
    *(_QWORD *)v7 = v6;
    *(_QWORD *)(v7 + 8) = v6;
    *(_QWORD *)(v7 + 16) = v6;
    *(_WORD *)(v7 + 24) = 0;
    v10[1] = 0LL;
    sub_180029C3C((__int64)v10);
    *(_QWORD *)(v7 + 8) = a3;
    *(_BYTE *)(v7 + 24) = *(_BYTE *)(a2 + 24);
    if ( *(_BYTE *)(v6 + 25) )
      v6 = v7;
    *(_QWORD *)v7 = sub_180054430(a1, *(_QWORD *)a2, v7);
    *(_QWORD *)(v7 + 16) = sub_180054430(a1, *(_QWORD *)(a2 + 16), v7);
  }
  return v6;
}
