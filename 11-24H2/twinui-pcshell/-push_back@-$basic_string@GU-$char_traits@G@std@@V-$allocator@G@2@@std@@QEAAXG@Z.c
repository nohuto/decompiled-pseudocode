/*
 * XREFs of ?push_back@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXG@Z @ 0x180057200
 * Callers:
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x180056F50 (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?TrimWhitespaceAndLimit@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV56@_K@Z @ 0x180576D24 (-TrimWhitespaceAndLimit@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_tr.c)
 *     _anonymous_namespace_::TruncateDisplayName @ 0x1805F07DC (_anonymous_namespace_--TruncateDisplayName.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180048A38 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802CF544 (-_Xlen_string@std@@YAXXZ.c)
 *     memcpy_0 @ 0x1806CA2DC (memcpy_0.c)
 */

void __fastcall std::wstring::push_back(void **Src, __int16 a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v4; // r14
  void **v5; // rdi
  __int64 v6; // rbx
  void *v7; // r12
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  size_t size_of; // rax
  char *v11; // rax
  size_t v12; // rsi
  char *v13; // rbp
  void *v14; // rbx

  v2 = (unsigned __int64)Src[2];
  v4 = (unsigned __int64)Src[3];
  v5 = Src;
  if ( v2 >= v4 )
  {
    v6 = 0x7FFFFFFFFFFFFFFELL;
    if ( v2 == 0x7FFFFFFFFFFFFFFELL )
      std::_Xlen_string();
    v7 = (void *)(v2 + 1);
    v8 = (v2 + 1) | 7;
    if ( v8 <= 0x7FFFFFFFFFFFFFFELL )
    {
      v9 = v4 >> 1;
      if ( v4 <= 0x7FFFFFFFFFFFFFFELL - (v4 >> 1) )
      {
        v6 = v9 + v4;
        if ( v8 >= v9 + v4 )
          v6 = (v2 + 1) | 7;
      }
    }
    size_of = std::_Get_size_of_n<2>(v6 + 1);
    v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v12 = 2 * v2;
    v5[2] = v7;
    v5[3] = (void *)v6;
    v13 = v11;
    if ( v4 > 7 )
    {
      v14 = *v5;
      memcpy_0(v11, *v5, v12);
      *(_WORD *)&v13[v12] = a2;
      *(_WORD *)&v13[v12 + 2] = 0;
      std::_Deallocate<16,0>(v14, (const struct std::nothrow_t *)(2 * v4 + 2));
    }
    else
    {
      memcpy_0(v11, v5, v12);
      *(_WORD *)&v13[v12] = a2;
      *(_WORD *)&v13[v12 + 2] = 0;
    }
    *v5 = v13;
  }
  else
  {
    Src[2] = (void *)(v2 + 1);
    if ( v4 > 7 )
      v5 = (void **)*Src;
    *((_WORD *)v5 + v2) = a2;
    *((_WORD *)v5 + v2 + 1) = 0;
  }
}
