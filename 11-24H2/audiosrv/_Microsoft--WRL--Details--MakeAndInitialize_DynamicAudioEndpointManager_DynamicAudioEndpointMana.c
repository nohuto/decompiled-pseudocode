/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_DynamicAudioEndpointManager_DynamicAudioEndpointManager__::_1_::dtor$1 @ 0x18016DE2B
 * Callers:
 *     <none>
 * Callees:
 *     ?ReloadVolumeState@CVolumeControlBase@@UEAAXXZ @ 0x180073F20 (-ReloadVolumeState@CVolumeControlBase@@UEAAXXZ.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_DynamicAudioEndpointManager_DynamicAudioEndpointManager__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  CVolumeControlBase::ReloadVolumeState(*(CVolumeControlBase **)(a2 + 80));
}
