/*
 * XREFs of sub_18002FABC @ 0x18002FABC
 * Callers:
 *     sub_18002FDC0 @ 0x18002FDC0 (sub_18002FDC0.c)
 *     sub_1800348C0 @ 0x1800348C0 (sub_1800348C0.c)
 *     sub_180034C38 @ 0x180034C38 (sub_180034C38.c)
 *     sub_180038EFC @ 0x180038EFC (sub_180038EFC.c)
 *     sub_1800D69DD @ 0x1800D69DD (sub_1800D69DD.c)
 * Callees:
 *     ??$_Erase_tree@V?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@QEAAXAEAV?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@1@@Z_4 @ 0x18002CBC4 (--$_Erase_tree@V-$_Crt_allocator@U-$_Tree_node@U-$pair@QEAXU_Mutex_count_pair@-A0xd_ea_18002CBC4.c)
 */

__int64 __fastcall sub_18002FABC(void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Erase_tree<std::_Crt_allocator<std::_Tree_node<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((__int64 **)*a1 + 1));
  return sub_180010134(*a1, 0x60uLL);
}
