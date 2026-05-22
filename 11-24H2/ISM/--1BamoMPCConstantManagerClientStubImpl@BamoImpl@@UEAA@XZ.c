/*
 * XREFs of ??1BamoMPCConstantManagerClientStubImpl@BamoImpl@@UEAA@XZ @ 0x1800B33AC
 * Callers:
 *     ??_GBamoMPCConstantManagerClientStub@@MEAAPEAXI@Z @ 0x1800B3560 (--_GBamoMPCConstantManagerClientStub@@MEAAPEAXI@Z.c)
 *     ??_EBamoMPCConstantManagerClientStubImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1800B35A0 (--_EBamoMPCConstantManagerClientStubImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall BamoImpl::BamoMPCConstantManagerClientStubImpl::~BamoMPCConstantManagerClientStubImpl(
        BamoImpl::BamoMPCConstantManagerClientStubImpl *this)
{
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 8);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 4);
}
