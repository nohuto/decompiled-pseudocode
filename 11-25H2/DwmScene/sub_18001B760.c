/*
 * XREFs of sub_18001B760 @ 0x18001B760
 * Callers:
 *     sub_18001C208 @ 0x18001C208 (sub_18001C208.c)
 *     sub_18001C25C @ 0x18001C25C (sub_18001C25C.c)
 *     sub_18001C674 @ 0x18001C674 (sub_18001C674.c)
 *     sub_1800E2BC0 @ 0x1800E2BC0 (sub_1800E2BC0.c)
 * Callees:
 *     ??$_Erase_tree@V?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@QEAAXAEAV?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@1@@Z @ 0x18001B790 (--$_Erase_tree@V-$_Crt_allocator@U-$_Tree_node@U-$pair@QEAXU_Mutex_count_pair@-A0xd833279a@@@std.c)
 */

__int64 __fastcall sub_18001B760(void **a1, __int64 a2)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Erase_tree<std::_Crt_allocator<std::_Tree_node<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>,void *>>>(
    a1,
    a2,
    *((_QWORD *)*a1 + 1));
  return sub_180010134(*a1, 0x68uLL);
}
