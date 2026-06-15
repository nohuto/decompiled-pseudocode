/*
 * XREFs of _lambda_7ee6381ccef9550c878152fb933ee002_::__lambda_7ee6381ccef9550c878152fb933ee002_ @ 0x1800B7298
 * Callers:
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@_NPEAVCAudioSessionManager@@66PEAPEAUISaDeviceProxy@@@Z @ 0x18009FF94 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@P.c)
 *     ?ScanForInstalledEffectPacks@EffectPackConfigurationManager@@AEAAJXZ @ 0x1800F90A4 (-ScanForInstalledEffectPacks@EffectPackConfigurationManager@@AEAAJXZ.c)
 *     ?QueueCompleteInitialization@AtmosCheck@@AEAAJW4AtmosRegistration@@@Z @ 0x180148DE0 (-QueueCompleteInitialization@AtmosCheck@@AEAAJW4AtmosRegistration@@@Z.c)
 *     _std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_1403d2100d9e3bfe85f35061f93efcca____::_1_::dtor$0 @ 0x18016406A (_std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_.c)
 *     _std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_9e8274ab863f63b0883b37bbcc41fb44____::_1_::dtor$0 @ 0x18016408E (_std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft-_ea_18016408E.c)
 *     _EffectPackConfigurationManager::ScanForInstalledEffectPacks_::_1_::dtor$3 @ 0x180166E19 (_EffectPackConfigurationManager--ScanForInstalledEffectPacks_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall lambda_7ee6381ccef9550c878152fb933ee002_::__lambda_7ee6381ccef9550c878152fb933ee002_(__int64 *a1)
{
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(a1);
}
