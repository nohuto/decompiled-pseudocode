/*
 * XREFs of sub_18002FC1C @ 0x18002FC1C
 * Callers:
 *     sub_18002FF20 @ 0x18002FF20 (sub_18002FF20.c)
 *     sub_180034A20 @ 0x180034A20 (sub_180034A20.c)
 *     sub_180034D98 @ 0x180034D98 (sub_180034D98.c)
 *     sub_18003905C @ 0x18003905C (sub_18003905C.c)
 *     sub_1800D6B3D @ 0x1800D6B3D (sub_1800D6B3D.c)
 * Callees:
 *     ??$_Erase_tree@V?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@QEAAXAEAV?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@1@@Z_4 @ 0x18002CD24 (--$_Erase_tree@V-$_Crt_allocator@U-$_Tree_node@U-$pair@QEAXU_Mutex_count_pair@-A0xd_ea_18002CD24.c)
 */

__int64 __fastcall sub_18002FC1C(void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Erase_tree<std::_Crt_allocator<std::_Tree_node<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((__int64 **)*a1 + 1));
  return sub_180010234(*a1, 0x60uLL);
}
