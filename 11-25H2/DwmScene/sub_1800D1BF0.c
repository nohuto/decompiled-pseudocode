/*
 * XREFs of sub_1800D1BF0 @ 0x1800D1BF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     ??$_Erase_tree@V?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@QEAAXAEAV?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@1@@Z @ 0x18001B790 (--$_Erase_tree@V-$_Crt_allocator@U-$_Tree_node@U-$pair@QEAXU_Mutex_count_pair@-A0xd833279a@@@std.c)
 */

int __fastcall sub_1800D1BF0(__int64 a1)
{
  struct _Mtx_internal_imp_t *v1; // rbx
  _QWORD *v2; // rsi
  _QWORD *v3; // rdi

  v1 = (struct _Mtx_internal_imp_t *)(a1 + 8);
  v2 = (_QWORD *)(a1 + 48);
  sub_180011B30(a1 + 8);
  v3 = (_QWORD *)*v2;
  std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Erase_tree<std::_Crt_allocator<std::_Tree_node<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>,void *>>>(
    (__int64)v2,
    (__int64)v2,
    *(__int64 **)(*v2 + 8LL));
  v3[1] = v3;
  *v3 = v3;
  v3[2] = v3;
  v2[1] = 0LL;
  return Mtx_unlock(v1);
}
