/*
 * XREFs of sub_180050C60 @ 0x180050C60
 * Callers:
 *     sub_1800504FC @ 0x1800504FC (sub_1800504FC.c)
 *     sub_180050BB4 @ 0x180050BB4 (sub_180050BB4.c)
 *     sub_18005157C @ 0x18005157C (sub_18005157C.c)
 *     sub_180058D60 @ 0x180058D60 (sub_180058D60.c)
 *     sub_18007E308 @ 0x18007E308 (sub_18007E308.c)
 *     sub_18007F7E0 @ 0x18007F7E0 (sub_18007F7E0.c)
 *     sub_18007F934 @ 0x18007F934 (sub_18007F934.c)
 * Callees:
 *     ??$_Erase_tree@V?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@QEAAXAEAV?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@1@@Z_0 @ 0x18002622C (--$_Erase_tree@V-$_Crt_allocator@U-$_Tree_node@U-$pair@QEAXU_Mutex_count_pair@-A0xd_ea_18002622C.c)
 */

__int64 __fastcall sub_180050C60(_QWORD *a1)
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
