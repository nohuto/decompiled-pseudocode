/*
 * XREFs of ??1BamoPenDeviceProxyImpl@BamoImpl@@UEAA@XZ @ 0x180064470
 * Callers:
 *     ??_EBamoPenDeviceProxy@@MEAAPEAXI@Z @ 0x180112DC0 (--_EBamoPenDeviceProxy@@MEAAPEAXI@Z.c)
 *     ??_EBamoPenDeviceProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180112E00 (--_EBamoPenDeviceProxyImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall BamoImpl::BamoPenDeviceProxyImpl::~BamoPenDeviceProxyImpl(BamoImpl::BamoPenDeviceProxyImpl *this)
{
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 6);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 2);
}
