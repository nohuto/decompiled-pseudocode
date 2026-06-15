/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x1800E314C
 * Callers:
 *     ?resize@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_KG@Z @ 0x1800E3DE0 (-resize@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_KG@Z.c)
 * Callees:
 *     ?_Myptr@?$_String_val@U?$_Simple_types@G@std@@@std@@QEAAPEAGXZ @ 0x180071CFC (-_Myptr@-$_String_val@U-$_Simple_types@G@std@@@std@@QEAAPEAGXZ.c)
 *     ??$_Reallocate_grow_by@V_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@Z @ 0x1800DE350 (--$_Reallocate_grow_by@V_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@-$basic_string@GU-$char_t.c)
 */

char **__fastcall std::wstring::append(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // r11
  _WORD *v7; // rdi
  __int64 i; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  if ( a2 > *(_QWORD *)(a1 + 24) - v2 )
    return std::wstring::_Reallocate_grow_by<_lambda_b70241e9b5ebaad244db3e52d52cab17_,unsigned __int64,unsigned short>(
             (char **)a1,
             a2,
             0LL,
             a2);
  *(_QWORD *)(a1 + 16) = v2 + a2;
  v6 = std::_String_val<std::_Simple_types<unsigned short>>::_Myptr(a1);
  v7 = (_WORD *)(v6 + 2 * v2);
  if ( v3 )
  {
    for ( i = v3; i; --i )
      *v7++ = 0;
  }
  *(_WORD *)(v6 + 2 * v4) = 0;
  return (char **)v5;
}
