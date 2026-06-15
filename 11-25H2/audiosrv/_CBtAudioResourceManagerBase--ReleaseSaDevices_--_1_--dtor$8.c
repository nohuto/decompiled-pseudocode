/*
 * XREFs of _CBtAudioResourceManagerBase::ReleaseSaDevices_::_1_::dtor$8 @ 0x18016545E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBtAudioResourceManagerBase::ReleaseSaDevices_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  std::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>>(a2 + 72);
}
