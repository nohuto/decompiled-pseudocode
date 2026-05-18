/*
 * XREFs of sub_18002909C @ 0x18002909C
 * Callers:
 *     sub_180028CB4 @ 0x180028CB4 (sub_180028CB4.c)
 *     sub_180029B30 @ 0x180029B30 (sub_180029B30.c)
 *     sub_180029D94 @ 0x180029D94 (sub_180029D94.c)
 *     sub_18002A310 @ 0x18002A310 (sub_18002A310.c)
 *     sub_1800958D0 @ 0x1800958D0 (sub_1800958D0.c)
 *     sub_180096028 @ 0x180096028 (sub_180096028.c)
 *     sub_180096100 @ 0x180096100 (sub_180096100.c)
 *     sub_1800973E4 @ 0x1800973E4 (sub_1800973E4.c)
 *     sub_180097A70 @ 0x180097A70 (sub_180097A70.c)
 * Callees:
 *     ??$_Erase_tree@V?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@QEAAXAEAV?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@1@@Z_1 @ 0x1800290CC (--$_Erase_tree@V-$_Crt_allocator@U-$_Tree_node@U-$pair@QEAXU_Mutex_count_pair@-A0xd_ea_1800290CC.c)
 */

__int64 __fastcall sub_18002909C(void **a1, __int64 a2)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Erase_tree<std::_Crt_allocator<std::_Tree_node<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>,void *>>>(
    a1,
    a2,
    *((_QWORD *)*a1 + 1));
  return sub_180010134(*a1, 0x58uLL);
}
