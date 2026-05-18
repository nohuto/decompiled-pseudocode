/*
 * XREFs of sub_1800265E4 @ 0x1800265E4
 * Callers:
 *     sub_1800265B4 @ 0x1800265B4 (sub_1800265B4.c)
 *     sub_1800266E8 @ 0x1800266E8 (sub_1800266E8.c)
 *     sub_18003017C @ 0x18003017C (sub_18003017C.c)
 *     sub_180040FB0 @ 0x180040FB0 (sub_180040FB0.c)
 *     sub_180044F98 @ 0x180044F98 (sub_180044F98.c)
 *     sub_18004B890 @ 0x18004B890 (sub_18004B890.c)
 *     sub_18004B918 @ 0x18004B918 (sub_18004B918.c)
 *     sub_1800504FC @ 0x1800504FC (sub_1800504FC.c)
 *     sub_18005157C @ 0x18005157C (sub_18005157C.c)
 *     sub_180055328 @ 0x180055328 (sub_180055328.c)
 *     sub_180068A40 @ 0x180068A40 (sub_180068A40.c)
 *     sub_18007B2BC @ 0x18007B2BC (sub_18007B2BC.c)
 *     sub_18007D744 @ 0x18007D744 (sub_18007D744.c)
 *     sub_18007F438 @ 0x18007F438 (sub_18007F438.c)
 *     sub_180081FE4 @ 0x180081FE4 (sub_180081FE4.c)
 *     sub_1800CB2E8 @ 0x1800CB2E8 (sub_1800CB2E8.c)
 * Callees:
 *     ??$_Erase_tree@V?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@QEAAXAEAV?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@1@@Z_0 @ 0x18002622C (--$_Erase_tree@V-$_Crt_allocator@U-$_Tree_node@U-$pair@QEAXU_Mutex_count_pair@-A0xd_ea_18002622C.c)
 */

__int64 __fastcall sub_1800265E4(void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Erase_tree<std::_Crt_allocator<std::_Tree_node<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((__int64 **)*a1 + 1));
  return sub_180010234(*a1, 0x38uLL);
}
