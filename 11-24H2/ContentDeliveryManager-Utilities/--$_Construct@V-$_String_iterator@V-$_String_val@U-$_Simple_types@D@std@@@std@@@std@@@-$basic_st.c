/*
 * XREFs of ??$_Construct@V?$_String_iterator@V?$_String_val@U?$_Simple_types@D@std@@@std@@@std@@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXV?$_String_iterator@V?$_String_val@U?$_Simple_types@D@std@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x180048C54
 * Callers:
 *     ??$?0V?$_String_iterator@V?$_String_val@U?$_Simple_types@D@std@@@std@@@std@@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@V?$_String_iterator@V?$_String_val@U?$_Simple_types@D@std@@@std@@@1@0PEAPEAX@Z @ 0x180045898 (--$-0V-$_String_iterator@V-$_String_val@U-$_Simple_types@D@std@@@std@@@std@@@-$basic_string@GU-$.c)
 * Callees:
 *     ?_Grow@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA_N_K_N@Z @ 0x18005B048 (-_Grow@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA_N_K_N@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x18005BFF4 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 */

_UNKNOWN **__fastcall std::wstring::_Construct<std::_String_iterator<std::_String_val<std::_Simple_types<char>>>>(
        _QWORD *a1,
        char *a2,
        char *a3)
{
  _UNKNOWN **result; // rax
  char *v4; // rdi
  char *v5; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r14
  __int64 *v9; // rdx
  __int64 v10; // [rsp+0h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = a3;
  v5 = a2;
  v7 = a3 - a2;
  v8 = a1[2];
  if ( v8 <= v7 && a1[3] != v7 )
  {
    LOBYTE(a3) = 1;
    result = (_UNKNOWN **)std::wstring::_Grow(a1, v7, a3);
    if ( (_BYTE)result )
    {
      if ( a1[3] < 8uLL )
        result = (_UNKNOWN **)a1;
      else
        result = (_UNKNOWN **)*a1;
      a1[2] = v8;
      *((_WORD *)result + v8) = 0;
    }
  }
  while ( v5 != v4 )
  {
    try
    {
      result = (_UNKNOWN **)std::wstring::append(a1, 1LL, (unsigned int)*v5++);
    }
    catch ( ... )
    {
      v9 = &v10;
      LOBYTE(v9) = 1;
      std::wstring::_Tidy(a1, v9, 0LL);
      throw;
    }
  }
  return result;
}
