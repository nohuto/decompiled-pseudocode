/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_9a2017f333e4665a2f587aa8c7c709b8_@@_K_KG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_9a2017f333e4665a2f587aa8c7c709b8_@@_K2G@Z @ 0x180142FB8
 * Callers:
 *     ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K0G@Z @ 0x1801496C4 (-insert@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_K0G@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002A5BC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBA_K_K@Z @ 0x18005357C (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBA_K_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180053E30 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     memcpy_0 @ 0x1800A7F28 (memcpy_0.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1800C00BC (-_Xlen_string@std@@YAXXZ.c)
 */

const void **__fastcall std::wstring::_Reallocate_grow_by<_lambda_9a2017f333e4665a2f587aa8c7c709b8_,unsigned __int64,unsigned __int64,unsigned short>(
        const void **Src)
{
  const void *v1; // rbp
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // rbx
  SIZE_T size_of; // rax
  _WORD *v6; // rax
  _WORD *v7; // r14
  size_t v8; // r8
  void *v9; // rcx
  char *v10; // rbx
  const void *v11; // rdx

  v1 = Src[2];
  if ( v1 == (const void *)0x7FFFFFFFFFFFFFFELL )
    std::_Xlen_string();
  v3 = (unsigned __int64)Src[3];
  v4 = std::wstring::_Calculate_growth((__int64)Src, (__int64)v1 + 1);
  size_of = std::_Get_size_of_n<2>(v4 + 1);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  Src[2] = (char *)v1 + 1;
  v7 = v6;
  Src[3] = (const void *)v4;
  v8 = 2LL * (_QWORD)v1 + 2;
  v9 = v6 + 1;
  if ( v3 <= 7 )
  {
    *v6 = 94;
    memcpy_0(v9, Src, v8);
  }
  else
  {
    v10 = (char *)*Src;
    v11 = *Src;
    *v6 = 94;
    memcpy_0(v9, v11, v8);
    std::_Deallocate<16,0>(v10, (const struct std::nothrow_t *)(2 * v3 + 2));
  }
  *Src = v7;
  return Src;
}
