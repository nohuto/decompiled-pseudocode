/*
 * XREFs of sub_180059F64 @ 0x180059F64
 * Callers:
 *     sub_180059CA0 @ 0x180059CA0 (sub_180059CA0.c)
 *     sub_180059F64 @ 0x180059F64 (sub_180059F64.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18002D5B0 @ 0x18002D5B0 (sub_18002D5B0.c)
 *     sub_18002E440 @ 0x18002E440 (sub_18002E440.c)
 *     sub_18002FA24 @ 0x18002FA24 (sub_18002FA24.c)
 *     sub_180059F64 @ 0x180059F64 (sub_180059F64.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180059F64(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v6 = *a1;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v11[0] = a1;
    v7 = sub_18002D5B0(1uLL);
    v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(v7);
    sub_18002E440(v9, (_QWORD *)(v8 + 32), (_QWORD *)(a2 + 32));
    *(_QWORD *)v8 = v6;
    *(_QWORD *)(v8 + 8) = v6;
    *(_QWORD *)(v8 + 16) = v6;
    *(_WORD *)(v8 + 24) = 0;
    v11[1] = 0LL;
    sub_18002FA24((__int64)v11);
    *(_QWORD *)(v8 + 8) = a3;
    *(_BYTE *)(v8 + 24) = *(_BYTE *)(a2 + 24);
    if ( *(_BYTE *)(v6 + 25) )
      v6 = v8;
    *(_QWORD *)v8 = sub_180059F64(a1, *(_QWORD *)a2, v8);
    *(_QWORD *)(v8 + 16) = sub_180059F64(a1, *(_QWORD *)(a2 + 16), v8);
  }
  return v6;
}
