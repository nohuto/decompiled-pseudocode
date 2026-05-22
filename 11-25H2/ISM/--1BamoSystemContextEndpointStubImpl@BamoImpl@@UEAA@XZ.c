/*
 * XREFs of ??1BamoSystemContextEndpointStubImpl@BamoImpl@@UEAA@XZ @ 0x1800ABCD0
 * Callers:
 *     ??_EBamoSystemContextEndpointStub@@MEAAPEAXI@Z @ 0x1800ABD80 (--_EBamoSystemContextEndpointStub@@MEAAPEAXI@Z.c)
 *     ??_GBamoSystemContextEndpointStubImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1800ABDC0 (--_GBamoSystemContextEndpointStubImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall BamoImpl::BamoSystemContextEndpointStubImpl::~BamoSystemContextEndpointStubImpl(
        BamoImpl::BamoSystemContextEndpointStubImpl *this)
{
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 9);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 8);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 4);
}
