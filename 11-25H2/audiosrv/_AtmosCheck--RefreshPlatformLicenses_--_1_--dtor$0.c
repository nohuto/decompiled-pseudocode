/*
 * XREFs of _AtmosCheck::RefreshPlatformLicenses_::_1_::dtor$0 @ 0x18016377A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AtmosCheck::RefreshPlatformLicenses_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::~unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>(a2 + 64);
}
