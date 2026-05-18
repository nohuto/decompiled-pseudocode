/*
 * XREFs of sub_18005A5DC @ 0x18005A5DC
 * Callers:
 *     ??$_Erase_tree@V?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@QEAAXAEAV?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@1@@Z_13 @ 0x18005A534 (--$_Erase_tree@V-$_Crt_allocator@U-$_Tree_node@U-$pair@QEAXU_Mutex_count_pair@-A0xd_ea_18005A534.c)
 *     sub_18005C450 @ 0x18005C450 (sub_18005C450.c)
 * Callees:
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 */

__int64 __fastcall sub_18005A5DC(__int64 a1, _QWORD *a2)
{
  volatile signed __int32 *v2; // rcx

  v2 = (volatile signed __int32 *)a2[5];
  if ( v2 )
    sub_180010644(v2);
  return sub_180010234(a2, 0x30uLL);
}
