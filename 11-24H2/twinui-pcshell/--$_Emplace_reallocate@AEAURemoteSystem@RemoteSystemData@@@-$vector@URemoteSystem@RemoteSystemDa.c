/*
 * XREFs of ??$_Emplace_reallocate@AEAURemoteSystem@RemoteSystemData@@@?$vector@URemoteSystem@RemoteSystemData@@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@AEAAPEAURemoteSystem@RemoteSystemData@@QEAU23@AEAU23@@Z @ 0x180644CF8
 * Callers:
 *     ?RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@AEBV?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@Z @ 0x1806506A4 (-RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Int.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x18014AECC (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@YAXPEAURemoteSystem@RemoteSystemData@@QEAU12@AEAV?$allocator@URemoteSystem@RemoteSystemData@@@0@@Z @ 0x1806449AC (--$_Destroy_range@V-$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@YAXPEAURemoteSystem@R.c)
 *     ??$_Uninitialized_move@PEAURemoteSystem@RemoteSystemData@@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@YAPEAURemoteSystem@RemoteSystemData@@QEAU12@0PEAU12@AEAV?$allocator@URemoteSystem@RemoteSystemData@@@0@@Z @ 0x1806459CC (--$_Uninitialized_move@PEAURemoteSystem@RemoteSystemData@@V-$allocator@URemoteSystem@RemoteSyste.c)
 *     ??$construct@URemoteSystem@RemoteSystemData@@AEAU12@@?$_Default_allocator_traits@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@SAXAEAV?$allocator@URemoteSystem@RemoteSystemData@@@1@QEAURemoteSystem@RemoteSystemData@@AEAU34@@Z @ 0x180645E3C (--$construct@URemoteSystem@RemoteSystemData@@AEAU12@@-$_Default_allocator_traits@V-$allocator@UR.c)
 */

volatile signed __int32 **__fastcall std::vector<RemoteSystemData::RemoteSystem>::_Emplace_reallocate<RemoteSystemData::RemoteSystem &>(
        volatile signed __int32 ***a1,
        volatile signed __int32 **a2,
        __int64 a3)
{
  __int64 v5; // r15
  __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  __int64 v12; // rcx
  volatile signed __int32 **v13; // r14
  volatile signed __int32 **v14; // r15
  volatile signed __int32 **v15; // rdx
  volatile signed __int32 **v16; // r8
  volatile signed __int32 **v17; // rcx
  volatile signed __int32 **v19; // [rsp+70h] [rbp+8h]

  v5 = (char *)a2 - (char *)*a1;
  v6 = ((char *)a1[1] - (char *)*a1) >> 5;
  v7 = 0x7FFFFFFFFFFFFFFLL;
  if ( v6 == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = ((char *)a1[2] - (char *)*a1) >> 5;
  v10 = v9 >> 1;
  if ( v9 <= 0x7FFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v8;
  }
  size_of = std::_Get_size_of_n<32>(v7);
  v13 = (volatile signed __int32 **)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = (volatile signed __int32 **)((char *)v13 + (v5 & 0xFFFFFFFFFFFFFFE0uLL));
  try
  {
    std::_Default_allocator_traits<std::allocator<RemoteSystemData::RemoteSystem>>::construct<RemoteSystemData::RemoteSystem,RemoteSystemData::RemoteSystem &>(
      v12,
      v14,
      a3);
    v19 = v14;
    v15 = a1[1];
    v16 = v13;
    v17 = *a1;
    if ( a2 != v15 )
    {
      std::_Uninitialized_move<RemoteSystemData::RemoteSystem *>(v17, a2, v13);
      v19 = v13;
      v16 = v14 + 4;
      v15 = a1[1];
      v17 = a2;
    }
    std::_Uninitialized_move<RemoteSystemData::RemoteSystem *>(v17, v15, v16);
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<RemoteSystemData::RemoteSystem>>(v19, v14 + 4);
    std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)(32 * v7));
    throw;
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<RemoteSystemData::RemoteSystem>>(*a1, a1[1]);
    std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)(((char *)a1[2] - (char *)*a1) & 0xFFFFFFFFFFFFFFE0uLL));
  }
  *a1 = v13;
  a1[1] = &v13[4 * v8];
  a1[2] = &v13[4 * v7];
  return v14;
}
