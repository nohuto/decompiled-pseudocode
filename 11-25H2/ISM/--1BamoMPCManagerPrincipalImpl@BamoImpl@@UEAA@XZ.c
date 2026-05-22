/*
 * XREFs of ??1BamoMPCManagerPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x1800B8030
 * Callers:
 *     ??1BamoMPCManagerPrincipal@@MEAA@XZ @ 0x1800B8020 (--1BamoMPCManagerPrincipal@@MEAA@XZ.c)
 *     ??1MPCManager@@UEAA@XZ @ 0x1800B8190 (--1MPCManager@@UEAA@XZ.c)
 *     ??_GBamoMPCManagerPrincipal@@MEAAPEAXI@Z @ 0x1800B8290 (--_GBamoMPCManagerPrincipal@@MEAAPEAXI@Z.c)
 *     ??_EBamoHapticDeviceManagerPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1800B82D0 (--_EBamoHapticDeviceManagerPrincipalImpl@BamoImpl@@UEAAPEAXI@Z.c)
 *     ??1HapticDeviceManager@@UEAA@XZ @ 0x180186058 (--1HapticDeviceManager@@UEAA@XZ.c)
 *     ??1PenHapticDevice@@UEAA@XZ @ 0x18018BDB8 (--1PenHapticDevice@@UEAA@XZ.c)
 *     ??_GBamoSimpleHapticsControllerPrincipal@@MEAAPEAXI@Z @ 0x18018BE80 (--_GBamoSimpleHapticsControllerPrincipal@@MEAAPEAXI@Z.c)
 *     ??_EBamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18018BEC0 (--_EBamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall BamoImpl::BamoMPCManagerPrincipalImpl::~BamoMPCManagerPrincipalImpl(
        BamoImpl::BamoMPCManagerPrincipalImpl *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  const char *v4; // r9

  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 5);
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(
    (volatile signed __int32 **)this + 2,
    v2,
    v3,
    v4);
}
