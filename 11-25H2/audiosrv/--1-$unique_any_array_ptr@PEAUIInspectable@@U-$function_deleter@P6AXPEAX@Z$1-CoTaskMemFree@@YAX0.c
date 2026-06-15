/*
 * XREFs of ??1?$unique_any_array_ptr@PEAUIInspectable@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Ucom_unknown_deleter@details@3@@wil@@QEAA@XZ @ 0x180147138
 * Callers:
 *     _ScanForInstalledSpatialAudioSubtypeAppServices_::_1_::dtor$11 @ 0x180168E77 (_ScanForInstalledSpatialAudioSubtypeAppServices_--_1_--dtor$11.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 wil::unique_any_array_ptr<IInspectable *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::details::com_unknown_deleter>::~unique_any_array_ptr<IInspectable *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::details::com_unknown_deleter>()
{
  return wil::unique_any_array_ptr<IInspectable *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::details::com_unknown_deleter>::reset();
}
