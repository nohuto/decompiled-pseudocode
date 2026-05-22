/*
 * XREFs of ??1BamoDragManagerClientProxyImpl@BamoImpl@@UEAA@XZ @ 0x180095528
 * Callers:
 *     ??1DragManagerClientProxy@@UEAA@XZ @ 0x18007A59C (--1DragManagerClientProxy@@UEAA@XZ.c)
 *     ??1BamoDragManagerClientProxy@@MEAA@XZ @ 0x18007F940 (--1BamoDragManagerClientProxy@@MEAA@XZ.c)
 *     ??_GBamoInputSpacePayloadProxy@@MEAAPEAXI@Z @ 0x180112C40 (--_GBamoInputSpacePayloadProxy@@MEAAPEAXI@Z.c)
 *     ??_GBamoInputSpacePayloadProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180112C80 (--_GBamoInputSpacePayloadProxyImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall BamoImpl::BamoDragManagerClientProxyImpl::~BamoDragManagerClientProxyImpl(
        BamoImpl::BamoDragManagerClientProxyImpl *this,
        const struct std::nothrow_t *a2)
{
  void *v3; // rcx

  v3 = (void *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v3 )
    operator delete(v3, a2);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 2);
}
