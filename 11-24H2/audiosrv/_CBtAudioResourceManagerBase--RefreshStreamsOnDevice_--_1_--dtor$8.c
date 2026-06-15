/*
 * XREFs of _CBtAudioResourceManagerBase::RefreshStreamsOnDevice_::_1_::dtor$8 @ 0x18016D694
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBtAudioResourceManagerBase::RefreshStreamsOnDevice_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 296));
}
