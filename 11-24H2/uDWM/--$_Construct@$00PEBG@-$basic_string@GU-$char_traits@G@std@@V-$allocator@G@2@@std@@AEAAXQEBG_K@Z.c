/*
 * XREFs of ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180062D20
 * Callers:
 *     ?CreateTextFormat@CDWriteText@@AEAAJXZ @ 0x1800624A0 (-CreateTextFormat@CDWriteText@@AEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180039930 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBA_K_K@Z @ 0x180062F18 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBA_K_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180095314 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180096728 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     memcpy_0 @ 0x1800F6378 (memcpy_0.c)
 */

__int64 __fastcall std::wstring::_Construct<1,unsigned short const *>(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  const struct std::nothrow_t *v5; // rdx
  __int64 v6; // rbp
  char *v7; // rax
  size_t v8; // rbx
  char *v9; // rdi
  __int64 result; // rax
  __int64 v11; // rbx

  if ( a3 > 0x7FFFFFFFFFFFFFFELL )
    std::_Dwm_Xlength_error((const char *)a1);
  *(_QWORD *)(a1 + 24) = 7LL;
  if ( a3 <= 7 )
  {
    *(_QWORD *)(a1 + 16) = a3;
    v11 = 2 * a3;
    memcpy_0((void *)a1, L"Segoe UI", 2 * a3);
    result = 0LL;
    *(_WORD *)(v11 + a1) = 0;
  }
  else
  {
    v6 = std::wstring::_Calculate_growth(a1, a3);
    if ( (unsigned __int64)(v6 + 1) > 0x7FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(2 * (v6 + 1), v5);
    *(_QWORD *)(a1 + 16) = a3;
    v8 = 2 * a3;
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 24) = v6;
    v9 = v7;
    memcpy_0(v7, L"Segoe UI", v8);
    result = 0LL;
    *(_WORD *)&v9[v8] = 0;
  }
  return result;
}
