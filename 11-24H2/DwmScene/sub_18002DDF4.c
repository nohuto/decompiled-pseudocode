/*
 * XREFs of sub_18002DDF4 @ 0x18002DDF4
 * Callers:
 *     sub_18002BC74 @ 0x18002BC74 (sub_18002BC74.c)
 *     sub_18005CC84 @ 0x18005CC84 (sub_18005CC84.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18001CB64 @ 0x18001CB64 (sub_18001CB64.c)
 *     sub_18001CD64 @ 0x18001CD64 (sub_18001CD64.c)
 *     sub_180026644 @ 0x180026644 (sub_180026644.c)
 *     sub_18002D5A4 @ 0x18002D5A4 (sub_18002D5A4.c)
 *     sub_18002DB30 @ 0x18002DB30 (sub_18002DB30.c)
 *     ??$construct@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@AEBUpiecewise_construct_t@2@V?$tuple@AEBQEAX@2@V?$tuple@$$V@2@@?$_Normal_allocator_traits@V?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@std@@@std@@SAXAEAV?$_Crt_allocator@U?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@std@@@1@PEAU?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAX@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18002E540 (--$construct@U-$pair@QEAXU_Mutex_count_pair@-A0xd833279a@@@std@@AEBUpiecewise_construct_t@2@V-$t.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002DDF4(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]
  _QWORD *v16; // [rsp+88h] [rbp+20h] BYREF

  sub_18002D5A4((__int64)a1, (__int64 **)&v14, a3);
  v6 = v15;
  if ( sub_18002DB30(v7, v15, a3) )
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( a1[1] == 0x492492492492492LL )
      sub_18001CD64();
    v16 = a3;
    v8 = *a1;
    *(_QWORD *)&v13 = a1;
    v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
    std::_Normal_allocator_traits<std::_Crt_allocator<std::_Tree_node<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>,void *>>>::construct<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>,std::piecewise_construct_t const &,std::tuple<void * const &>,std::tuple<>>(
      v10,
      v9 + 32,
      v11,
      &v16);
    *(_QWORD *)v9 = v8;
    *(_QWORD *)(v9 + 8) = v8;
    *(_QWORD *)(v9 + 16) = v8;
    *(_WORD *)(v9 + 24) = 0;
    *((_QWORD *)&v13 + 1) = 0LL;
    sub_180026644((__int64)&v13);
    v13 = v14;
    *(_QWORD *)a2 = sub_18001CB64((__int64)a1, (__int64)&v13, v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
