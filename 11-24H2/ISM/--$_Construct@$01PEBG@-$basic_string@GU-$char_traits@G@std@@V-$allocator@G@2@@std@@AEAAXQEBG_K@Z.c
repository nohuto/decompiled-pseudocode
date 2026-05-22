/*
 * XREFs of ??$_Construct@$01PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180067AC0
 * Callers:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180067A84 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x180067B74 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009ADDC (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x18009C2CC (-_Xlen_string@std@@YAXXZ.c)
 *     memcpy_0 @ 0x1801CF19C (memcpy_0.c)
 */

void __fastcall std::wstring::_Construct<2,unsigned short const *>(__int64 a1, _OWORD *a2, unsigned __int64 a3)
{
  __int64 v6; // rbp
  void *v7; // rax

  if ( a3 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlen_string();
  *(_QWORD *)(a1 + 24) = 7LL;
  if ( a3 <= 7 )
  {
    *(_QWORD *)(a1 + 16) = a3;
    *(_OWORD *)a1 = *a2;
  }
  else
  {
    v6 = std::wstring::_Calculate_growth(a3);
    if ( (unsigned __int64)(v6 + 1) > 0x7FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(2 * (v6 + 1));
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 16) = a3;
    *(_QWORD *)(a1 + 24) = v6;
    memcpy_0(v7, a2, 2 * a3 + 2);
  }
}
