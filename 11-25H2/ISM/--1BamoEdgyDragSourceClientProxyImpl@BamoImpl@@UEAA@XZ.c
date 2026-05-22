/*
 * XREFs of ??1BamoEdgyDragSourceClientProxyImpl@BamoImpl@@UEAA@XZ @ 0x1801127BC
 * Callers:
 *     ??_EBamoEdgyDragSourceClientProxy@@MEAAPEAXI@Z @ 0x180112B40 (--_EBamoEdgyDragSourceClientProxy@@MEAAPEAXI@Z.c)
 *     ??_GBamoEdgyDragSourceClientProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180112B80 (--_GBamoEdgyDragSourceClientProxyImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall BamoImpl::BamoEdgyDragSourceClientProxyImpl::~BamoEdgyDragSourceClientProxyImpl(
        BamoImpl::BamoEdgyDragSourceClientProxyImpl *this,
        const struct std::nothrow_t *a2)
{
  void *v3; // rcx

  v3 = (void *)*((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v3 )
    operator delete(v3, a2);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 7);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 2);
}
