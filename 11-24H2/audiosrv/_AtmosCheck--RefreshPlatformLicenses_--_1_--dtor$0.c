/*
 * XREFs of _AtmosCheck::RefreshPlatformLicenses_::_1_::dtor$0 @ 0x18016CACD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AtmosCheck::RefreshPlatformLicenses_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::~unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>(a2 + 48);
}
