/*
 * XREFs of ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K0G@Z @ 0x1801496C4
 * Callers:
 *     ?ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@0W4ValidEffectPackConfigurationSettings@@@Z @ 0x180145224 (-ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@0W4ValidEffectPackConfigura.c)
 * Callees:
 *     ?_Myptr@?$_String_val@U?$_Simple_types@G@std@@@std@@QEAAPEAGXZ @ 0x1800620CC (-_Myptr@-$_String_val@U-$_Simple_types@G@std@@@std@@QEAAPEAGXZ.c)
 *     ??$_Reallocate_grow_by@V_lambda_9a2017f333e4665a2f587aa8c7c709b8_@@_K_KG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_9a2017f333e4665a2f587aa8c7c709b8_@@_K2G@Z @ 0x180142FB8 (--$_Reallocate_grow_by@V_lambda_9a2017f333e4665a2f587aa8c7c709b8_@@_K_KG@-$basic_string@GU-$char.c)
 *     memmove_0 @ 0x180167F48 (memmove_0.c)
 */

const void **__fastcall std::wstring::insert(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // r8
  _WORD *v5; // rbx
  const void **result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(a1 + 24) == v2 )
    return std::wstring::_Reallocate_grow_by<_lambda_9a2017f333e4665a2f587aa8c7c709b8_,unsigned __int64,unsigned __int64,unsigned short>((const void **)a1);
  *(_QWORD *)(a1 + 16) = v2 + 1;
  v5 = (_WORD *)std::_String_val<std::_Simple_types<unsigned short>>::_Myptr(a1, a2);
  memmove_0(v5 + 1, v5, 2 * v4 + 2);
  result = (const void **)a1;
  *v5 = 94;
  return result;
}
