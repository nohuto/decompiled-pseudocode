/*
 * XREFs of ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1800FCA90
 * Callers:
 *     ??$_Find_hint@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@AEBUhstring@winrt@@@Z @ 0x1800FB988 (--$_Find_hint@Uhstring@winrt@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@NU-$less@Uhstring@winrt@@.c)
 *     ??$_Find_lower_bound@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@1@AEBUhstring@winrt@@@Z @ 0x1800FBC90 (--$_Find_lower_bound@Uhstring@winrt@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@NU-$less@Uhstring@.c)
 *     ??$_Lower_bound_duplicate@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@AEBUhstring@winrt@@@Z @ 0x1800FBDA4 (--$_Lower_bound_duplicate@Uhstring@winrt@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@NU-$less@Uhst.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall winrt::hstring::operator std::basic_string_view<unsigned short>(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // r8

  v2 = *a1;
  if ( *a1 )
  {
    *a2 = *(_QWORD *)(v2 + 16);
    a2[1] = *(unsigned int *)(v2 + 4);
  }
  else
  {
    a2[1] = 0LL;
    *a2 = word_18011F0D4;
  }
  return a2;
}
