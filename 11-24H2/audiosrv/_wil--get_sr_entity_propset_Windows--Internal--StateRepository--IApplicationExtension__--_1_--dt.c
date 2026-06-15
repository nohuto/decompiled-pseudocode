/*
 * XREFs of _wil::get_sr_entity_propset_Windows::Internal::StateRepository::IApplicationExtension__::_1_::dtor$0 @ 0x180172485
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall wil::get_sr_entity_propset_Windows::Internal::StateRepository::IApplicationExtension__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::reset(a2 + 32);
}
