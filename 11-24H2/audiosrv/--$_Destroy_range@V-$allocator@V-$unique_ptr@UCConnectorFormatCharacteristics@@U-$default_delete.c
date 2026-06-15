/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@0@@Z @ 0x1800183B0
 * Callers:
 *     ??$_Emplace_reallocate@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@?$vector@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@2@@std@@AEAAPEAV?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800183E8 (--$_Emplace_reallocate@V-$unique_ptr@UCConnectorFormatCharacteristics@@U-$default_delete@UCConne.c)
 *     ?RefreshDefaultConnectorFormats@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800544A8 (-RefreshDefaultConnectorFormats@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@0@@Z @ 0x18006C178 (--$_Uninitialized_move@PEAV-$unique_ptr@UCConnectorFormatCharacteristics@@U-$default_delete@UCCo.c)
 *     ??1CConnectorProcessingModeCharacteristics@@QEAA@XZ @ 0x18009E848 (--1CConnectorProcessingModeCharacteristics@@QEAA@XZ.c)
 *     _std::vector_std::unique_ptr_CConnectorFormatCharacteristics_std::default_delete_CConnectorFormatCharacteristics____std::allocator_std::unique_ptr_CConnectorFormatCharacteristics_std::default_delete_CConnectorFormatCharacteristics_______::_Emplace_reallocate_std::unique_ptr_CConnectorFormatCharacteristics_std::default_delete_CConnectorFormatCharacteristics______::_1_::catch$0 @ 0x180169145 (_std--vector_std--unique_ptr_CConnectorFormatCharacteristics_std--default_delete_CConnectorForma.c)
 * Callees:
 *     ??1?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@QEAA@XZ @ 0x18001859C (--1-$unique_ptr@UCConnectorFormatCharacteristics@@U-$default_delete@UCConnectorFormatCharacteris.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<std::unique_ptr<CConnectorFormatCharacteristics>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = std::unique_ptr<CConnectorFormatCharacteristics>::~unique_ptr<CConnectorFormatCharacteristics>(v3);
      v3 += 8LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
