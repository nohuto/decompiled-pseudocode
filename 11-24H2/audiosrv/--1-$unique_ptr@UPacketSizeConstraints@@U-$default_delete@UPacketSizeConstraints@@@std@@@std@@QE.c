/*
 * XREFs of ??1?$unique_ptr@UPacketSizeConstraints@@U?$default_delete@UPacketSizeConstraints@@@std@@@std@@QEAA@XZ @ 0x1801308D8
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x18008C498 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z @ 0x1801389A4 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetPacketSizeConstraints@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@AEAV?$unique_ptr@UPacketSizeConstraints@@U?$default_delete@UPacketSizeConstraints@@@std@@@std@@@Z @ 0x180167504 (-GetPacketSizeConstraints@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@AEAV-$unique_ptr@UPac.c)
 *     _CEndpointCharacteristics::DiscoverProcessingModeCharacteristics_::_1_::dtor$2 @ 0x180171853 (_CEndpointCharacteristics--DiscoverProcessingModeCharacteristics_--_1_--dtor$2.c)
 *     _CEndpointCharacteristics::TryAddFormat_::_1_::dtor$0 @ 0x180171AE1 (_CEndpointCharacteristics--TryAddFormat_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@UPacketSizeConstraints@@@std@@QEBAXPEAUPacketSizeConstraints@@@Z @ 0x1801329B0 (--R-$default_delete@UPacketSizeConstraints@@@std@@QEBAXPEAUPacketSizeConstraints@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<PacketSizeConstraints>::~unique_ptr<PacketSizeConstraints>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<PacketSizeConstraints>::operator()();
  return result;
}
