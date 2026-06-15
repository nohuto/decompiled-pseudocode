/*
 * XREFs of ??1?$CComHeapPtr@UKSMULTIPLE_ITEM@@@ATL@@QEAA@XZ @ 0x180060A1C
 * Callers:
 *     _EffectPolicy::IsValidMicArrayForAEC_::_1_::dtor$0 @ 0x180168092 (_EffectPolicy--IsValidMicArrayForAEC_--_1_--dtor$0.c)
 *     _EffectPolicy::IsValidMicArrayForAEC_::_1_::dtor$1 @ 0x180168174 (_EffectPolicy--IsValidMicArrayForAEC_--_1_--dtor$1.c)
 *     _CUnsupportedConnectorFormats::GetBlob_::_1_::dtor$0 @ 0x18016A5A9 (_CUnsupportedConnectorFormats--GetBlob_--_1_--dtor$0.c)
 *     __lambda_8dedf90f1f70af288e66d072af95fd4f_::operator()_::_1_::dtor$0 @ 0x18016A5BB (__lambda_8dedf90f1f70af288e66d072af95fd4f_--operator()_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71____::_1_::dtor$5 @ 0x18016A667 (_CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d7.c)
 *     _CEndpointCharacteristics::DiscoverProcessingModeCharacteristics_::_1_::dtor$0 @ 0x18016A679 (_CEndpointCharacteristics--DiscoverProcessingModeCharacteristics_--_1_--dtor$0.c)
 *     _DeriveConnectorFormatFromStreamFormat_::_1_::dtor$2 @ 0x18016A68B (_DeriveConnectorFormatFromStreamFormat_--_1_--dtor$2.c)
 *     _CEndpointCharacteristics::DiscoverProcessingModeCharacteristics_::_1_::dtor$3 @ 0x18016A69D (_CEndpointCharacteristics--DiscoverProcessingModeCharacteristics_--_1_--dtor$3.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$1 @ 0x18016A6C2 (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$1.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$2 @ 0x18016A6D4 (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$2.c)
 *     _EffectPack::GetInitializedSystemEffectInterface_::_1_::dtor$3 @ 0x18016A7A0 (_EffectPack--GetInitializedSystemEffectInterface_--_1_--dtor$3.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$4 @ 0x18016A984 (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$4.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$5 @ 0x18016A996 (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$5.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$8 @ 0x18016A9CC (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$8.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$9 @ 0x18016A9DE (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$9.c)
 *     _CAudioSrv::ProcessAwayModeStateChange_::_1_::dtor$4 @ 0x18016A9F0 (_CAudioSrv--ProcessAwayModeStateChange_--_1_--dtor$4.c)
 *     _EffectPolicy::GetDelayedAECInsertionPolicy_::_1_::dtor$0 @ 0x18016AC8C (_EffectPolicy--GetDelayedAECInsertionPolicy_--_1_--dtor$0.c)
 *     _EffectPolicy::GetDelayedAECInsertionPolicy_::_1_::dtor$1 @ 0x18016AC9E (_EffectPolicy--GetDelayedAECInsertionPolicy_--_1_--dtor$1.c)
 *     _CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71____::_1_::dtor$4 @ 0x18016AFC0 (_CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c_ea_18016AFC0.c)
 *     _CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor$8 @ 0x18016BC2A (_CEndpointCharacteristicsCache--PopulateEndpointCharacteristicsCache_--_1_--dtor$8.c)
 *     _CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor$15 @ 0x18016BC4E (_CEndpointCharacteristicsCache--PopulateEndpointCharacteristicsCache_--_1_--dtor$15.c)
 *     _CVolumeControlBase::CVolumeControlBase_::_1_::dtor$1 @ 0x18016C89E (_CVolumeControlBase--CVolumeControlBase_--_1_--dtor$1.c)
 *     _CMonitor::IsCaptureMonitorEnabled_::_1_::dtor$3 @ 0x180171058 (_CMonitor--IsCaptureMonitorEnabled_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComHeapPtr<KSMULTIPLE_ITEM>::~CComHeapPtr<KSMULTIPLE_ITEM>(LPVOID *a1)
{
  CoTaskMemFree(*a1);
  *a1 = 0LL;
}
