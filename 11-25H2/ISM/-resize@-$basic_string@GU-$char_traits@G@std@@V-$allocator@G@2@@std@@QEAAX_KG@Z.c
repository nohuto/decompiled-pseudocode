/*
 * XREFs of ?resize@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_KG@Z @ 0x1800A94BC
 * Callers:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x180080C2C (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 * Callees:
 *     ??$_Reallocate_grow_by@V_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@Z @ 0x1800A80D4 (--$_Reallocate_grow_by@V_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@-$basic_string@GU-$char_t.c)
 */

void __fastcall std::wstring::resize(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // r8
  char *v3; // r10
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  bool v6; // cc
  char *v7; // rdi

  v2 = (unsigned __int64 *)(a1 + 16);
  v3 = (char *)a1;
  v4 = *(_QWORD *)(a1 + 16);
  if ( a2 <= v4 )
  {
    if ( *(_QWORD *)(a1 + 24) > 7uLL )
      v3 = *(char **)a1;
    *v2 = a2;
LABEL_11:
    *(_WORD *)&v3[2 * a2] = 0;
    return;
  }
  v5 = a2 - v4;
  if ( a2 - v4 <= *((_QWORD *)v3 + 3) - v4 )
  {
    v6 = *((_QWORD *)v3 + 3) <= 7uLL;
    *v2 = a2;
    if ( !v6 )
      v3 = *(char **)v3;
    v7 = &v3[2 * v4];
    if ( v5 )
    {
      while ( v5 )
      {
        *(_WORD *)v7 = 0;
        v7 += 2;
        --v5;
      }
    }
    goto LABEL_11;
  }
  std::wstring::_Reallocate_grow_by<_lambda_b70241e9b5ebaad244db3e52d52cab17_,unsigned __int64,unsigned short>(
    (char **)v3,
    a2 - v4,
    0LL,
    a2 - v4);
}
