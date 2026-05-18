/*
 * XREFs of sub_1800CFD38 @ 0x1800CFD38
 * Callers:
 *     sub_1800CFE34 @ 0x1800CFE34 (sub_1800CFE34.c)
 *     sub_1800D18C8 @ 0x1800D18C8 (sub_1800D18C8.c)
 *     sub_1800D18E8 @ 0x1800D18E8 (sub_1800D18E8.c)
 *     sub_1800D1A60 @ 0x1800D1A60 (sub_1800D1A60.c)
 * Callees:
 *     ??$_Erase_tree@V?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@QEAAXAEAV?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@1@@Z @ 0x18001B790 (--$_Erase_tree@V-$_Crt_allocator@U-$_Tree_node@U-$pair@QEAXU_Mutex_count_pair@-A0xd833279a@@@std.c)
 */

__int64 __fastcall sub_1800CFD38(void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Erase_tree<std::_Crt_allocator<std::_Tree_node<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((__int64 **)*a1 + 1));
  return sub_180010134(*a1, 0x68uLL);
}
