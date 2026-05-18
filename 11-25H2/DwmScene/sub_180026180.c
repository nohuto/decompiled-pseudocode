/*
 * XREFs of sub_180026180 @ 0x180026180
 * Callers:
 *     ??$_Erase_tree@V?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@QEAAXAEAV?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@1@@Z_0 @ 0x1800260CC (--$_Erase_tree@V-$_Crt_allocator@U-$_Tree_node@U-$pair@QEAXU_Mutex_count_pair@-A0xd_ea_1800260CC.c)
 *     sub_18002707C @ 0x18002707C (sub_18002707C.c)
 *     sub_180050A54 @ 0x180050A54 (sub_180050A54.c)
 *     sub_1800CBBC0 @ 0x1800CBBC0 (sub_1800CBBC0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

__int64 __fastcall sub_180026180(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = a2[6];
  if ( v2 )
    sub_18001050C(v2);
  return sub_180010134(a2, 0x38uLL);
}
