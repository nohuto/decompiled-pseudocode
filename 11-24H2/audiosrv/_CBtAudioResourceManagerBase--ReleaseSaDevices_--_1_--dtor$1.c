/*
 * XREFs of _CBtAudioResourceManagerBase::ReleaseSaDevices_::_1_::dtor$1 @ 0x18016EB1E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBtAudioResourceManagerBase::ReleaseSaDevices_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::~forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>((__int64 **)(a2 + 272));
}
