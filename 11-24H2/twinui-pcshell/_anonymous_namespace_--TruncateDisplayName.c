/*
 * XREFs of _anonymous_namespace_::TruncateDisplayName @ 0x1805F07DC
 * Callers:
 *     _anonymous_namespace_::GetPromptText @ 0x1805EF3EC (_anonymous_namespace_--GetPromptText.c)
 * Callees:
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180046E18 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 *     ?push_back@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXG@Z @ 0x180057200 (-push_back@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall anonymous_namespace_::TruncateDisplayName(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  char **v4; // rbx
  __int128 v6; // [rsp+28h] [rbp-40h] BYREF
  void *v7[5]; // [rsp+38h] [rbp-30h] BYREF

  *(_QWORD *)&v6 = a1;
  if ( *(_QWORD *)(a2 + 8) <= 0x19uLL )
  {
    std::wstring::wstring((char **)a1, (__int128 *)a2);
  }
  else
  {
    v3 = ((unsigned __int16)(*(_WORD *)(*(_QWORD *)a2 + 44LL) + 9216) > 0x3FFu) + 21LL;
    *(_QWORD *)&v6 = *(_QWORD *)a2;
    *((_QWORD *)&v6 + 1) = v3;
    v4 = std::wstring::wstring((char **)v7, &v6);
    std::wstring::push_back((void **)v4, 8230);
    *(_OWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_OWORD *)a1 = *(_OWORD *)v4;
    *(_OWORD *)(a1 + 16) = *((_OWORD *)v4 + 1);
    v4[2] = 0LL;
    v4[3] = (char *)7;
    *(_WORD *)v4 = 0;
    std::wstring::_Tidy_deallocate(v7);
  }
  return a1;
}
