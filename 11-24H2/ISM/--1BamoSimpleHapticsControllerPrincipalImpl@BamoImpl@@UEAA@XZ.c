/*
 * XREFs of ??1BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x1801849E4
 * Callers:
 *     ??1BamoSimpleHapticsControllerPrincipal@@MEAA@XZ @ 0x1801849D4 (--1BamoSimpleHapticsControllerPrincipal@@MEAA@XZ.c)
 *     ??1TouchpadHapticDevice@@UEAA@XZ @ 0x180184AD4 (--1TouchpadHapticDevice@@UEAA@XZ.c)
 *     ??_GBamoSimpleHapticsControllerPrincipal@@MEAAPEAXI@Z @ 0x180184BA0 (--_GBamoSimpleHapticsControllerPrincipal@@MEAAPEAXI@Z.c)
 *     ??_EBamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180184BE0 (--_EBamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@UEAAPEAXI@Z.c)
 *     ??1PenHapticDevice@@UEAA@XZ @ 0x180188220 (--1PenHapticDevice@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::~BamoSimpleHapticsControllerPrincipalImpl(
        BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *this)
{
  const struct std::nothrow_t *v2; // rdx
  __int64 v3; // r8
  const char *v4; // r9
  void *v5; // rcx

  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 7);
  v5 = (void *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v5 )
    operator delete(v5, v2);
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(
    (volatile signed __int32 **)this + 2,
    (__int64)v2,
    v3,
    v4);
}
