/*
 * XREFs of sub_18005A47C @ 0x18005A47C
 * Callers:
 *     ??$_Erase_tree@V?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@QEAAXAEAV?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@1@@Z_13 @ 0x18005A3D4 (--$_Erase_tree@V-$_Crt_allocator@U-$_Tree_node@U-$pair@QEAXU_Mutex_count_pair@-A0xd_ea_18005A3D4.c)
 *     sub_18005C2F0 @ 0x18005C2F0 (sub_18005C2F0.c)
 * Callees:
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 */

__int64 __fastcall sub_18005A47C(__int64 a1, _QWORD *a2)
{
  volatile signed __int32 *v2; // rcx

  v2 = (volatile signed __int32 *)a2[5];
  if ( v2 )
    sub_180010544(v2);
  return sub_180010134(a2, 0x30uLL);
}
