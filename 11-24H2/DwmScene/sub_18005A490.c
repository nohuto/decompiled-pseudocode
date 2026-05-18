/*
 * XREFs of sub_18005A490 @ 0x18005A490
 * Callers:
 *     sub_18005AD90 @ 0x18005AD90 (sub_18005AD90.c)
 *     sub_18005AE78 @ 0x18005AE78 (sub_18005AE78.c)
 *     sub_18005AEE4 @ 0x18005AEE4 (sub_18005AEE4.c)
 *     sub_18005BF40 @ 0x18005BF40 (sub_18005BF40.c)
 * Callees:
 *     ??$_Erase_tree@V?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@QEAAXAEAV?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@1@@Z_13 @ 0x18005A534 (--$_Erase_tree@V-$_Crt_allocator@U-$_Tree_node@U-$pair@QEAXU_Mutex_count_pair@-A0xd_ea_18005A534.c)
 */

__int64 __fastcall sub_18005A490(void **a1, __int64 a2)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Erase_tree<std::_Crt_allocator<std::_Tree_node<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>,void *>>>(
    a1,
    a2,
    *((_QWORD *)*a1 + 1));
  return sub_180010234(*a1, 0x30uLL);
}
