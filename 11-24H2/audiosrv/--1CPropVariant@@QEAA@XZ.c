/*
 * XREFs of ??1CPropVariant@@QEAA@XZ @ 0x18006A690
 * Callers:
 *     _GetConnectorSignalProcessingModes_::_1_::dtor$0 @ 0x1801680FF (_GetConnectorSignalProcessingModes_--_1_--dtor$0.c)
 *     _CSpatialProperties::SignalSpatialRelatedChange_::_1_::dtor$0 @ 0x180168120 (_CSpatialProperties--SignalSpatialRelatedChange_--_1_--dtor$0.c)
 *     _EffectPackConfiguration::ReadConfiguration_::_1_::dtor$34 @ 0x18016A561 (_EffectPackConfiguration--ReadConfiguration_--_1_--dtor$34.c)
 *     _CopyProperties_::_1_::dtor$0 @ 0x18016A573 (_CopyProperties_--_1_--dtor$0.c)
 *     _CConstraintModel::GetEndpointInformationFromId_::_1_::dtor$10 @ 0x18016A5F4 (_CConstraintModel--GetEndpointInformationFromId_--_1_--dtor$10.c)
 *     _EffectPack::HardwareLoopbackEnabled_::_1_::dtor$0 @ 0x18016A8B0 (_EffectPack--HardwareLoopbackEnabled_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda____::_1_::dtor$0 @ 0x18016AD37 (_CEndpointCharacteristics--GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed_ea_18016AD37.c)
 *     _CEndpointCharacteristics::GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda____::_1_::dtor$1 @ 0x18016AD49 (_CEndpointCharacteristics--GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed_ea_18016AD49.c)
 *     _GetPacketSizeConstraints_::_1_::dtor$1 @ 0x18016ADF3 (_GetPacketSizeConstraints_--_1_--dtor$1.c)
 *     _EffectPackConfiguration::CreateGlobalEffectPackConfiguration_::_1_::dtor$4 @ 0x18016AFF2 (_EffectPackConfiguration--CreateGlobalEffectPackConfiguration_--_1_--dtor$4.c)
 *     _GetProposedConnectorFormatForProcessingMode_::_1_::dtor$1 @ 0x18016C064 (_GetProposedConnectorFormatForProcessingMode_--_1_--dtor$1.c)
 *     _CEndpointCharacteristics::UpdateDeviceFormatEPProperty_::_1_::dtor$0 @ 0x18016C8F9 (_CEndpointCharacteristics--UpdateDeviceFormatEPProperty_--_1_--dtor$0.c)
 *     _GetProposedConnectorFormatForProcessingMode_::_1_::dtor$0 @ 0x18016CB27 (_GetProposedConnectorFormatForProcessingMode_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::UpdateEffectPackDeviceIdInFxPropStore_::_1_::dtor$2 @ 0x18016E4A4 (_CEndpointCharacteristics--UpdateEffectPackDeviceIdInFxPropStore_--_1_--dtor$2.c)
 *     _GetPacketSizeConstraints_::_1_::dtor$2 @ 0x18016E563 (_GetPacketSizeConstraints_--_1_--dtor$2.c)
 *     _CConstraintModel::GetEndpointInformationFromId_::_1_::dtor$8 @ 0x18016ED31 (_CConstraintModel--GetEndpointInformationFromId_--_1_--dtor$8.c)
 *     _GetConnectorProcessingModeDataFormatsFromDriver_::_1_::dtor$1 @ 0x180170FCA (_GetConnectorProcessingModeDataFormatsFromDriver_--_1_--dtor$1.c)
 *     __lambda_9f1167a5534bf7cb01feca28c1508be7_::operator()_::_1_::dtor$9 @ 0x1801717E1 (__lambda_9f1167a5534bf7cb01feca28c1508be7_--operator()_--_1_--dtor$9.c)
 *     _EffectPack::SetDeviceFormatAndSpatialSettings_::_1_::dtor$6 @ 0x180171A87 (_EffectPack--SetDeviceFormatAndSpatialSettings_--_1_--dtor$6.c)
 *     _CSpatialProperties::ProcessPropertyChange_::_1_::dtor$0 @ 0x180171C53 (_CSpatialProperties--ProcessPropertyChange_--_1_--dtor$0.c)
 *     _CSpatialProperties::SetSpatialAudioSettingsInternal_::_1_::dtor$2 @ 0x180171C9B (_CSpatialProperties--SetSpatialAudioSettingsInternal_--_1_--dtor$2.c)
 *     _CConstraintModel::GetEndpointInformationFromId_::_1_::dtor$7 @ 0x180172A03 (_CConstraintModel--GetEndpointInformationFromId_--_1_--dtor$7.c)
 *     _CConstraintModel::GetEndpointInformationFromId_::_1_::dtor$9 @ 0x180172A15 (_CConstraintModel--GetEndpointInformationFromId_--_1_--dtor$9.c)
 *     _GetFxClsidsFromPropertyStore_::_1_::dtor$0 @ 0x180172FB7 (_GetFxClsidsFromPropertyStore_--_1_--dtor$0.c)
 *     _GetFxClsidsFromPropertyStore_::_1_::dtor$4 @ 0x180172FC9 (_GetFxClsidsFromPropertyStore_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall CPropVariant::~CPropVariant(PROPVARIANT *pvar)
{
  return PropVariantClear(pvar);
}
