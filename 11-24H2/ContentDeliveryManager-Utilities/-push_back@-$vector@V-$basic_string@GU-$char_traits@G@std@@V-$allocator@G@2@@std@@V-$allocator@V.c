/*
 * XREFs of ?push_back@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAX$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18005E1D4
 * Callers:
 *     _anonymous_namespace_::SplitString @ 0x180057CE8 (_anonymous_namespace_--SplitString.c)
 *     ?SplitString@Details@SubscribedContentStore@CreativeFramework@@YA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@5@PEBG@Z @ 0x1800636F4 (-SplitString@Details@SubscribedContentStore@CreativeFramework@@YA-AV-$vector@V-$basic_string@GU-.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x18004AD18 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ?_Reserve@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@IEAAX_K@Z @ 0x18005BA08 (-_Reserve@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-.c)
 */

__int64 __fastcall std::vector<std::wstring>::push_back(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // rdi
  bool v4; // al
  __int64 v5; // rcx
  unsigned __int64 v6; // rdi
  __int64 result; // rax

  v2 = a2;
  v4 = a2 < a1[1] && *a1 <= a2;
  v5 = a1[2];
  if ( v4 )
  {
    v6 = a2 - *a1;
    if ( a1[1] == v5 )
      std::vector<std::wstring>::_Reserve(a1);
    v2 = *a1 + (v6 & 0xFFFFFFFFFFFFFFE0uLL);
  }
  else if ( a1[1] == v5 )
  {
    std::vector<std::wstring>::_Reserve(a1);
  }
  result = std::wstring::wstring(a1[1], v2);
  a1[1] += 32LL;
  return result;
}
