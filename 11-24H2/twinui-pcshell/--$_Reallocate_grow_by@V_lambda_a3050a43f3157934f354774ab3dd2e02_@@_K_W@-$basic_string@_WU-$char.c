/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_a3050a43f3157934f354774ab3dd2e02_@@_K_W@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAAEAV01@_KV_lambda_a3050a43f3157934f354774ab3dd2e02_@@_K_W@Z @ 0x18069C7DC
 * Callers:
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1806AF494 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV-$basic_string@_WU-$char_traits@_W@std@@V-$alloca.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180048A38 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBA_K_K@Z @ 0x18017BB88 (-_Calculate_growth@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEBA_K_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802CF544 (-_Xlen_string@std@@YAXXZ.c)
 *     ??R_lambda_a3050a43f3157934f354774ab3dd2e02_@@QEBA@QEA_WQEB_W_K2_W@Z @ 0x18069C9A0 (--R_lambda_a3050a43f3157934f354774ab3dd2e02_@@QEBA@QEA_WQEB_W_K2_W@Z.c)
 */

_QWORD *__fastcall std::wstring::_Reallocate_grow_by<_lambda_a3050a43f3157934f354774ab3dd2e02_,unsigned __int64,wchar_t>(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r14
  unsigned __int64 v7; // r12
  __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  size_t size_of; // rax
  void *v11; // rax
  __int64 v12; // rcx
  void *v13; // rbp
  void *v14; // rbx

  v4 = a1[2];
  if ( 0x7FFFFFFFFFFFFFFELL - v4 < a2 )
    std::_Xlen_string();
  v7 = a1[3];
  v8 = v4 + a2;
  v9 = std::wstring::_Calculate_growth((__int64)a1, v4 + a2);
  size_of = std::_Get_size_of_n<2>(v9 + 1);
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  a1[2] = v8;
  v13 = v11;
  a1[3] = v9;
  if ( v7 <= 7 )
  {
    _lambda_a3050a43f3157934f354774ab3dd2e02_::operator()(v12, v11, a1, v4, a4);
  }
  else
  {
    v14 = (void *)*a1;
    _lambda_a3050a43f3157934f354774ab3dd2e02_::operator()(v12, v11, *a1, v4, a4);
    std::_Deallocate<16,0>(v14, (const struct std::nothrow_t *)(2 * v7 + 2));
  }
  *a1 = v13;
  return a1;
}
