/*
 * XREFs of _PenEventsDispatcherPrincipal::AttachClient_::_1_::dtor$0 @ 0x1801D09AB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PenEventsDispatcherPrincipal::AttachClient_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)(a2 + 96));
}
