/*
 * XREFs of sub_18004A4F4 @ 0x18004A4F4
 * Callers:
 *     sub_18004B5BC @ 0x18004B5BC (sub_18004B5BC.c)
 *     sub_18004C644 @ 0x18004C644 (sub_18004C644.c)
 *     sub_180057AB0 @ 0x180057AB0 (sub_180057AB0.c)
 *     sub_18005AC0C @ 0x18005AC0C (sub_18005AC0C.c)
 *     sub_18005AD84 @ 0x18005AD84 (sub_18005AD84.c)
 *     sub_18005F730 @ 0x18005F730 (sub_18005F730.c)
 *     sub_180073668 @ 0x180073668 (sub_180073668.c)
 *     sub_180073F3C @ 0x180073F3C (sub_180073F3C.c)
 *     sub_180074540 @ 0x180074540 (sub_180074540.c)
 *     sub_180074660 @ 0x180074660 (sub_180074660.c)
 *     sub_180077900 @ 0x180077900 (sub_180077900.c)
 *     sub_18007E444 @ 0x18007E444 (sub_18007E444.c)
 *     sub_180083420 @ 0x180083420 (sub_180083420.c)
 *     sub_18008DDEC @ 0x18008DDEC (sub_18008DDEC.c)
 * Callees:
 *     ??$_Erase_tree@V?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@QEAAXAEAV?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@1@@Z_10 @ 0x18004A664 (--$_Erase_tree@V-$_Crt_allocator@U-$_Tree_node@U-$pair@QEAXU_Mutex_count_pair@-A0xd_ea_18004A664.c)
 */

__int64 __fastcall sub_18004A4F4(void **a1, __int64 a2)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Erase_tree<std::_Crt_allocator<std::_Tree_node<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>,void *>>>(
    a1,
    a2,
    *((_QWORD *)*a1 + 1));
  return sub_180010134(*a1, 0x40uLL);
}
