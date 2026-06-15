/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@Z @ 0x1800DE350
 * Callers:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x1800E314C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002203C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBA_K_K@Z @ 0x180060F8C (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBA_K_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180061AE0 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1800C14AC (-_Xlen_string@std@@YAXXZ.c)
 *     ??R_lambda_b70241e9b5ebaad244db3e52d52cab17_@@QEBA@QEAGQEBG_K2G@Z @ 0x1800E04C4 (--R_lambda_b70241e9b5ebaad244db3e52d52cab17_@@QEBA@QEAGQEBG_K2G@Z.c)
 */

char **__fastcall std::wstring::_Reallocate_grow_by<_lambda_b70241e9b5ebaad244db3e52d52cab17_,unsigned __int64,unsigned short>(
        char **a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char *v4; // r14
  unsigned __int64 v7; // r12
  char *v8; // rdi
  unsigned __int64 v9; // rbx
  SIZE_T size_of; // rax
  char *v11; // rax
  __int64 v12; // rcx
  char *v13; // rbp
  char *v14; // rbx

  v4 = a1[2];
  if ( 0x7FFFFFFFFFFFFFFELL - (__int64)v4 < a2 )
    std::_Xlen_string();
  v7 = (unsigned __int64)a1[3];
  v8 = &v4[a2];
  v9 = std::wstring::_Calculate_growth((__int64)a1, (__int64)&v4[a2]);
  size_of = std::_Get_size_of_n<2>(v9 + 1);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  a1[2] = v8;
  v13 = v11;
  a1[3] = (char *)v9;
  if ( v7 <= 7 )
  {
    _lambda_b70241e9b5ebaad244db3e52d52cab17_::operator()(v12, v11, a1, v4, a4);
  }
  else
  {
    v14 = *a1;
    _lambda_b70241e9b5ebaad244db3e52d52cab17_::operator()(v12, v11, *a1, v4, a4);
    std::_Deallocate<16,0>(v14, (const struct std::nothrow_t *)(2 * v7 + 2));
  }
  *a1 = v13;
  return a1;
}
