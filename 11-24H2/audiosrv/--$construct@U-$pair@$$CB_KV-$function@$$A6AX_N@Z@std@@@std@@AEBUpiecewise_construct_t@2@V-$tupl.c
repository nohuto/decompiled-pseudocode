/*
 * XREFs of ??$construct@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@AEBUpiecewise_construct_t@2@V?$tuple@$$QEA_K@2@V?$tuple@$$V@2@@?$_Default_allocator_traits@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@PEAX@std@@@std@@@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@PEAX@std@@@1@QEAU?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEA_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800DAA74
 * Callers:
 *     ??$_Try_emplace@_K$$V@?$map@_KV?$function@$$A6AX_N@Z@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@PEAX@std@@_N@1@$$QEA_K@Z @ 0x1800DA828 (--$_Try_emplace@_K$$V@-$map@_KV-$function@$$A6AX_N@Z@std@@U-$less@_K@2@V-$allocator@U-$pair@$$CB.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Default_allocator_traits<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::function<void (bool)>>,void *>>>::construct<std::pair<unsigned __int64 const,std::function<void (bool)>>,std::piecewise_construct_t const &,std::tuple<unsigned __int64 &&>,std::tuple<>>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 **a4)
{
  __int64 *result; // rax
  __int64 v5; // rcx

  result = *a4;
  v5 = **a4;
  a2[8] = 0LL;
  *a2 = v5;
  return result;
}
