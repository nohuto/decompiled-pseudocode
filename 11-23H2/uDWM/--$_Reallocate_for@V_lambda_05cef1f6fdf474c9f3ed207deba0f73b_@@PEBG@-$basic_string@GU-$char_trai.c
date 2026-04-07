/*
 * XREFs of ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x180032368
 * Callers:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180032300 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001F154 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180032448 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x180066218 (memcpy_0.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800B8754 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x18010DD40 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4)
{
  __int64 v4; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  _WORD *v12; // rax
  _WORD *v13; // rbp

  v4 = 0x7FFFFFFFFFFFFFFELL;
  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    std::_Dwm_Xlength_error((const char *)a1);
  v8 = *(_QWORD *)(a1 + 24);
  v9 = a2 | 7;
  if ( v9 > 0x7FFFFFFFFFFFFFFELL || (v10 = v8 >> 1, v8 > 0x7FFFFFFFFFFFFFFELL - (v8 >> 1)) )
  {
    v11 = 0x7FFFFFFFFFFFFFFFLL;
  }
  else
  {
    v4 = v10 + v8;
    if ( v9 >= v10 + v8 )
      v4 = v9;
    v11 = v4 + 1;
    if ( (unsigned __int64)(v4 + 1) > 0x7FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
  }
  v12 = (_WORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(2 * v11);
  *(_QWORD *)(a1 + 24) = v4;
  *(_QWORD *)(a1 + 16) = a2;
  v13 = v12;
  memcpy_0(v12, a4, 2 * a2);
  v13[a2] = 0;
  if ( v8 >= 8 )
    std::_Deallocate<16,0>(*(void **)a1, 2 * v8 + 2);
  *(_QWORD *)a1 = v13;
  return a1;
}
