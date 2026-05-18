/*
 * XREFs of sub_18004A874 @ 0x18004A874
 * Callers:
 *     sub_18004CA78 @ 0x18004CA78 (sub_18004CA78.c)
 *     sub_18005BB48 @ 0x18005BB48 (sub_18005BB48.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_180010CFC @ 0x180010CFC (sub_180010CFC.c)
 *     sub_18001CB64 @ 0x18001CB64 (sub_18001CB64.c)
 *     sub_18001CD64 @ 0x18001CD64 (sub_18001CD64.c)
 *     sub_180026644 @ 0x180026644 (sub_180026644.c)
 *     ??$construct@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@AEBUpiecewise_construct_t@2@V?$tuple@AEBQEAX@2@V?$tuple@$$V@2@@?$_Normal_allocator_traits@V?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@std@@@std@@SAXAEAV?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@1@PEAU?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAX@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18002E540 (--$construct@U-$pair@QEAXU_Mutex_count_pair@-A0xd833279a@@@std@@AEBUpiecewise_construct_t@2@V-$t.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18004A874(__int64 *a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h]
  _QWORD *v14; // [rsp+88h] [rbp+20h] BYREF

  sub_180010CFC(a1, &v12, a3);
  if ( *(_BYTE *)(v13 + 25) || *v5 < *(_QWORD *)(v13 + 32) )
  {
    if ( a1[1] == 0x492492492492492LL )
      sub_18001CD64();
    v14 = v5;
    v6 = *a1;
    *(_QWORD *)&v11 = a1;
    v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
    std::_Normal_allocator_traits<std::_Crt_allocator<std::_Tree_node<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>,void *>>>::construct<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>,std::piecewise_construct_t const &,std::tuple<void * const &>,std::tuple<>>(
      v8,
      (_QWORD *)(v7 + 32),
      v9,
      &v14);
    *(_QWORD *)v7 = v6;
    *(_QWORD *)(v7 + 8) = v6;
    *(_QWORD *)(v7 + 16) = v6;
    *(_WORD *)(v7 + 24) = 0;
    *((_QWORD *)&v11 + 1) = 0LL;
    sub_180026644((__int64)&v11);
    v11 = v12;
    *(_QWORD *)a2 = sub_18001CB64((__int64)a1, (__int64)&v11, v7);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v13;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
