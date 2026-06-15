/*
 * XREFs of ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x140066A70
 * Callers:
 *     ?RuntimeClassInitialize@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAJPEBGU_GUID@@PEAUIMMDevice@@@Z @ 0x14003F920 (-RuntimeClassInitialize@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAJPEBGU_GUID@@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140018288 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1400190B8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBA_K_K@Z @ 0x1400190DC (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBA_K_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x140057BDC (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     memcpy_0 @ 0x14005B481 (memcpy_0.c)
 */

__int64 __fastcall std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4)
{
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r14
  char *v9; // rax
  size_t v10; // rbx
  char *v11; // rsi

  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlength_error("string too long");
  v7 = *(_QWORD *)(a1 + 24);
  v8 = std::wstring::_Calculate_growth(a1, a2);
  if ( v8 + 1 > 0x7FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(2 * (v8 + 1));
  *(_QWORD *)(a1 + 16) = a2;
  v10 = 2 * a2;
  *(_QWORD *)(a1 + 24) = v8;
  v11 = v9;
  memcpy_0(v9, a4, v10);
  *(_WORD *)&v11[v10] = 0;
  if ( v7 > 7 )
    std::_Deallocate<16,0>(*(void **)a1, 2 * v7 + 2);
  *(_QWORD *)a1 = v11;
  return a1;
}
