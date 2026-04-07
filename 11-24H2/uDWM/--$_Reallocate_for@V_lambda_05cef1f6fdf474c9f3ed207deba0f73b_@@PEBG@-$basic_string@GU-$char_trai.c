/*
 * XREFs of ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x180062028
 * Callers:
 *     ?SetText@CDWriteText@@UEAAJPEBG@Z @ 0x180061F40 (-SetText@CDWriteText@@UEAAJPEBG@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800398F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180039930 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBA_K_K@Z @ 0x180062F18 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBA_K_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180095314 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180096728 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     memcpy_0 @ 0x1800F6378 (memcpy_0.c)
 */

__int64 __fastcall std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4)
{
  unsigned __int64 v7; // rbp
  const struct std::nothrow_t *v8; // rdx
  __int64 v9; // r14
  char *v10; // rax
  size_t v11; // rbx
  char *v12; // rsi

  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    std::_Dwm_Xlength_error((const char *)a1);
  v7 = *(_QWORD *)(a1 + 24);
  v9 = std::wstring::_Calculate_growth();
  if ( (unsigned __int64)(v9 + 1) > 0x7FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(2 * (v9 + 1), v8);
  *(_QWORD *)(a1 + 16) = a2;
  v11 = 2 * a2;
  *(_QWORD *)(a1 + 24) = v9;
  v12 = v10;
  memcpy_0(v10, a4, v11);
  *(_WORD *)&v12[v11] = 0;
  if ( v7 > 7 )
    std::_Deallocate<16,0>(*(void **)a1, (const struct std::nothrow_t *)(2 * v7 + 2));
  *(_QWORD *)a1 = v12;
  return a1;
}
