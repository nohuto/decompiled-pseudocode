/*
 * XREFs of _ScanForInstalledSpatialAudioSubtypeAppServices_::_1_::dtor$11 @ 0x180168E77
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ScanForInstalledSpatialAudioSubtypeAppServices_::_1_::dtor_11()
{
  return wil::unique_any_array_ptr<IInspectable *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::details::com_unknown_deleter>::~unique_any_array_ptr<IInspectable *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::details::com_unknown_deleter>();
}
