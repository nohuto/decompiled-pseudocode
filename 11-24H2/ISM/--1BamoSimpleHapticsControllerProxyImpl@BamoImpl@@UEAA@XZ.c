/*
 * XREFs of ??1BamoSimpleHapticsControllerProxyImpl@BamoImpl@@UEAA@XZ @ 0x18011444C
 * Callers:
 *     ??_EBamoSimpleHapticsControllerProxy@@MEAAPEAXI@Z @ 0x180114990 (--_EBamoSimpleHapticsControllerProxy@@MEAAPEAXI@Z.c)
 *     ??_GBamoSimpleHapticsControllerProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1801149D0 (--_GBamoSimpleHapticsControllerProxyImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall BamoImpl::BamoSimpleHapticsControllerProxyImpl::~BamoSimpleHapticsControllerProxyImpl(
        BamoImpl::BamoSimpleHapticsControllerProxyImpl *this)
{
  const struct std::nothrow_t *v2; // rdx
  void *v3; // rcx

  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 6);
  v3 = (void *)*((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v3 )
    operator delete(v3, v2);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 2);
}
