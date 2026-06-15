/*
 * XREFs of std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CConnectorProcessingModeCharacteristics_std::default_delete_CConnectorProcessingModeCharacteristics___________lambda_490b27ccfab35984c0efb7b8bdf2ebc1___ @ 0x18012FC38
 * Callers:
 *     ?GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ @ 0x18003F854 (-GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18003A750 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18003AFBC (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 */

_QWORD *__fastcall std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CConnectorProcessingModeCharacteristics_std::default_delete_CConnectorProcessingModeCharacteristics___________lambda_490b27ccfab35984c0efb7b8bdf2ebc1___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v5; // rdi
  __int64 v7; // rbp
  signed int *v8; // r14
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *result; // rax

  v5 = a2;
  if ( a2 != a3 )
  {
    v7 = *a4;
    v8 = (signed int *)a4[1];
    do
    {
      v9 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)(v7 + 216), 0LL);
      v10 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v9, *v8);
      v11 = **(_QWORD **)v5 - *v10;
      if ( !v11 )
        v11 = *(_QWORD *)(*(_QWORD *)v5 + 8LL) - v10[1];
      if ( !v11 )
        break;
      v5 += 8LL;
    }
    while ( v5 != a3 );
  }
  result = a1;
  *a1 = v5;
  return result;
}
