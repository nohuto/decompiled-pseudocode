/*
 * XREFs of ??$_Try_emplace@AEBU_GUID@@$$V@?$map@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@_N@1@AEBU_GUID@@@Z @ 0x180142A5C
 * Callers:
 *     ?OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x180143710 (-OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Gra.c)
 *     ?OnHmdRemoved@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x180143950 (-OnHmdRemoved@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@G.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002203C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memcmp_0 @ 0x1800ABC2C (memcmp_0.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800DD67C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800DD8A0 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$_Find_lower_bound@U_GUID@@@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@@1@AEBU_GUID@@@Z @ 0x1801429C0 (--$_Find_lower_bound@U_GUID@@@-$_Tree@V-$_Tmap_traits@U_GUID@@UHmdInfo@@U-$less@U_GUID@@@std@@V-.c)
 *     ??$construct@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@AEBUpiecewise_construct_t@2@V?$tuple@AEBU_GUID@@@2@V?$tuple@$$V@2@@?$_Default_allocator_traits@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@@std@@@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@@1@QEAU?$pair@$$CBU_GUID@@UHmdInfo@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBU_GUID@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180142B5C (--$construct@U-$pair@$$CBU_GUID@@UHmdInfo@@@std@@AEBUpiecewise_construct_t@2@V-$tuple@AEBU_GUID@.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180143118 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@@s.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::map<_GUID,HmdInfo>::_Try_emplace<_GUID const &,>(__int64 *a1, __int64 a2, __int128 *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rbx
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int128 Buf2; // [rsp+30h] [rbp-40h] BYREF
  __int128 Buf1; // [rsp+40h] [rbp-30h] BYREF
  __int128 v14; // [rsp+50h] [rbp-20h] BYREF
  __int64 v15; // [rsp+60h] [rbp-10h]
  __int128 *v16; // [rsp+A8h] [rbp+38h] BYREF

  std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Find_lower_bound<_GUID>(
    (__int64)a1,
    (__int64 **)&v14,
    a3);
  v6 = v15;
  if ( *(_BYTE *)(v15 + 25) || (Buf2 = *(_OWORD *)(v15 + 32), Buf1 = *a3, memcmp_0(&Buf1, &Buf2, 0x10uLL) < 0) )
  {
    if ( a1[1] == 0x38E38E38E38E38ELL )
      std::_Throw_tree_length_error();
    v16 = a3;
    v7 = *a1;
    Buf2 = (unsigned __int64)a1;
    v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x48uLL);
    std::_Default_allocator_traits<std::allocator<std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *>>>::construct<std::pair<_GUID const,HmdInfo>,std::piecewise_construct_t const &,std::tuple<_GUID const &>,std::tuple<>>(
      v9,
      v8 + 4,
      v10,
      &v16);
    *v8 = v7;
    v8[1] = v7;
    v8[2] = v7;
    *((_WORD *)v8 + 12) = 0;
    *((_QWORD *)&Buf2 + 1) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *>>>(&Buf2);
    Buf1 = v14;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,APPLICATION_REF_DATA>>>::_Insert_node(
                      a1,
                      (__int64)&Buf1,
                      (__int64)v8);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
