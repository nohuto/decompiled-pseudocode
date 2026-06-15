/*
 * XREFs of _wil::get_sr_entity_propset_Windows::Internal::StateRepository::IApplicationExtension__::_1_::dtor$1 @ 0x180172497
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::get_sr_entity_propset_Windows::Internal::StateRepository::IApplicationExtension__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return wil::unique_any_array_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::size_address_ptr<unsigned int>::~size_address_ptr<unsigned int>((__int64 *)(a2 + 48));
}
