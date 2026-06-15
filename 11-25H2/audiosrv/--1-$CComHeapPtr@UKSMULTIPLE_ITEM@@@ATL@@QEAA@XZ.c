/*
 * XREFs of ??1?$CComHeapPtr@UKSMULTIPLE_ITEM@@@ATL@@QEAA@XZ @ 0x18006F81C
 * Callers:
 *     _EffectPolicy::IsValidMicArrayForAEC_::_1_::dtor$1 @ 0x180160C94 (_EffectPolicy--IsValidMicArrayForAEC_--_1_--dtor$1.c)
 *     _EffectPolicy::IsValidMicArrayForAEC_::_1_::dtor$0 @ 0x180160D78 (_EffectPolicy--IsValidMicArrayForAEC_--_1_--dtor$0.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$4 @ 0x180160E3A (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$4.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$5 @ 0x180160E4C (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$5.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$8 @ 0x180160E82 (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$8.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$9 @ 0x180160E94 (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$9.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$2 @ 0x180160EA6 (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$2.c)
 *     _CAudioSrv::ProcessAwayModeStateChange_::_1_::dtor$4 @ 0x180160EB8 (_CAudioSrv--ProcessAwayModeStateChange_--_1_--dtor$4.c)
 *     _CUnsupportedConnectorFormats::GetBlob_::_1_::dtor$0 @ 0x180160F6C (_CUnsupportedConnectorFormats--GetBlob_--_1_--dtor$0.c)
 *     __lambda_c4b06e3056b944e8c68b4f3e8aaba954_::operator()_::_1_::dtor$0 @ 0x180160F7E (__lambda_c4b06e3056b944e8c68b4f3e8aaba954_--operator()_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71____::_1_::dtor$5 @ 0x18016106B (_CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d7.c)
 *     _CEndpointCharacteristics::DiscoverProcessingModeCharacteristics_::_1_::dtor$0 @ 0x18016107D (_CEndpointCharacteristics--DiscoverProcessingModeCharacteristics_--_1_--dtor$0.c)
 *     _DeriveConnectorFormatFromStreamFormat_::_1_::dtor$2 @ 0x18016108F (_DeriveConnectorFormatFromStreamFormat_--_1_--dtor$2.c)
 *     _CEndpointCharacteristics::DiscoverProcessingModeCharacteristics_::_1_::dtor$3 @ 0x1801610A1 (_CEndpointCharacteristics--DiscoverProcessingModeCharacteristics_--_1_--dtor$3.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$1 @ 0x1801610D2 (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$1.c)
 *     _EffectPack::GetInitializedSystemEffectInterface_::_1_::dtor$3 @ 0x180161180 (_EffectPack--GetInitializedSystemEffectInterface_--_1_--dtor$3.c)
 *     _CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71____::_1_::dtor$4 @ 0x1801617C0 (_CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c_ea_1801617C0.c)
 *     _EffectPolicy::GetDelayedAECInsertionPolicy_::_1_::dtor$0 @ 0x1801619DC (_EffectPolicy--GetDelayedAECInsertionPolicy_--_1_--dtor$0.c)
 *     _EffectPolicy::GetDelayedAECInsertionPolicy_::_1_::dtor$1 @ 0x1801619EE (_EffectPolicy--GetDelayedAECInsertionPolicy_--_1_--dtor$1.c)
 *     _CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor$8 @ 0x180162745 (_CEndpointCharacteristicsCache--PopulateEndpointCharacteristicsCache_--_1_--dtor$8.c)
 *     _CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor$15 @ 0x180162769 (_CEndpointCharacteristicsCache--PopulateEndpointCharacteristicsCache_--_1_--dtor$15.c)
 *     _CMonitor::IsCaptureMonitorEnabled_::_1_::dtor$3 @ 0x180167AEC (_CMonitor--IsCaptureMonitorEnabled_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComHeapPtr<KSMULTIPLE_ITEM>::~CComHeapPtr<KSMULTIPLE_ITEM>(LPVOID *a1)
{
  CoTaskMemFree(*a1);
  *a1 = 0LL;
}
