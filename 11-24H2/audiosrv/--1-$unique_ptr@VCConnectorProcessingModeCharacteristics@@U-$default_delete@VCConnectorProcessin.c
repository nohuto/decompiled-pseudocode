/*
 * XREFs of ??1?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@QEAA@XZ @ 0x18003F9B0
 * Callers:
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@0@@Z @ 0x18003F328 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCConnectorProcessingModeCharacteristics@@U-$defaul.c)
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x18003F9E0 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 *     ?GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUPacketSizeConstraints@@_N_JAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x18003FD9C (-GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__.c)
 *     _CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics_::_1_::dtor$2 @ 0x18016AE77 (_CEndpointCharacteristics--DiscoverConnectorProcessingModeCharacteristics_--_1_--dtor$2.c)
 *     _CEndpointCharacteristics::GetConnectorProcessingModeCharacteristicsFromDriver_::_1_::dtor$2 @ 0x18016AEDA (_CEndpointCharacteristics--GetConnectorProcessingModeCharacteristicsFromDriver_--_1_--dtor$2.c)
 * Callees:
 *     ??1CConnectorProcessingModeCharacteristics@@QEAA@XZ @ 0x18009E848 (--1CConnectorProcessingModeCharacteristics@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<CConnectorProcessingModeCharacteristics>::~unique_ptr<CConnectorProcessingModeCharacteristics>(
        CConnectorProcessingModeCharacteristics **a1)
{
  CConnectorProcessingModeCharacteristics *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CConnectorProcessingModeCharacteristics::~CConnectorProcessingModeCharacteristics(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x40);
  }
}
