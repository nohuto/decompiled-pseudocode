/*
 * XREFs of _BamoInputSiteElementProxy::OnDisconnectedCallout_::_1_::dtor$2 @ 0x1801CACA4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoInputSiteElementProxy::OnDisconnectedCallout_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)(a2 + 40));
}
