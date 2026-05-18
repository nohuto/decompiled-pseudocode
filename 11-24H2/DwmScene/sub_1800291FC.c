/*
 * XREFs of sub_1800291FC @ 0x1800291FC
 * Callers:
 *     sub_180028E14 @ 0x180028E14 (sub_180028E14.c)
 *     sub_180029C90 @ 0x180029C90 (sub_180029C90.c)
 *     sub_180029EF4 @ 0x180029EF4 (sub_180029EF4.c)
 *     sub_18002A470 @ 0x18002A470 (sub_18002A470.c)
 *     sub_180095A30 @ 0x180095A30 (sub_180095A30.c)
 *     sub_180096188 @ 0x180096188 (sub_180096188.c)
 *     sub_180096260 @ 0x180096260 (sub_180096260.c)
 *     sub_180097544 @ 0x180097544 (sub_180097544.c)
 *     sub_180097BD0 @ 0x180097BD0 (sub_180097BD0.c)
 * Callees:
 *     ??$_Erase_tree@V?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@QEAAXAEAV?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@1@@Z_1 @ 0x18002922C (--$_Erase_tree@V-$_Crt_allocator@U-$_Tree_node@U-$pair@QEAXU_Mutex_count_pair@-A0xd_ea_18002922C.c)
 */

__int64 __fastcall sub_1800291FC(void **a1, __int64 a2)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Erase_tree<std::_Crt_allocator<std::_Tree_node<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>,void *>>>(
    a1,
    a2,
    *((_QWORD *)*a1 + 1));
  return sub_180010234(*a1, 0x58uLL);
}
