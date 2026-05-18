/*
 * XREFs of ??$construct@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@AEBUpiecewise_construct_t@2@V?$tuple@AEBQEAX@2@V?$tuple@$$V@2@@?$_Normal_allocator_traits@V?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@std@@@std@@SAXAEAV?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@1@PEAU?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAX@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18002E3E0
 * Callers:
 *     sub_18002DC94 @ 0x18002DC94 (sub_18002DC94.c)
 *     sub_18004A714 @ 0x18004A714 (sub_18004A714.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Normal_allocator_traits<std::_Crt_allocator<std::_Tree_node<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>,void *>>>::construct<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>,std::piecewise_construct_t const &,std::tuple<void * const &>,std::tuple<>>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD **a4)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = **a4;
  a2[1] = 0LL;
  a2[2] = 0LL;
  return result;
}
