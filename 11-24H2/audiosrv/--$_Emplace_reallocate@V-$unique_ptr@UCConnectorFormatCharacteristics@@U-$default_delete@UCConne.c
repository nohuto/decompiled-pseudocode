/*
 * XREFs of ??$_Emplace_reallocate@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@?$vector@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@2@@std@@AEAAPEAV?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800183E8
 * Callers:
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x18004067C (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@0@@Z @ 0x1800183B0 (--$_Destroy_range@V-$allocator@V-$unique_ptr@UCConnectorFormatCharacteristics@@U-$default_delete.c)
 *     ??1?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@QEAA@XZ @ 0x18001859C (--1-$unique_ptr@UCConnectorFormatCharacteristics@@U-$default_delete@UCConnectorFormatCharacteris.c)
 *     ??$_Emplace_back@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@?$_Uninitialized_backout_al@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800185DC (--$_Emplace_back@V-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@-$_U.c)
 *     ??$construct@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V12@@?$_Default_allocator_traits@V?$allocator@U?$_List_node@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@SAXAEAV?$allocator@U?$_List_node@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@1@QEAV?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@$$QEAV34@@Z @ 0x180018600 (--$construct@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V12@@-$_Defaul.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@0@@Z @ 0x18006C178 (--$_Uninitialized_move@PEAV-$unique_ptr@UCConnectorFormatCharacteristics@@U-$default_delete@UCCo.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@AEAV?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@0@AEA_K@Z @ 0x1800A2284 (--$_Allocate_at_least_helper@V-$allocator@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil.c)
 */

__int64 __fastcall std::vector<std::unique_ptr<CConnectorFormatCharacteristics>>::_Emplace_reallocate<std::unique_ptr<CConnectorFormatCharacteristics>>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r14
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // r13
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v16; // rcx
  __int64 v17; // r10
  __int64 v18; // r9
  __int64 v19; // rdi
  __int64 v20; // r15
  __int64 v22; // [rsp+28h] [rbp-50h] BYREF
  __int64 v23; // [rsp+30h] [rbp-48h]
  __int64 *v24; // [rsp+38h] [rbp-40h]
  __int64 v25; // [rsp+80h] [rbp+8h] BYREF
  __int64 v26; // [rsp+88h] [rbp+10h]
  __int64 v27; // [rsp+90h] [rbp+18h]
  __int64 v28; // [rsp+98h] [rbp+20h]

  v27 = a3;
  v5 = (a2 - *a1) >> 3;
  v6 = (a1[1] - *a1) >> 3;
  v7 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v6 + 1;
  }
  v26 = v7;
  v25 = v7;
  v11 = std::_Allocate_at_least_helper<std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>(
          v9,
          &v25);
  v12 = v11 + 8 * v5;
  v28 = v12 + 8;
  std::_Default_allocator_traits<std::allocator<std::_List_node<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,void *>>>::construct<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>(
    v13,
    v12,
    v27);
  v25 = v12;
  v14 = a1[1];
  v15 = *a1;
  if ( a2 == v14 )
  {
    v22 = v11;
    v16 = v11;
    v23 = v11;
    v24 = a1;
    if ( v15 != v14 )
    {
      do
      {
        std::_Uninitialized_backout_al<std::allocator<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>>::_Emplace_back<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>(
          &v22,
          v15);
        v15 = v17 + 8;
      }
      while ( v15 != v18 );
      v16 = v23;
    }
    std::_Destroy_range<std::allocator<std::unique_ptr<CConnectorFormatCharacteristics>>>(v16, v16);
  }
  else
  {
    std::_Uninitialized_move<std::unique_ptr<CConnectorFormatCharacteristics> *,std::allocator<std::unique_ptr<CConnectorFormatCharacteristics>>>(
      *a1,
      a2,
      v11,
      a1);
    v25 = v11;
    std::_Uninitialized_move<std::unique_ptr<CConnectorFormatCharacteristics> *,std::allocator<std::unique_ptr<CConnectorFormatCharacteristics>>>(
      a2,
      a1[1],
      v12 + 8,
      a1);
  }
  v19 = *a1;
  if ( *a1 )
  {
    v20 = a1[1];
    while ( v19 != v20 )
    {
      std::unique_ptr<CConnectorFormatCharacteristics>::~unique_ptr<CConnectorFormatCharacteristics>(v19);
      v19 += 8LL;
    }
    std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v11;
  a1[1] = v11 + 8 * v8;
  a1[2] = v11 + 8 * v7;
  return v12;
}
