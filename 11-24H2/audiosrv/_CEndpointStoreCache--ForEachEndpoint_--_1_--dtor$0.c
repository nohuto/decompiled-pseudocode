/*
 * XREFs of _CEndpointStoreCache::ForEachEndpoint_::_1_::dtor$0 @ 0x18016A3B9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CEndpointStoreCache::ForEachEndpoint_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::forward_list<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>>((_QWORD **)(a2 + 48));
}
