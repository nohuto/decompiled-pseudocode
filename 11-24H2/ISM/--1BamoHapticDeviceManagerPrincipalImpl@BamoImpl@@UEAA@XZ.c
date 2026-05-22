/*
 * XREFs of ??1BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x180189D7C
 * Callers:
 *     ??1BamoHapticDeviceManagerPrincipal@@MEAA@XZ @ 0x180189D6C (--1BamoHapticDeviceManagerPrincipal@@MEAA@XZ.c)
 *     ??1HapticDeviceManager@@UEAA@XZ @ 0x180189DB4 (--1HapticDeviceManager@@UEAA@XZ.c)
 *     ??_GBamoHapticDeviceManagerPrincipal@@MEAAPEAXI@Z @ 0x180189E00 (--_GBamoHapticDeviceManagerPrincipal@@MEAAPEAXI@Z.c)
 *     ??_EBamoHapticDeviceManagerPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180189E40 (--_EBamoHapticDeviceManagerPrincipalImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C8194 (--1-$com_ptr_t@VBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@.c)
 */

void __fastcall BamoImpl::BamoHapticDeviceManagerPrincipalImpl::~BamoHapticDeviceManagerPrincipalImpl(
        BamoImpl::BamoHapticDeviceManagerPrincipalImpl *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  const char *v4; // r9

  wil::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>((__int64 *)this + 7);
  wil::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>((__int64 *)this + 6);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 5);
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(
    (volatile signed __int32 **)this + 2,
    v2,
    v3,
    v4);
}
