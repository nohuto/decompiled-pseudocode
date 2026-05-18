/*
 * XREFs of sub_18005548C @ 0x18005548C
 * Callers:
 *     sub_1800567F0 @ 0x1800567F0 (sub_1800567F0.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@2@PEAU32@@Z @ 0x18001CB8C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAXU_Mutex_count_pair@-A0xd833279a@@@std@@@std@.c)
 *     sub_1800542D0 @ 0x1800542D0 (sub_1800542D0.c)
 *     ??$_Erase_tree@V?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@QEAAXAEAV?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@1@@Z_12 @ 0x1800545CC (--$_Erase_tree@V-$_Crt_allocator@U-$_Tree_node@U-$pair@QEAXU_Mutex_count_pair@-A0xd_ea_1800545CC.c)
 */

__int64 *__fastcall sub_18005548C(__int64 *a1, __int64 *a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // r8
  _QWORD *v6; // r8
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // r8
  __int64 v10; // rax
  __int64 i; // rcx

  if ( a1 != a2 )
  {
    v4 = (_QWORD *)*a1;
    std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Erase_tree<std::_Crt_allocator<std::_Tree_node<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>,void *>>>(
      (__int64)a1,
      (__int64)a1,
      *(__int64 **)(*a1 + 8));
    v4[1] = v4;
    *v4 = v4;
    v4[2] = v4;
    v5 = *a1;
    a1[1] = 0LL;
    *(_QWORD *)(*a1 + 8) = sub_1800542D0(a1, *(_QWORD *)(*a2 + 8), v5);
    v6 = (_QWORD *)*a1;
    a1[1] = a2[1];
    v7 = v6[1];
    if ( *(_BYTE *)(v7 + 25) )
    {
      *v6 = v6;
      *(_QWORD *)(*a1 + 16) = *a1;
    }
    else
    {
      v8 = std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Min((_QWORD *)v7);
      *v9 = v8;
      v10 = *(_QWORD *)(*a1 + 8);
      for ( i = *(_QWORD *)(v10 + 16); !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 16) )
        v10 = i;
      *(_QWORD *)(*a1 + 16) = v10;
    }
  }
  return a1;
}
