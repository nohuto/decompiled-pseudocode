/*
 * XREFs of sub_180059FF8 @ 0x180059FF8
 * Callers:
 *     sub_180059D50 @ 0x180059D50 (sub_180059D50.c)
 *     sub_180059FF8 @ 0x180059FF8 (sub_180059FF8.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_180024584 @ 0x180024584 (sub_180024584.c)
 *     sub_18004AD38 @ 0x18004AD38 (sub_18004AD38.c)
 *     sub_180059FF8 @ 0x180059FF8 (sub_180059FF8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180059FF8(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rcx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v6 = *a1;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v10[0] = a1;
    v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x40uLL);
    sub_18004AD38(v8, v7 + 32, a2 + 32);
    *(_QWORD *)v7 = v6;
    *(_QWORD *)(v7 + 8) = v6;
    *(_QWORD *)(v7 + 16) = v6;
    *(_WORD *)(v7 + 24) = 0;
    v10[1] = 0LL;
    sub_180024584((__int64)v10);
    *(_QWORD *)(v7 + 8) = a3;
    *(_BYTE *)(v7 + 24) = *(_BYTE *)(a2 + 24);
    if ( *(_BYTE *)(v6 + 25) )
      v6 = v7;
    *(_QWORD *)v7 = sub_180059FF8(a1, *(_QWORD *)a2, v7);
    *(_QWORD *)(v7 + 16) = sub_180059FF8(a1, *(_QWORD *)(a2 + 16), v7);
  }
  return v6;
}
