/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@Z @ 0x1803149E0
 * Callers:
 *     ??$_Convert_wide_to_narrow_replace_chars@U?$char_traits@D@std@@V?$allocator@D@2@@filesystem@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@W4__std_code_page@@V?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@D@1@@Z @ 0x180314210 (--$_Convert_wide_to_narrow_replace_chars@U-$char_traits@D@std@@V-$allocator@D@2@@filesystem@std@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802CF544 (-_Xlen_string@std@@YAXXZ.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBA_K_K@Z @ 0x180319A04 (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEBA_K_K@Z.c)
 *     memcpy_0 @ 0x1806CA2DC (memcpy_0.c)
 */

void **__fastcall std::string::_Reallocate_grow_by<_lambda_e1befb086ad3257e3f042a63030725f7_,unsigned __int64,char>(
        void **Src,
        unsigned __int64 a2,
        __int64 a3,
        size_t a4)
{
  size_t v4; // r14
  unsigned __int64 v7; // r13
  size_t v8; // rdi
  __int64 v9; // rbx
  char *v10; // rax
  char *v11; // r15
  char *v12; // rdi
  void *v13; // rbx

  v4 = (size_t)Src[2];
  if ( 0x7FFFFFFFFFFFFFFFLL - v4 < a2 )
    std::_Xlen_string();
  v7 = (unsigned __int64)Src[3];
  v8 = v4 + a2;
  v9 = std::string::_Calculate_growth(Src, v4 + a2);
  v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v9 + 1);
  Src[2] = (void *)v8;
  v11 = v10;
  Src[3] = (void *)v9;
  v12 = &v10[v4];
  if ( v7 <= 0xF )
  {
    memcpy_0(v10, Src, v4);
    memset_0(v12, 0, a4);
    v12[a4] = 0;
  }
  else
  {
    v13 = *Src;
    memcpy_0(v10, *Src, v4);
    memset_0(v12, 0, a4);
    v12[a4] = 0;
    std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)(v7 + 1));
  }
  *Src = v11;
  return Src;
}
