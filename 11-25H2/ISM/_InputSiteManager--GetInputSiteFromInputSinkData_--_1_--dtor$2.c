/*
 * XREFs of _InputSiteManager::GetInputSiteFromInputSinkData_::_1_::dtor$2 @ 0x1801C8EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall InputSiteManager::GetInputSiteFromInputSinkData_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>((_QWORD *)(a2 + 48));
}
