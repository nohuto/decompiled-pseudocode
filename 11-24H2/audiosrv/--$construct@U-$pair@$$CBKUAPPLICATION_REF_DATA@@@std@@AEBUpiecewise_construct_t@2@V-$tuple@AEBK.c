/*
 * XREFs of ??$construct@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@AEBUpiecewise_construct_t@2@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Default_allocator_traits@V?$allocator@U?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@std@@@std@@@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@std@@@1@QEAU?$pair@$$CBKUAPPLICATION_REF_DATA@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801096E4
 * Callers:
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801093F8 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@1@V-$tuple@$$V@1@@-$_Tree_temp_node@V-$allocat.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *>>>::construct<std::pair<unsigned long const,APPLICATION_REF_DATA>,std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD **a4)
{
  __int64 result; // rax

  result = 0LL;
  *(_DWORD *)a2 = **a4;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 4) = 0LL;
  *(_DWORD *)(a2 + 12) = 0;
  return result;
}
