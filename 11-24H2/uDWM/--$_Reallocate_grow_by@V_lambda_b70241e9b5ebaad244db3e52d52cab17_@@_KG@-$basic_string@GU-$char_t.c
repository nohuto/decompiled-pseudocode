/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@Z @ 0x180062DF0
 * Callers:
 *     ?CreateTextFormat@CDWriteText@@AEAAJXZ @ 0x1800624A0 (-CreateTextFormat@CDWriteText@@AEAAJXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800398F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180039930 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBA_K_K@Z @ 0x180062F18 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBA_K_K@Z.c)
 *     ??R_lambda_b70241e9b5ebaad244db3e52d52cab17_@@QEBA@QEAGQEBG_K2G@Z @ 0x180062F5C (--R_lambda_b70241e9b5ebaad244db3e52d52cab17_@@QEBA@QEAGQEBG_K2G@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180095314 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180096728 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

char *__fastcall std::wstring::_Reallocate_grow_by<_lambda_b70241e9b5ebaad244db3e52d52cab17_,unsigned __int64,unsigned short>(
        char *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r14
  unsigned __int64 v7; // r15
  __int64 v8; // rbx
  const struct std::nothrow_t *v9; // rdx
  __int64 v10; // r13
  void *v11; // rax
  __int64 v12; // rcx
  void *v13; // rsi
  void *v15; // rbx

  v4 = *((_QWORD *)a1 + 2);
  if ( 0x7FFFFFFFFFFFFFFELL - v4 < a2 )
    std::_Dwm_Xlength_error(a1);
  v7 = *((_QWORD *)a1 + 3);
  v8 = v4 + a2;
  v10 = std::wstring::_Calculate_growth(a1, v4 + a2);
  if ( (unsigned __int64)(v10 + 1) > 0x7FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(2 * (v10 + 1), v9);
  *((_QWORD *)a1 + 2) = v8;
  v13 = v11;
  *((_QWORD *)a1 + 3) = v10;
  if ( v7 > 7 )
  {
    v15 = *(void **)a1;
    _lambda_b70241e9b5ebaad244db3e52d52cab17_::operator()(v12, v11, *(_QWORD *)a1, v4, a4);
    std::_Deallocate<16,0>(v15, (const struct std::nothrow_t *)(2 * v7 + 2));
  }
  else
  {
    _lambda_b70241e9b5ebaad244db3e52d52cab17_::operator()(v12, v11, a1, v4, a4);
  }
  *(_QWORD *)a1 = v13;
  return a1;
}
