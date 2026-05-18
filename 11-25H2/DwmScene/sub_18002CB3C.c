/*
 * XREFs of sub_18002CB3C @ 0x18002CB3C
 * Callers:
 *     sub_18002FDB0 @ 0x18002FDB0 (sub_18002FDB0.c)
 *     sub_180032C74 @ 0x180032C74 (sub_180032C74.c)
 *     sub_1800733AC @ 0x1800733AC (sub_1800733AC.c)
 *     sub_180073454 @ 0x180073454 (sub_180073454.c)
 * Callees:
 *     ??$_Erase_tree@V?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@QEAAXAEAV?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@1@@Z_3 @ 0x18002CB6C (--$_Erase_tree@V-$_Crt_allocator@U-$_Tree_node@U-$pair@QEAXU_Mutex_count_pair@-A0xd_ea_18002CB6C.c)
 */

__int64 __fastcall sub_18002CB3C(void **a1, __int64 a2)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Erase_tree<std::_Crt_allocator<std::_Tree_node<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>,void *>>>(
    a1,
    a2,
    *((_QWORD *)*a1 + 1));
  return sub_180010134(*a1, 0x60uLL);
}
