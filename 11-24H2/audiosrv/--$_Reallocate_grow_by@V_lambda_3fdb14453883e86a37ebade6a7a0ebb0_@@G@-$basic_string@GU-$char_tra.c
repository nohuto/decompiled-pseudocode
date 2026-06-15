/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_3fdb14453883e86a37ebade6a7a0ebb0_@@G@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_3fdb14453883e86a37ebade6a7a0ebb0_@@G@Z @ 0x18012F2F8
 * Callers:
 *     ?push_back@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXG@Z @ 0x18013AC78 (-push_back@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXG@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002A5BC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBA_K_K@Z @ 0x18005357C (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBA_K_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180053E30 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     memcpy_0 @ 0x1800A7F28 (memcpy_0.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1800C00BC (-_Xlen_string@std@@YAXXZ.c)
 */

const void **__fastcall std::wstring::_Reallocate_grow_by<_lambda_3fdb14453883e86a37ebade6a7a0ebb0_,unsigned short>(
        const void **Src,
        __int64 a2,
        __int64 a3,
        __int16 a4)
{
  const void *v4; // r14
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rbx
  SIZE_T size_of; // rax
  char *v10; // rax
  __int64 v11; // rdi
  size_t v12; // r8
  char *v13; // rbp
  char *v14; // rbx

  v4 = Src[2];
  if ( v4 == (const void *)0x7FFFFFFFFFFFFFFELL )
    std::_Xlen_string();
  v7 = (unsigned __int64)Src[3];
  v8 = std::wstring::_Calculate_growth((__int64)Src, (__int64)v4 + 1);
  size_of = std::_Get_size_of_n<2>(v8 + 1);
  v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  Src[2] = (char *)v4 + 1;
  v11 = 2LL * (_QWORD)v4;
  Src[3] = (const void *)v8;
  v12 = 2LL * (_QWORD)v4;
  v13 = v10;
  if ( v7 <= 7 )
  {
    memcpy_0(v10, Src, v12);
    *(_WORD *)&v13[v11] = a4;
    *(_WORD *)&v13[v11 + 2] = 0;
  }
  else
  {
    v14 = (char *)*Src;
    memcpy_0(v10, *Src, v12);
    *(_WORD *)&v13[v11] = a4;
    *(_WORD *)&v13[v11 + 2] = 0;
    std::_Deallocate<16,0>(v14, (const struct std::nothrow_t *)(2 * v7 + 2));
  }
  *Src = v13;
  return Src;
}
