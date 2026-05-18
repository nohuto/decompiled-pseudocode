/*
 * XREFs of sub_18002CC9C @ 0x18002CC9C
 * Callers:
 *     sub_18002FF10 @ 0x18002FF10 (sub_18002FF10.c)
 *     sub_180032DD4 @ 0x180032DD4 (sub_180032DD4.c)
 *     sub_18007350C @ 0x18007350C (sub_18007350C.c)
 *     sub_1800735B4 @ 0x1800735B4 (sub_1800735B4.c)
 * Callees:
 *     ??$_Erase_tree@V?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@QEAAXAEAV?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@1@@Z_3 @ 0x18002CCCC (--$_Erase_tree@V-$_Crt_allocator@U-$_Tree_node@U-$pair@QEAXU_Mutex_count_pair@-A0xd_ea_18002CCCC.c)
 */

__int64 __fastcall sub_18002CC9C(void **a1, __int64 a2)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Erase_tree<std::_Crt_allocator<std::_Tree_node<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>,void *>>>(
    a1,
    a2,
    *((_QWORD *)*a1 + 1));
  return sub_180010234(*a1, 0x60uLL);
}
