/*
 * XREFs of ??1BamoDragSourceClientProxyImpl@BamoImpl@@UEAA@XZ @ 0x18011278C
 * Callers:
 *     ??_EBamoDragSourceClientProxy@@MEAAPEAXI@Z @ 0x180112AC0 (--_EBamoDragSourceClientProxy@@MEAAPEAXI@Z.c)
 *     ??_GBamoDragSourceClientProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180112B00 (--_GBamoDragSourceClientProxyImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall BamoImpl::BamoDragSourceClientProxyImpl::~BamoDragSourceClientProxyImpl(
        BamoImpl::BamoDragSourceClientProxyImpl *this,
        const struct std::nothrow_t *a2)
{
  void *v3; // rcx

  v3 = (void *)*((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v3 )
    operator delete(v3, a2);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 2);
}
