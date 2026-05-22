/*
 * XREFs of ??_GBamoMPCConstantManagerClientCallbacksProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180100A50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

BamoImpl::BamoMPCConstantManagerClientCallbacksProxyImpl *__fastcall BamoImpl::BamoMPCConstantManagerClientCallbacksProxyImpl::`scalar deleting destructor'(
        BamoImpl::BamoMPCConstantManagerClientCallbacksProxyImpl *this,
        char a2)
{
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 2);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
