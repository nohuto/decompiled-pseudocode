/*
 * XREFs of ?CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x18006D33C
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x18008C498 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z @ 0x1801389A4 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ?WriteProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x18006D394 (-WriteProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengi.c)
 */

__int64 __fastcall CEndpointCharacteristics::CacheProcessingModeCharacteristics(CEndpointCharacteristics *this)
{
  int v1; // edx

  v1 = 0;
  if ( *((_QWORD *)this + 37) == *((_QWORD *)this + 38)
    || (v1 = CEndpointCharacteristics::WriteProcessingModeCharacteristics(this, 3LL), v1 >= 0) )
  {
    if ( *((_QWORD *)this + 34) != *((_QWORD *)this + 35) )
      return (unsigned int)CEndpointCharacteristics::WriteProcessingModeCharacteristics(this, 0LL);
  }
  return (unsigned int)v1;
}
