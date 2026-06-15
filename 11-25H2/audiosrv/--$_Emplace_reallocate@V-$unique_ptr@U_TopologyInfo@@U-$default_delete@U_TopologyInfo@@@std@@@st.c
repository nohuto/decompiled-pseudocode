/*
 * XREFs of ??$_Emplace_reallocate@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@@?$vector@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@V?$allocator@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@@2@@std@@AEAAPEAV?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800E5E6C
 * Callers:
 *     ?AddExtendedTopologyInfo@EndpointInfo@@AEAAJAEAV?$vector@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@V?$allocator@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@@2@@std@@AEBV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@1@Z @ 0x1800E75D0 (-AddExtendedTopologyInfo@EndpointInfo@@AEAAJAEAV-$vector@V-$unique_ptr@U_ConnectorInfo@@U-$defau.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180021374 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002203C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800B5E90 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@V?$allocator@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@@0@@Z @ 0x1800E6000 (--$_Uninitialized_move@PEAV-$unique_ptr@U_TopologyInfo@@U-$default_delete@U_TopologyInfo@@@std@@.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@V?$allocator@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@2@_K1@Z @ 0x1800EABD4 (-_Change_array@-$vector@V-$unique_ptr@U_TopologyInfo@@U-$default_delete@U_TopologyInfo@@@std@@@s.c)
 */

char *__fastcall std::vector<std::unique_ptr<_TopologyInfo>>::_Emplace_reallocate<std::unique_ptr<_TopologyInfo>>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  SIZE_T size_of; // rax
  char *v12; // rax
  __int64 v13; // rdi
  char *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // r8
  __int64 v18; // rcx
  char *result; // rax
  __int64 v20; // rcx
  char *v21; // [rsp+20h] [rbp-48h]
  __int64 v22; // [rsp+20h] [rbp-48h]
  __int64 v23; // [rsp+70h] [rbp+8h]

  v5 = (a2 - *a1) >> 3;
  v6 = (a1[1] - *a1) >> 3;
  v7 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
  v8 = v6 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v7);
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = (__int64)v12;
  v21 = v12;
  v14 = &v12[8 * v5];
  try
  {
    v15 = *a3;
    *a3 = 0LL;
    *(_QWORD *)v14 = v15;
    v23 = (__int64)v14;
    v16 = a1[1];
    v17 = v12;
    v18 = *a1;
    if ( a2 != v16 )
    {
      std::_Uninitialized_move<std::unique_ptr<_TopologyInfo> *,std::allocator<std::unique_ptr<_TopologyInfo>>>(
        v18,
        a2,
        v12);
      v23 = v13;
      v17 = v14 + 8;
      v16 = a1[1];
      v18 = a2;
    }
    std::_Uninitialized_move<std::unique_ptr<_TopologyInfo> *,std::allocator<std::unique_ptr<_TopologyInfo>>>(
      v18,
      v16,
      v17);
    std::vector<std::unique_ptr<_TopologyInfo>>::_Change_array(a1, v13, v8, v7, v21);
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<_TopologyInfo>>>(v23, (__int64)(v14 + 8));
    std::allocator<std::unique_ptr<_ConnectorInfo>>::deallocate(v20, v22, v7);
    throw;
  }
  return result;
}
