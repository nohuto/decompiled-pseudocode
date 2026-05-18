/*
 * XREFs of sub_18001B8F4 @ 0x18001B8F4
 * Callers:
 *     ??$_Erase_tree@V?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@QEAAXAEAV?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@1@@Z @ 0x18001B790 (--$_Erase_tree@V-$_Crt_allocator@U-$_Tree_node@U-$pair@QEAXU_Mutex_count_pair@-A0xd833279a@@@std.c)
 *     sub_1800D0CA8 @ 0x1800D0CA8 (sub_1800D0CA8.c)
 *     sub_1800D1C60 @ 0x1800D1C60 (sub_1800D1C60.c)
 * Callees:
 *     sub_180012408 @ 0x180012408 (sub_180012408.c)
 */

__int64 __fastcall sub_18001B8F4(__int64 a1, void *a2)
{
  sub_180012408((__int64)a2 + 40, (__int64)a2);
  return sub_180010134(a2, 0x68uLL);
}
