/*
 * XREFs of ?GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ @ 0x1800429A4
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x18009025C (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ??4?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800432E8 (--4-$vector@V-$unique_ptr@VCConnectorProcessingModeCharacteristics@@U-$default_delete@VCConnecto.c)
 *     ?ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x18004333C (-ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?_Tidy@?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800439E0 (-_Tidy@-$vector@V-$unique_ptr@VCConnectorProcessingModeCharacteristics@@U-$default_delete@VCConn.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18004E258 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CConnectorProcessingModeCharacteristics_std::default_delete_CConnectorProcessingModeCharacteristics___________lambda_490b27ccfab35984c0efb7b8bdf2ebc1___ @ 0x180127B78 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--unique_ptr_CConnecto.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CConnectorProcessingModeCharacteristics_std::default_delete_CConnectorProcessingModeCharacteristics___________lambda_fb834c165d35b95eaabc190aaac7af56___ @ 0x180127C08 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--unique__ea_180127C08.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::GetProcessingModeCharacteristicsFromPropertyStore(
        CEndpointCharacteristics *this)
{
  int v2; // ebx
  char *v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  CEndpointCharacteristics *v9; // [rsp+20h] [rbp-40h] BYREF
  int *v10; // [rsp+28h] [rbp-38h]
  __int128 v11; // [rsp+30h] [rbp-30h] BYREF
  __int64 v12; // [rsp+40h] [rbp-20h]
  __int128 v13; // [rsp+48h] [rbp-18h] BYREF
  __int64 v14; // [rsp+58h] [rbp-8h]
  int v15; // [rsp+80h] [rbp+20h] BYREF
  __int64 v16; // [rsp+88h] [rbp+28h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( *((_DWORD *)this + 64) )
  {
    v2 = CEndpointCharacteristics::ReadProcessingModeCharacteristics(this, 3LL, &v13);
    if ( v2 < 0 )
      goto LABEL_15;
    v15 = 0;
    v3 = (char *)this + 216;
    v4 = *((_QWORD *)&v13 + 1);
    while ( 1 )
    {
      v5 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((char *)this + 216, 3LL);
      if ( v15 >= *(_DWORD *)(v5 + 8) )
        break;
      v9 = this;
      v10 = &v15;
      ((void (__fastcall *)(__int64 *, _QWORD, __int64, CEndpointCharacteristics **))std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CConnectorProcessingModeCharacteristics_std::default_delete_CConnectorProcessingModeCharacteristics___________lambda_fb834c165d35b95eaabc190aaac7af56___)(
        &v16,
        v13,
        v4,
        &v9);
      if ( v16 == v4 )
      {
LABEL_7:
        v2 = -2147023728;
        goto LABEL_15;
      }
      ++v15;
    }
  }
  else
  {
    v3 = (char *)this + 216;
  }
  v2 = CEndpointCharacteristics::ReadProcessingModeCharacteristics(this, 0LL, &v11);
  if ( v2 >= 0 )
  {
    v15 = 0;
    v6 = *((_QWORD *)&v11 + 1);
    while ( 1 )
    {
      v7 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v3, 0LL);
      if ( v15 >= *(_DWORD *)(v7 + 8) )
        break;
      v9 = this;
      v10 = &v15;
      ((void (__fastcall *)(__int64 *, _QWORD, __int64, CEndpointCharacteristics **))std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CConnectorProcessingModeCharacteristics_std::default_delete_CConnectorProcessingModeCharacteristics___________lambda_490b27ccfab35984c0efb7b8bdf2ebc1___)(
        &v16,
        v11,
        v6,
        &v9);
      if ( v16 == v6 )
        goto LABEL_7;
      ++v15;
    }
    std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::operator=((char *)this + 296, &v13);
    std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::operator=((char *)this + 272, &v11);
  }
LABEL_15:
  std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(&v11);
  std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(&v13);
  return (unsigned int)v2;
}
