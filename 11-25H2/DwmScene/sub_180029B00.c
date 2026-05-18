/*
 * XREFs of sub_180029B00 @ 0x180029B00
 * Callers:
 *     sub_180029ACC @ 0x180029ACC (sub_180029ACC.c)
 *     sub_180029BE4 @ 0x180029BE4 (sub_180029BE4.c)
 * Callees:
 *     ??$_Erase_tree@V?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@QEAAXAEAV?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@1@@Z_2 @ 0x180029124 (--$_Erase_tree@V-$_Crt_allocator@U-$_Tree_node@U-$pair@QEAXU_Mutex_count_pair@-A0xd_ea_180029124.c)
 */

__int64 __fastcall sub_180029B00(void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Erase_tree<std::_Crt_allocator<std::_Tree_node<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((__int64 **)*a1 + 1));
  return sub_180010134(*a1, 0xF8uLL);
}
