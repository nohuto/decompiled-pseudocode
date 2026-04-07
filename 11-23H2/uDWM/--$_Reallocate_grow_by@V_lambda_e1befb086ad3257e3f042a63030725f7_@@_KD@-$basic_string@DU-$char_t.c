/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@Z @ 0x1800EF5BC
 * Callers:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x1800F26BC (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001F154 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180032448 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18005D520 (memset_0.c)
 *     memcpy_0 @ 0x180066218 (memcpy_0.c)
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBA_K_K@Z @ 0x1800F211C (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEBA_K_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x18010DD40 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

char *__fastcall std::string::_Reallocate_grow_by<_lambda_e1befb086ad3257e3f042a63030725f7_,unsigned __int64,char>(
        char *Src,
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

  v4 = *((_QWORD *)Src + 2);
  if ( 0x7FFFFFFFFFFFFFFFLL - v4 < a2 )
    std::_Dwm_Xlength_error(Src);
  v7 = *((_QWORD *)Src + 3);
  v8 = v4 + a2;
  v9 = std::string::_Calculate_growth(Src, v4 + a2);
  v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v9 + 1);
  *((_QWORD *)Src + 2) = v8;
  v11 = v10;
  *((_QWORD *)Src + 3) = v9;
  v12 = &v10[v4];
  if ( v7 < 0x10 )
  {
    memcpy_0(v10, Src, v4);
    memset_0(v12, 0, a4);
    v12[a4] = 0;
  }
  else
  {
    v13 = *(void **)Src;
    memcpy_0(v10, *(const void **)Src, v4);
    memset_0(v12, 0, a4);
    v12[a4] = 0;
    std::_Deallocate<16,0>(v13, v7 + 1);
  }
  *(_QWORD *)Src = v11;
  return Src;
}
