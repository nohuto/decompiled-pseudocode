/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_7030d12a21dba11210293044e97fe9c7_@@PEBG_K@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_7030d12a21dba11210293044e97fe9c7_@@PEBG_K@Z @ 0x1800DE240
 * Callers:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1800DE840 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002203C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBA_K_K@Z @ 0x180060F8C (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBA_K_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180061AE0 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1800C14AC (-_Xlen_string@std@@YAXXZ.c)
 */

const void **__fastcall std::wstring::_Reallocate_grow_by<_lambda_7030d12a21dba11210293044e97fe9c7_,unsigned short const *,unsigned __int64>(
        const void **Src,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  const void *v5; // r15
  unsigned __int64 v7; // r12
  char *v8; // rdi
  unsigned __int64 v9; // rbx
  SIZE_T size_of; // rax
  char *v11; // rax
  size_t v12; // r8
  __int64 v13; // r15
  char *v14; // r14
  char *v15; // rbp
  size_t v16; // rdi
  char *v17; // rbx

  v5 = Src[2];
  if ( 0x7FFFFFFFFFFFFFFELL - (__int64)v5 < a2 )
    std::_Xlen_string();
  v7 = (unsigned __int64)Src[3];
  v8 = (char *)v5 + a2;
  v9 = std::wstring::_Calculate_growth((__int64)Src, (__int64)v5 + a2);
  size_of = std::_Get_size_of_n<2>(v9 + 1);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = 2LL * (_QWORD)v5;
  v13 = (__int64)v5 + a5;
  Src[2] = v8;
  Src[3] = (const void *)v9;
  v14 = v11;
  v15 = &v11[v12];
  v16 = 2 * a5;
  if ( v7 <= 7 )
  {
    memcpy_0(v11, Src, v12);
    memcpy_0(v15, L".dll", v16);
    *(_WORD *)&v14[2 * v13] = 0;
  }
  else
  {
    v17 = (char *)*Src;
    memcpy_0(v11, *Src, v12);
    memcpy_0(v15, L".dll", v16);
    *(_WORD *)&v14[2 * v13] = 0;
    std::_Deallocate<16,0>(v17, (const struct std::nothrow_t *)(2 * v7 + 2));
  }
  *Src = v14;
  return Src;
}
