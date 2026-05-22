/*
 * XREFs of ?GetDismissableClients@LightDismissProcessor@@AEAA?AV?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@PEAUHitTestResult@@@Z @ 0x180057900
 * Callers:
 *     ?OnHitTest@LightDismissProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180057890 (-OnHitTest@LightDismissProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcesso.c)
 * Callees:
 *     ??1?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAA@XZ @ 0x180057A6C (--1-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types.c)
 *     ?_Buy_nonzero@?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@AEAAX_K@Z @ 0x180094B4C (-_Buy_nonzero@-$vector@PEAVLightDismissClientProxy@@V-$allocator@PEAVLightDismissClientProxy@@@s.c)
 *     __std_find_trivial_8 @ 0x18009E460 (__std_find_trivial_8.c)
 *     ??$GetAttachedObject@UILightDismissClientProxy@@VLightDismissClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VLightDismissClientProxy@@@WRL@Microsoft@@XZ @ 0x18015BE30 (--$GetAttachedObject@UILightDismissClientProxy@@VLightDismissClientProxy@@@InputSite@@QEAA-AV-$C.c)
 *     ??1?$_Tidy_guard@V?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@@std@@QEAA@XZ @ 0x18015C018 (--1-$_Tidy_guard@V-$vector@PEAVLightDismissClientProxy@@V-$allocator@PEAVLightDismissClientProxy.c)
 *     memmove_0 @ 0x1801C7D08 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall LightDismissProcessor::GetDismissableClients(__int64 a1, _QWORD *a2, __int64 a3)
{
  void *v5; // rdx
  __int64 v6; // rcx
  void *v7; // rax
  char *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // r14
  _QWORD *v14; // rdi
  __int64 trivial_8; // rax
  void *v16[2]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v17; // [rsp+38h] [rbp-8h]
  _QWORD *v18; // [rsp+68h] [rbp+28h] BYREF

  v18 = a2;
  *(_OWORD *)v16 = 0LL;
  v17 = 0LL;
  if ( (qword_180246F50 - (__int64)LightDismissProcessor::s_clients) >> 3 )
  {
    std::vector<LightDismissClientProxy *>::_Buy_nonzero(v16);
    v9 = (char *)v16[0];
    v10 = qword_180246F50 - (_QWORD)LightDismissProcessor::s_clients;
    memmove_0(v16[0], LightDismissProcessor::s_clients, qword_180246F50 - (_QWORD)LightDismissProcessor::s_clients);
    v16[1] = &v9[8 * (v10 >> 3)];
    v18 = 0LL;
    std::_Tidy_guard<std::vector<LightDismissClientProxy *>>::~_Tidy_guard<std::vector<LightDismissClientProxy *>>(&v18);
  }
  v5 = v16[0];
  if ( v16[0] != v16[1] )
  {
    if ( a3 )
    {
      v11 = *(_QWORD *)(a3 + 104);
      v12 = *(_QWORD **)(v11 - 24);
      v13 = *(_QWORD **)(v11 - 16);
      if ( v12 != v13 )
      {
        do
        {
          InputSite::GetAttachedObject<ILightDismissClientProxy,LightDismissClientProxy>(*v12, &v18);
          v14 = v18;
          if ( v18 )
          {
            trivial_8 = _std_find_trivial_8(v16[0], v16[1], v18);
            memmove_0((void *)trivial_8, (const void *)(trivial_8 + 8), (size_t)v16[1] - trivial_8 - 8);
            v16[1] = (char *)v16[1] - 8;
          }
          if ( v14 )
          {
            v18 = 0LL;
            (*(void (__fastcall **)(_QWORD *))(v14[2] + 8LL))(v14 + 2);
          }
          ++v12;
        }
        while ( v12 != v13 );
        v5 = v16[0];
      }
    }
  }
  v6 = v17;
  v17 = 0LL;
  v7 = v16[1];
  v16[1] = 0LL;
  v16[0] = 0LL;
  *a2 = v5;
  a2[1] = v7;
  a2[2] = v6;
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0>>>::~_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0>>>(v16);
  return a2;
}
