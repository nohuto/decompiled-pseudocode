/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800A7A60
 * Callers:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x180080D3C (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     ?GetConstantNamesString@MPCConstantManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4InputType@@@Z @ 0x1800B3E20 (-GetConstantNamesString@MPCConstantManager@@AEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allo.c)
 *     ?GetCurrentInputTypesString@MPCConstantManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1800B4144 (-GetCurrentInputTypesString@MPCConstantManager@@AEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$.c)
 *     GetHolographicInputSession @ 0x1800D64F0 (GetHolographicInputSession.c)
 * Callees:
 *     ??$_Reallocate_grow_by@V_lambda_7030d12a21dba11210293044e97fe9c7_@@PEBG_K@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_7030d12a21dba11210293044e97fe9c7_@@PEBG_K@Z @ 0x1800A6A68 (--$_Reallocate_grow_by@V_lambda_7030d12a21dba11210293044e97fe9c7_@@PEBG_K@-$basic_string@GU-$cha.c)
 *     memmove_0 @ 0x1801CF1A8 (memmove_0.c)
 */

const void **__fastcall std::wstring::append(const void **Src, const void *a2, unsigned __int64 a3)
{
  const void *v4; // rcx
  bool v5; // cf
  bool v6; // zf
  __int64 v7; // rsi
  _QWORD *v8; // rdi

  v4 = Src[2];
  if ( a3 > (_BYTE *)Src[3] - (_BYTE *)v4 )
    return std::wstring::_Reallocate_grow_by<_lambda_7030d12a21dba11210293044e97fe9c7_,unsigned short const *,unsigned __int64>(
             Src,
             a3,
             a3,
             a2,
             a3);
  v5 = (unsigned __int64)Src[3] < 7;
  v6 = Src[3] == (const void *)7;
  v7 = (__int64)v4 + a3;
  Src[2] = (char *)v4 + a3;
  v8 = Src;
  if ( !v5 && !v6 )
    v8 = *Src;
  memmove_0((char *)v8 + 2 * (_QWORD)v4, a2, 2 * a3);
  *((_WORD *)v8 + v7) = 0;
  return Src;
}
