/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_7030d12a21dba11210293044e97fe9c7_@@PEBG_K@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_7030d12a21dba11210293044e97fe9c7_@@PEBG_K@Z @ 0x1800A7FB8
 * Callers:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800A8F60 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x180067D84 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009AC3C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x18009C0FC (-_Xlen_string@std@@YAXXZ.c)
 *     memcpy_0 @ 0x1801C7CFC (memcpy_0.c)
 */

const void **__fastcall std::wstring::_Reallocate_grow_by<_lambda_7030d12a21dba11210293044e97fe9c7_,unsigned short const *,unsigned __int64>(
        const void **Src,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4,
        __int64 a5)
{
  const void *v5; // rbx
  unsigned __int64 v8; // rbp
  char *v9; // r15
  unsigned __int64 v10; // r13
  char *v11; // rax
  size_t v12; // r8
  char *v13; // rsi
  char *v14; // r12
  size_t v15; // r15
  __int64 v16; // r13
  char *v17; // rbx

  v5 = Src[2];
  if ( 0x7FFFFFFFFFFFFFFELL - (__int64)v5 < a2 )
    std::_Xlen_string();
  v8 = (unsigned __int64)Src[3];
  v9 = (char *)v5 + a2;
  v10 = std::wstring::_Calculate_growth((__int64)v5 + a2, v8, 0x7FFFFFFFFFFFFFFEuLL);
  if ( v10 + 1 > 0x7FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(2 * (v10 + 1));
  v12 = 2LL * (_QWORD)v5;
  Src[2] = v9;
  v13 = v11;
  Src[3] = (const void *)v10;
  v14 = &v11[2 * (_QWORD)v5];
  v15 = 2 * a5;
  v16 = (__int64)v5 + a5;
  if ( v8 <= 7 )
  {
    memcpy_0(v11, Src, v12);
    memcpy_0(v14, a4, v15);
    *(_WORD *)&v13[2 * v16] = 0;
  }
  else
  {
    v17 = (char *)*Src;
    memcpy_0(v11, *Src, v12);
    memcpy_0(v14, a4, v15);
    *(_WORD *)&v13[2 * v16] = 0;
    std::_Deallocate<16,0>(v17, (const struct std::nothrow_t *)(2 * v8 + 2));
  }
  *Src = v13;
  return Src;
}
