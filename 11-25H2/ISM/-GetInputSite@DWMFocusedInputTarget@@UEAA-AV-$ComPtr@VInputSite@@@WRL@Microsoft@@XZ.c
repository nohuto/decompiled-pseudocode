/*
 * XREFs of ?GetInputSite@DWMFocusedInputTarget@@UEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@XZ @ 0x180015040
 * Callers:
 *     <none>
 * Callees:
 *     ?PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ @ 0x180014640 (-PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

_QWORD *__fastcall DWMFocusedInputTarget::GetInputSite(__int64 a1, _QWORD *a2)
{
  if ( !*(_QWORD *)(a1 + 48) )
    DWMFocusedInputTarget::PopulateInputSiteFromViewId((DWMFocusedInputTarget *)(a1 - 32));
  *a2 = *(_QWORD *)(a1 + 48);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(a2);
  return a2;
}
