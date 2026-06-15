/*
 * XREFs of ??$construct@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@AEBUpiecewise_construct_t@2@V?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$tuple@$$V@2@@?$_Default_allocator_traits@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@PEAX@std@@@std@@@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@PEAX@std@@@1@QEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18002E7F4
 * Callers:
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18002E5A0 (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$_Hash@V-$_Um.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<std::_List_node<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>,void *>>>::construct<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>,std::piecewise_construct_t const &,std::tuple<std::wstring &&>,std::tuple<>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 result; // rax

  result = *a4;
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_OWORD *)a2 = *(_OWORD *)result;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(result + 16);
  *(_QWORD *)(result + 16) = 0LL;
  *(_QWORD *)(result + 24) = 7LL;
  *(_WORD *)result = 0;
  *(_DWORD *)(a2 + 32) = 0;
  return result;
}
