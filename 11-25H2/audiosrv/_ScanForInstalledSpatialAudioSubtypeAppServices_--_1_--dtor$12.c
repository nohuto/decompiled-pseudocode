/*
 * XREFs of _ScanForInstalledSpatialAudioSubtypeAppServices_::_1_::dtor$12 @ 0x180168E89
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ScanForInstalledSpatialAudioSubtypeAppServices_::_1_::dtor_12(__int64 a1, __int64 a2)
{
  return wil::unique_any_array_ptr<IInspectable *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::details::com_unknown_deleter>::size_address_ptr<unsigned int>::~size_address_ptr<unsigned int>((__int64 *)(a2 + 1384));
}
