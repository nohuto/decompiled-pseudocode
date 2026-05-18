/*
 * XREFs of sub_18005A330 @ 0x18005A330
 * Callers:
 *     sub_18005AC30 @ 0x18005AC30 (sub_18005AC30.c)
 *     sub_18005AD18 @ 0x18005AD18 (sub_18005AD18.c)
 *     sub_18005AD84 @ 0x18005AD84 (sub_18005AD84.c)
 *     sub_18005BDE0 @ 0x18005BDE0 (sub_18005BDE0.c)
 * Callees:
 *     ??$_Erase_tree@V?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@QEAAXAEAV?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@1@@Z_13 @ 0x18005A3D4 (--$_Erase_tree@V-$_Crt_allocator@U-$_Tree_node@U-$pair@QEAXU_Mutex_count_pair@-A0xd_ea_18005A3D4.c)
 */

__int64 __fastcall sub_18005A330(void **a1, __int64 a2)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Erase_tree<std::_Crt_allocator<std::_Tree_node<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>,void *>>>(
    a1,
    a2,
    *((_QWORD *)*a1 + 1));
  return sub_180010134(*a1, 0x30uLL);
}
