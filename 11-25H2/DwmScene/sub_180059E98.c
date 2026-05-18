/*
 * XREFs of sub_180059E98 @ 0x180059E98
 * Callers:
 *     sub_180059BF0 @ 0x180059BF0 (sub_180059BF0.c)
 *     sub_180059E98 @ 0x180059E98 (sub_180059E98.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_180024424 @ 0x180024424 (sub_180024424.c)
 *     sub_18004ABD8 @ 0x18004ABD8 (sub_18004ABD8.c)
 *     sub_180059E98 @ 0x180059E98 (sub_180059E98.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180059E98(__int64 *a1, __int64 a2, __int64 a3)
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
    sub_18004ABD8(v8, v7 + 32, a2 + 32);
    *(_QWORD *)v7 = v6;
    *(_QWORD *)(v7 + 8) = v6;
    *(_QWORD *)(v7 + 16) = v6;
    *(_WORD *)(v7 + 24) = 0;
    v10[1] = 0LL;
    sub_180024424((__int64)v10);
    *(_QWORD *)(v7 + 8) = a3;
    *(_BYTE *)(v7 + 24) = *(_BYTE *)(a2 + 24);
    if ( *(_BYTE *)(v6 + 25) )
      v6 = v7;
    *(_QWORD *)v7 = sub_180059E98(a1, *(_QWORD *)a2, v7);
    *(_QWORD *)(v7 + 16) = sub_180059E98(a1, *(_QWORD *)(a2 + 16), v7);
  }
  return v6;
}
