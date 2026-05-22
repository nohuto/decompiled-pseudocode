/*
 * XREFs of ??1BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA@XZ @ 0x18011290C
 * Callers:
 *     ??_EBamoSimpleHapticsControllerProxy@@MEAAPEAXI@Z @ 0x180112E40 (--_EBamoSimpleHapticsControllerProxy@@MEAAPEAXI@Z.c)
 *     ??_GBamoSimpleHapticsControllerProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180112E80 (--_GBamoSimpleHapticsControllerProxyImpl@BamoImpl@@UEAAPEAXI@Z.c)
 *     ??_GBamoMPCConstantManagerClientProxy@@MEAAPEAXI@Z @ 0x1801607E0 (--_GBamoMPCConstantManagerClientProxy@@MEAAPEAXI@Z.c)
 *     ??_EBamoMPCManagerProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180160820 (--_EBamoMPCManagerProxyImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall BamoImpl::BamoMPCConstantManagerClientProxyImpl::~BamoMPCConstantManagerClientProxyImpl(
        BamoImpl::BamoMPCConstantManagerClientProxyImpl *this)
{
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 4);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 2);
}
