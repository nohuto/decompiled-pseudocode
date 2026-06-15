/*
 * XREFs of ?resize@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_KG@Z @ 0x1800E3DE0
 * Callers:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1800DE840 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     ?do_transform@?$collate@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBG0@Z @ 0x180140B90 (-do_transform@-$collate@G@std@@MEBA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@2@.c)
 * Callees:
 *     ?_Myptr@?$_String_val@U?$_Simple_types@G@std@@@std@@QEAAPEAGXZ @ 0x180071CFC (-_Myptr@-$_String_val@U-$_Simple_types@G@std@@@std@@QEAAPEAGXZ.c)
 */

char **__fastcall std::wstring::resize(__int64 a1, unsigned __int64 a2)
{
  char **result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8

  if ( a2 > *(_QWORD *)(a1 + 16) )
    return std::wstring::append(a1, a2 - *(_QWORD *)(a1 + 16));
  result = (char **)std::_String_val<std::_Simple_types<unsigned short>>::_Myptr(a1);
  *(_QWORD *)(v4 + 16) = v3;
  *((_WORD *)result + v3) = 0;
  return result;
}
