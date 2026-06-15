/*
 * XREFs of ??$construct@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@AEBUpiecewise_construct_t@2@V?$tuple@AEB_J@2@V?$tuple@$$V@2@@?$_Default_allocator_traits@V?$allocator@U?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@std@@@1@QEAU?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_J@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180124A40
 * Callers:
 *     ??$_Try_emplace@AEB_J$$V@?$map@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEB_J@Z @ 0x180124900 (--$_Try_emplace@AEB_J$$V@-$map@_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@U-$less@_J@std@@V-$allocat.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Default_allocator_traits<std::allocator<std::_Tree_node<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>,void *>>>::construct<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>,std::piecewise_construct_t const &,std::tuple<__int64 const &>,std::tuple<>>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 **a4)
{
  __int64 *result; // rax
  __int64 v5; // rcx

  result = *a4;
  v5 = **a4;
  a2[1] = 0LL;
  *a2 = v5;
  return result;
}
