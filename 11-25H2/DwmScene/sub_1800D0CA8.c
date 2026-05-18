/*
 * XREFs of sub_1800D0CA8 @ 0x1800D0CA8
 * Callers:
 *     sub_1800D10C0 @ 0x1800D10C0 (sub_1800D10C0.c)
 * Callees:
 *     ??$_Erase_tree@V?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@QEAAXAEAV?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@1@@Z @ 0x18001B790 (--$_Erase_tree@V-$_Crt_allocator@U-$_Tree_node@U-$pair@QEAXU_Mutex_count_pair@-A0xd833279a@@@std.c)
 *     sub_18001B8F4 @ 0x18001B8F4 (sub_18001B8F4.c)
 *     sub_18001C2C0 @ 0x18001C2C0 (sub_18001C2C0.c)
 *     sub_180027138 @ 0x180027138 (sub_180027138.c)
 */

__int64 __fastcall sub_1800D0CA8(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r9
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v9; // r9
  __int64 v10; // r9
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v2 = *a2;
  v4 = a2[1];
  v5 = *a2;
  v13 = *a2;
  v6 = 0LL;
  while ( v5 != v4 )
  {
    ++v6;
    sub_18001C2C0(&v13);
    v5 = v13;
  }
  v7 = *a1;
  v13 = v2;
  if ( v2 == *(_QWORD *)v7 && *(_BYTE *)(v4 + 25) )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Erase_tree<std::_Crt_allocator<std::_Tree_node<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>,void *>>>(
      (__int64)a1,
      (__int64)a1,
      *(__int64 **)(v7 + 8));
    *(_QWORD *)(v7 + 8) = v7;
    *(_QWORD *)v7 = v7;
    *(_QWORD *)(v7 + 16) = v7;
    a1[1] = 0LL;
  }
  else
  {
    while ( v2 != v4 )
    {
      sub_18001C2C0(&v13);
      v14 = v9;
      sub_18001C2C0(&v14);
      v11 = sub_180027138(a1, v10);
      sub_18001B8F4(v12, v11);
      v2 = v13;
    }
  }
  return v6;
}
