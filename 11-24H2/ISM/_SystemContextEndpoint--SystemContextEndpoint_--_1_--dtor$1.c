/*
 * XREFs of _SystemContextEndpoint::SystemContextEndpoint_::_1_::dtor$1 @ 0x1801D354E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SystemContextEndpoint::SystemContextEndpoint_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<SystemContextManager,wil::err_exception_policy>::~com_ptr_t<SystemContextManager,wil::err_exception_policy>((__int64 *)(a2 + 144));
}
