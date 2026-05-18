/*
 * XREFs of sub_180026484 @ 0x180026484
 * Callers:
 *     sub_180026454 @ 0x180026454 (sub_180026454.c)
 *     sub_180026588 @ 0x180026588 (sub_180026588.c)
 *     sub_18003001C @ 0x18003001C (sub_18003001C.c)
 *     sub_180040E50 @ 0x180040E50 (sub_180040E50.c)
 *     sub_180044E38 @ 0x180044E38 (sub_180044E38.c)
 *     sub_18004B730 @ 0x18004B730 (sub_18004B730.c)
 *     sub_18004B7B8 @ 0x18004B7B8 (sub_18004B7B8.c)
 *     sub_18005039C @ 0x18005039C (sub_18005039C.c)
 *     sub_18005141C @ 0x18005141C (sub_18005141C.c)
 *     sub_1800551C8 @ 0x1800551C8 (sub_1800551C8.c)
 *     sub_1800688E0 @ 0x1800688E0 (sub_1800688E0.c)
 *     sub_18007B15C @ 0x18007B15C (sub_18007B15C.c)
 *     sub_18007D5E4 @ 0x18007D5E4 (sub_18007D5E4.c)
 *     sub_18007F2D8 @ 0x18007F2D8 (sub_18007F2D8.c)
 *     sub_180081E84 @ 0x180081E84 (sub_180081E84.c)
 *     sub_1800CB188 @ 0x1800CB188 (sub_1800CB188.c)
 * Callees:
 *     ??$_Erase_tree@V?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@QEAAXAEAV?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@1@@Z_0 @ 0x1800260CC (--$_Erase_tree@V-$_Crt_allocator@U-$_Tree_node@U-$pair@QEAXU_Mutex_count_pair@-A0xd_ea_1800260CC.c)
 */

__int64 __fastcall sub_180026484(void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Erase_tree<std::_Crt_allocator<std::_Tree_node<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((__int64 **)*a1 + 1));
  return sub_180010134(*a1, 0x38uLL);
}
