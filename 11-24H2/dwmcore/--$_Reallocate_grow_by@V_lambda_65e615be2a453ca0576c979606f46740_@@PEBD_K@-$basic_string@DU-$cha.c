/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_65e615be2a453ca0576c979606f46740_@@PEBD_K@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_65e615be2a453ca0576c979606f46740_@@PEBD_K@Z @ 0x180265FA4
 * Callers:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD@Z @ 0x1802660D4 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x18025FFEC (-_Xlen_string@std@@YAXXZ.c)
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBA_K_K@Z @ 0x180266090 (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEBA_K_K@Z.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 */

_QWORD *__fastcall std::string::_Reallocate_grow_by<_lambda_65e615be2a453ca0576c979606f46740_,char const *,unsigned __int64>(
        _QWORD *Src,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4,
        size_t Size)
{
  size_t v5; // r14
  unsigned __int64 v8; // r13
  size_t v9; // rdi
  __int64 v10; // rbx
  char *v11; // r15
  char *v12; // rdi
  _QWORD *v13; // rbx

  v5 = Src[2];
  if ( 0x7FFFFFFFFFFFFFFFLL - v5 < a2 )
    std::_Xlen_string();
  v8 = Src[3];
  v9 = v5 + a2;
  v10 = std::string::_Calculate_growth(Src, v5 + a2);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v10 + 1);
  Src[2] = v9;
  Src[3] = v10;
  v12 = &v11[v5];
  if ( v8 <= 0xF )
  {
    memcpy_0(v11, Src, v5);
    memcpy_0(v12, a4, Size);
    v12[Size] = 0;
  }
  else
  {
    v13 = (_QWORD *)*Src;
    memcpy_0(v11, (const void *)*Src, v5);
    memcpy_0(v12, a4, Size);
    v12[Size] = 0;
    std::_Deallocate<16,0>(v13, v8 + 1);
  }
  *Src = v11;
  return Src;
}
