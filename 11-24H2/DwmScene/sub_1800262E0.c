/*
 * XREFs of sub_1800262E0 @ 0x1800262E0
 * Callers:
 *     ??$_Erase_tree@V?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@QEAAXAEAV?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@1@@Z_0 @ 0x18002622C (--$_Erase_tree@V-$_Crt_allocator@U-$_Tree_node@U-$pair@QEAXU_Mutex_count_pair@-A0xd_ea_18002622C.c)
 *     sub_1800271DC @ 0x1800271DC (sub_1800271DC.c)
 *     sub_180050BB4 @ 0x180050BB4 (sub_180050BB4.c)
 *     sub_1800CBD20 @ 0x1800CBD20 (sub_1800CBD20.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

__int64 __fastcall sub_1800262E0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = a2[6];
  if ( v2 )
    sub_18001060C(v2);
  return sub_180010234(a2, 0x38uLL);
}
