/*
 * XREFs of ??1TouchpadHapticDevice@@UEAA@XZ @ 0x180184AD4
 * Callers:
 *     ??_ETouchpadHapticDevice@@UEAAPEAXI@Z @ 0x180184C20 (--_ETouchpadHapticDevice@@UEAAPEAXI@Z.c)
 *     ??_EMouseHapticDevice@@UEAAPEAXI@Z @ 0x180188C70 (--_EMouseHapticDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CompliantHapticInterface@@QEAA@XZ @ 0x180184A20 (--1CompliantHapticInterface@@QEAA@XZ.c)
 */

void __fastcall TouchpadHapticDevice::~TouchpadHapticDevice(TouchpadHapticDevice *this)
{
  __int64 v2; // rdx

  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 77);
  CompliantHapticInterface::~CompliantHapticInterface((TouchpadHapticDevice *)((char *)this + 88), v2);
  BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::~BamoSimpleHapticsControllerPrincipalImpl((TouchpadHapticDevice *)((char *)this + 16));
}
