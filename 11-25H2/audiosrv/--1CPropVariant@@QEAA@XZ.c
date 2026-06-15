/*
 * XREFs of ??1CPropVariant@@QEAA@XZ @ 0x18007C2A0
 * Callers:
 *     _GetConnectorSignalProcessingModes_::_1_::dtor$0 @ 0x18015FBC5 (_GetConnectorSignalProcessingModes_--_1_--dtor$0.c)
 *     _EffectPackConfiguration::ReadConfiguration_::_1_::dtor$34 @ 0x180160C53 (_EffectPackConfiguration--ReadConfiguration_--_1_--dtor$34.c)
 *     _CSpatialProperties::SignalSpatialRelatedChange_::_1_::dtor$0 @ 0x180160DE0 (_CSpatialProperties--SignalSpatialRelatedChange_--_1_--dtor$0.c)
 *     _CConstraintModel::GetEndpointInformationFromId_::_1_::dtor$10 @ 0x180160FD4 (_CConstraintModel--GetEndpointInformationFromId_--_1_--dtor$10.c)
 *     _CopyProperties_::_1_::dtor$0 @ 0x180160FE6 (_CopyProperties_--_1_--dtor$0.c)
 *     _EffectPack::HardwareLoopbackEnabled_::_1_::dtor$0 @ 0x180161290 (_EffectPack--HardwareLoopbackEnabled_--_1_--dtor$0.c)
 *     _EffectPack::RefreshConnectorFormats_::_1_::dtor$1 @ 0x1801617F2 (_EffectPack--RefreshConnectorFormats_--_1_--dtor$1.c)
 *     _GetPacketSizeConstraints_::_1_::dtor$1 @ 0x180161828 (_GetPacketSizeConstraints_--_1_--dtor$1.c)
 *     _CEndpointCharacteristics::GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda____::_1_::dtor$0 @ 0x18016183A (_CEndpointCharacteristics--GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed_ea_18016183A.c)
 *     _CEndpointCharacteristics::GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda____::_1_::dtor$1 @ 0x18016184C (_CEndpointCharacteristics--GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed_ea_18016184C.c)
 *     _CEndpointCharacteristics::UpdateEffectPackDeviceIdInFxPropStore_::_1_::dtor$2 @ 0x180162BDE (_CEndpointCharacteristics--UpdateEffectPackDeviceIdInFxPropStore_--_1_--dtor$2.c)
 *     _GetProposedConnectorFormatForProcessingMode_::_1_::dtor$1 @ 0x180162D27 (_GetProposedConnectorFormatForProcessingMode_--_1_--dtor$1.c)
 *     _CEndpointCharacteristics::UpdateDeviceFormatEPProperty_::_1_::dtor$0 @ 0x180163594 (_CEndpointCharacteristics--UpdateDeviceFormatEPProperty_--_1_--dtor$0.c)
 *     _GetProposedConnectorFormatForProcessingMode_::_1_::dtor$0 @ 0x1801637D4 (_GetProposedConnectorFormatForProcessingMode_--_1_--dtor$0.c)
 *     _GetPacketSizeConstraints_::_1_::dtor$2 @ 0x180164EBF (_GetPacketSizeConstraints_--_1_--dtor$2.c)
 *     _CConstraintModel::GetEndpointInformationFromId_::_1_::dtor$8 @ 0x1801656A7 (_CConstraintModel--GetEndpointInformationFromId_--_1_--dtor$8.c)
 *     _GetConnectorProcessingModeDataFormatsFromDriver_::_1_::dtor$1 @ 0x180167A4C (_GetConnectorProcessingModeDataFormatsFromDriver_--_1_--dtor$1.c)
 *     __lambda_cd6f2b70438ec48af9647ef981891005_::operator()_::_1_::dtor$9 @ 0x1801681C6 (__lambda_cd6f2b70438ec48af9647ef981891005_--operator()_--_1_--dtor$9.c)
 *     _EffectPack::SetDeviceFormatAndSpatialSettings_::_1_::dtor$6 @ 0x180168371 (_EffectPack--SetDeviceFormatAndSpatialSettings_--_1_--dtor$6.c)
 *     _CSpatialProperties::ProcessPropertyChange_::_1_::dtor$0 @ 0x180168519 (_CSpatialProperties--ProcessPropertyChange_--_1_--dtor$0.c)
 *     _CSpatialProperties::SetSpatialAudioSettingsInternal_::_1_::dtor$2 @ 0x180168561 (_CSpatialProperties--SetSpatialAudioSettingsInternal_--_1_--dtor$2.c)
 *     _CConstraintModel::GetEndpointInformationFromId_::_1_::dtor$7 @ 0x18016913D (_CConstraintModel--GetEndpointInformationFromId_--_1_--dtor$7.c)
 *     _CConstraintModel::GetEndpointInformationFromId_::_1_::dtor$9 @ 0x18016914F (_CConstraintModel--GetEndpointInformationFromId_--_1_--dtor$9.c)
 *     _GetFxClsidsFromPropertyStore_::_1_::dtor$0 @ 0x1801696F1 (_GetFxClsidsFromPropertyStore_--_1_--dtor$0.c)
 *     _GetFxClsidsFromPropertyStore_::_1_::dtor$4 @ 0x180169703 (_GetFxClsidsFromPropertyStore_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall CPropVariant::~CPropVariant(PROPVARIANT *pvar)
{
  return PropVariantClear(pvar);
}
