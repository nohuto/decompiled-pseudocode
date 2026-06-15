/*
 * XREFs of ??$_Emplace_reallocate@PEAVCConnectorProcessingModeCharacteristics@@@?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@AEAAPEAV?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@1@QEAV21@$$QEAPEAVCConnectorProcessingModeCharacteristics@@@Z @ 0x18015D648
 * Callers:
 *     ?DeserializeProcessingModeCharacteristics@@YAJKPEAEAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x1800433F4 (-DeserializeProcessingModeCharacteristics@@YAJKPEAEAEAV-$vector@V-$unique_ptr@VCConnectorProcess.c)
 * Callees:
 *     ?_Calculate_growth@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@AEBA_K_K@Z @ 0x180079804 (-_Calculate_growth@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@AEAV?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@0@AEA_K@Z @ 0x1800A5E74 (--$_Allocate_at_least_helper@V-$allocator@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil.c)
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@0@@Z @ 0x18012793C (--$_Uninitialized_move@PEAV-$unique_ptr@VCConnectorProcessingModeCharacteristics@@U-$default_del.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@2@_K1@Z @ 0x180130570 (-_Change_array@-$vector@V-$unique_ptr@VCConnectorProcessingModeCharacteristics@@U-$default_delet.c)
 */

char *__fastcall std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Emplace_reallocate<CConnectorProcessingModeCharacteristics *>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r12
  unsigned __int64 v8; // r13
  __int64 v9; // rcx
  char *v10; // rax
  __int64 v11; // rdi
  char *v12; // rsi
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v17; // [rsp+78h] [rbp+10h] BYREF
  _QWORD *v18; // [rsp+80h] [rbp+18h]
  _QWORD *v19; // [rsp+88h] [rbp+20h]

  v18 = a3;
  v5 = (a2 - *a1) >> 3;
  v6 = (a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v7 = v6 + 1;
  v8 = std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Calculate_growth(a1, v6 + 1);
  v17 = v8;
  v10 = (char *)std::_Allocate_at_least_helper<std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>(
                  v9,
                  &v17);
  v11 = (__int64)v10;
  v12 = &v10[8 * v5];
  v13 = (__int64)(v12 + 8);
  v19 = v12 + 8;
  *(_QWORD *)v12 = *v18;
  v14 = a1[1];
  v15 = *a1;
  if ( a2 == v14 )
  {
    v13 = (__int64)v10;
  }
  else
  {
    std::_Uninitialized_move<std::unique_ptr<CConnectorProcessingModeCharacteristics> *,std::allocator<std::unique_ptr<CConnectorProcessingModeCharacteristics>>>(
      v15,
      a2,
      (__int64)v10,
      (__int64)a1);
    v15 = a2;
    v14 = a1[1];
  }
  std::_Uninitialized_move<std::unique_ptr<CConnectorProcessingModeCharacteristics> *,std::allocator<std::unique_ptr<CConnectorProcessingModeCharacteristics>>>(
    v15,
    v14,
    v13,
    (__int64)a1);
  std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Change_array((__int64)a1, v11, v7, v8);
  return v12;
}
