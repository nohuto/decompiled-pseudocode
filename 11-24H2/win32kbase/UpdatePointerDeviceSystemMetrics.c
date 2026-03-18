/*
 * XREFs of UpdatePointerDeviceSystemMetrics @ 0x140147008
 * Callers:
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x140146F90 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x14020F4F0 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     ?UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z @ 0x140147048 (-UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z.c)
 */

void __fastcall UpdatePointerDeviceSystemMetrics(struct DEVICEINFO *a1, bool a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1);
  CInputSystemMetrics::UpdatePointerDeviceSystemMetrics(*(CInputSystemMetrics **)(UserSessionState + 19008), a1, a2);
}
