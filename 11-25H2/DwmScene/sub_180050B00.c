/*
 * XREFs of sub_180050B00 @ 0x180050B00
 * Callers:
 *     sub_18005039C @ 0x18005039C (sub_18005039C.c)
 *     sub_180050A54 @ 0x180050A54 (sub_180050A54.c)
 *     sub_18005141C @ 0x18005141C (sub_18005141C.c)
 *     sub_180058C00 @ 0x180058C00 (sub_180058C00.c)
 *     sub_18007E1A8 @ 0x18007E1A8 (sub_18007E1A8.c)
 *     sub_18007F680 @ 0x18007F680 (sub_18007F680.c)
 *     sub_18007F7D4 @ 0x18007F7D4 (sub_18007F7D4.c)
 * Callees:
 *     ??$_Erase_tree@V?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@QEAAXAEAV?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@1@@Z_0 @ 0x1800260CC (--$_Erase_tree@V-$_Crt_allocator@U-$_Tree_node@U-$pair@QEAXU_Mutex_count_pair@-A0xd_ea_1800260CC.c)
 */

__int64 __fastcall sub_180050B00(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  result = std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Erase_tree<std::_Crt_allocator<std::_Tree_node<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>,void *>>>(
             (__int64)a1,
             (__int64)a1,
             *(__int64 **)(*a1 + 8LL));
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
