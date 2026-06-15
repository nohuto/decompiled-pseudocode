/*
 * XREFs of ??$_Emplace_reallocate@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@?$vector@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@2@@std@@AEAAPEAV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800B04E8
 * Callers:
 *     ?GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x1800B1320 (-GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIA.c)
 * Callees:
 *     ??$construct@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V12@@?$_Default_allocator_traits@V?$allocator@U?$_List_node@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@SAXAEAV?$allocator@U?$_List_node@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@1@QEAV?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@$$QEAV34@@Z @ 0x180025830 (--$construct@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V12@@-$_Defaul.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@AEAV?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@0@AEA_K@Z @ 0x1800A5E74 (--$_Allocate_at_least_helper@V-$allocator@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@0@@Z @ 0x1800A61B8 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCAppSubmixClient@@U-$default_delete@VCAppSubmixCli.c)
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@0@@Z @ 0x1800B0778 (--$_Uninitialized_move@PEAV-$unique_ptr@VCAppSubmixClient@@U-$default_delete@VCAppSubmixClient@@.c)
 */

__int64 **__fastcall std::vector<std::unique_ptr<CAppSubmixClient>>::_Emplace_reallocate<std::unique_ptr<CAppSubmixClient>>(
        __int64 ***a1,
        char *a2,
        __int64 *a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 **v11; // rax
  __int64 v12; // rcx
  __int64 **v13; // rdi
  __int64 **v14; // r14
  __int64 **v15; // r15
  char *v16; // rdx
  char *v17; // rcx
  __int64 **result; // rax
  __int64 **v19; // [rsp+20h] [rbp-48h]
  char *v20; // [rsp+20h] [rbp-48h]
  __int64 **v21; // [rsp+70h] [rbp+8h] BYREF
  __int64 v22; // [rsp+78h] [rbp+10h]
  __int64 *v23; // [rsp+80h] [rbp+18h]
  __int64 **v24; // [rsp+88h] [rbp+20h]

  v23 = a3;
  v5 = (a2 - (char *)*a1) >> 3;
  v6 = a1[1] - *a1;
  v7 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = a1[2] - *a1;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v6 + 1;
  }
  v22 = v7;
  v21 = (__int64 **)v7;
  v11 = (__int64 **)std::_Allocate_at_least_helper<std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>(
                      v9,
                      (unsigned __int64 *)&v21);
  v13 = v11;
  v19 = v11;
  v14 = &v11[v5];
  v15 = v14 + 1;
  v24 = v14 + 1;
  try
  {
    std::_Default_allocator_traits<std::allocator<std::_List_node<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,void *>>>::construct<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>(
      v12,
      v14,
      v23);
    v21 = v14;
    v16 = (char *)a1[1];
    v17 = (char *)*a1;
    if ( a2 == v16 )
    {
      v15 = v13;
    }
    else
    {
      std::_Uninitialized_move<std::unique_ptr<CAppSubmixClient> *,std::allocator<std::unique_ptr<CAppSubmixClient>>>(
        v17,
        a2,
        v13,
        a1,
        v19);
      v21 = v13;
      v17 = a2;
      v16 = (char *)a1[1];
    }
    std::_Uninitialized_move<std::unique_ptr<CAppSubmixClient> *,std::allocator<std::unique_ptr<CAppSubmixClient>>>(
      v17,
      v16,
      v15,
      a1,
      v19);
    if ( *a1 )
    {
      std::_Destroy_range<std::allocator<std::unique_ptr<CAppSubmixClient>>>(*a1, a1[1]);
      std::_Deallocate<16,0>(
        (char *)*a1,
        (const struct std::nothrow_t *)(((char *)a1[2] - (char *)*a1) & 0xFFFFFFFFFFFFFFF8uLL));
    }
    *a1 = v13;
    a1[1] = &v13[v8];
    a1[2] = &v13[v7];
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CAppSubmixClient>>>(v21, v24);
    std::_Deallocate<16,0>(v20, (const struct std::nothrow_t *)(8 * v22));
    throw;
  }
  return result;
}
