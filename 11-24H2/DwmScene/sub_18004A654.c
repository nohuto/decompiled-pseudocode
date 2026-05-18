/*
 * XREFs of sub_18004A654 @ 0x18004A654
 * Callers:
 *     sub_18004B71C @ 0x18004B71C (sub_18004B71C.c)
 *     sub_18004C7A4 @ 0x18004C7A4 (sub_18004C7A4.c)
 *     sub_180057C10 @ 0x180057C10 (sub_180057C10.c)
 *     sub_18005AD6C @ 0x18005AD6C (sub_18005AD6C.c)
 *     sub_18005AEE4 @ 0x18005AEE4 (sub_18005AEE4.c)
 *     sub_18005F890 @ 0x18005F890 (sub_18005F890.c)
 *     sub_1800737C8 @ 0x1800737C8 (sub_1800737C8.c)
 *     sub_18007409C @ 0x18007409C (sub_18007409C.c)
 *     sub_1800746A0 @ 0x1800746A0 (sub_1800746A0.c)
 *     sub_1800747C0 @ 0x1800747C0 (sub_1800747C0.c)
 *     sub_180077A60 @ 0x180077A60 (sub_180077A60.c)
 *     sub_18007E5A4 @ 0x18007E5A4 (sub_18007E5A4.c)
 *     sub_180083580 @ 0x180083580 (sub_180083580.c)
 *     sub_18008DF4C @ 0x18008DF4C (sub_18008DF4C.c)
 * Callees:
 *     ??$_Erase_tree@V?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@QEAAXAEAV?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@1@@Z_10 @ 0x18004A7C4 (--$_Erase_tree@V-$_Crt_allocator@U-$_Tree_node@U-$pair@QEAXU_Mutex_count_pair@-A0xd_ea_18004A7C4.c)
 */

__int64 __fastcall sub_18004A654(void **a1, __int64 a2)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Erase_tree<std::_Crt_allocator<std::_Tree_node<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>,void *>>>(
    a1,
    a2,
    *((_QWORD *)*a1 + 1));
  return sub_180010234(*a1, 0x40uLL);
}
