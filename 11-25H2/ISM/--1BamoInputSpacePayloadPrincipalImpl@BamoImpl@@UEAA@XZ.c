/*
 * XREFs of ??1BamoInputSpacePayloadPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x180139C24
 * Callers:
 *     ??_GBamoInputSpacePayloadPrincipal@@MEAAPEAXI@Z @ 0x180139D00 (--_GBamoInputSpacePayloadPrincipal@@MEAAPEAXI@Z.c)
 *     ??_GBamoInputSpacePayloadPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180139D40 (--_GBamoInputSpacePayloadPrincipalImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall BamoImpl::BamoInputSpacePayloadPrincipalImpl::~BamoInputSpacePayloadPrincipalImpl(
        BamoImpl::BamoInputSpacePayloadPrincipalImpl *this,
        const struct std::nothrow_t *a2,
        __int64 a3,
        const char *a4)
{
  void *v5; // rcx

  v5 = (void *)*((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  if ( v5 )
    operator delete(v5, a2);
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(
    (volatile signed __int32 **)this + 2,
    (__int64)a2,
    a3,
    a4);
}
