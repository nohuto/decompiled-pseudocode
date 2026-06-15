/*
 * XREFs of ??$construct@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@AEBUpiecewise_construct_t@2@V?$tuple@AEBU_GUID@@@2@V?$tuple@$$V@2@@?$_Default_allocator_traits@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@@std@@@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@@1@QEAU?$pair@$$CBU_GUID@@UHmdInfo@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBU_GUID@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18014B5CC
 * Callers:
 *     ??$_Try_emplace@AEBU_GUID@@$$V@?$map@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@_N@1@AEBU_GUID@@@Z @ 0x18014B4CC (--$_Try_emplace@AEBU_GUID@@$$V@-$map@U_GUID@@UHmdInfo@@U-$less@U_GUID@@@std@@V-$allocator@U-$pai.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *>>>::construct<std::pair<_GUID const,HmdInfo>,std::piecewise_construct_t const &,std::tuple<_GUID const &>,std::tuple<>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _OWORD **a4)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)a2 = **a4;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  return result;
}
