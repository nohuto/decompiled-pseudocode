/*
 * XREFs of _DummyBroadcastProvider::OnEndpointStateChanged_::_1_::dtor$1 @ 0x180165943
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DummyBroadcastProvider::OnEndpointStateChanged_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<DummyBroadcastProvider,wil::err_returncode_policy>::~com_ptr_t<DummyBroadcastProvider,wil::err_returncode_policy>((__int64 *)(a2 + 200));
}
