/*
 * XREFs of ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180093428
 * Callers:
 *     ??0LampArrayRawInputProvider@@AEAA@XZ @ 0x1800811CC (--0LampArrayRawInputProvider@@AEAA@XZ.c)
 *     ??1DWMCursor@@MEAA@XZ @ 0x180093350 (--1DWMCursor@@MEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18009C5B0 (--1-$unique_any_t@V-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@.c)
 *     ??0SessionMonitor@@AEAA@PEAUISessionMonitorOwner@@PEAUIMessageSession@@@Z @ 0x1800A4520 (--0SessionMonitor@@AEAA@PEAUISessionMonitorOwner@@PEAUIMessageSession@@@Z.c)
 *     ??1SessionMonitor@@QEAA@XZ @ 0x1800A4808 (--1SessionMonitor@@QEAA@XZ.c)
 *     ??1GameControllerRawInputProvider@@UEAA@XZ @ 0x1800CD814 (--1GameControllerRawInputProvider@@UEAA@XZ.c)
 *     ??1MobileButtonDeviceCollection@@UEAA@XZ @ 0x1800D9F38 (--1MobileButtonDeviceCollection@@UEAA@XZ.c)
 *     ?SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z @ 0x1800DAFB8 (-SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z.c)
 *     ??1LampArrayRawInputProvider@@EEAA@XZ @ 0x1800E2FB0 (--1LampArrayRawInputProvider@@EEAA@XZ.c)
 *     ?Shutdown@LampArrayRawInputProvider@@AEAAXXZ @ 0x1800E40D0 (-Shutdown@LampArrayRawInputProvider@@AEAAXXZ.c)
 *     ??1SharedTargetWithHandle@SystemCursors@@QEAA@XZ @ 0x1800F901C (--1SharedTargetWithHandle@SystemCursors@@QEAA@XZ.c)
 *     ??1MPCFocusTarget@@UEAA@XZ @ 0x1800FF408 (--1MPCFocusTarget@@UEAA@XZ.c)
 *     ??1CallbackData@CallOnThreadExit@@QEAA@XZ @ 0x180130C9C (--1CallbackData@CallOnThreadExit@@QEAA@XZ.c)
 *     ?Initialize@SharedTargetWithHandle@SystemCursors@@QEAAJXZ @ 0x18015FC90 (-Initialize@SharedTargetWithHandle@SystemCursors@@QEAAJXZ.c)
 *     ??1CompliantHapticInterface@@QEAA@XZ @ 0x180184A20 (--1CompliantHapticInterface@@QEAA@XZ.c)
 *     ?TryAttachHapticMouse@HapticDeviceManager@@QEAAJKAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x18018DBD0 (-TryAttachHapticMouse@HapticDeviceManager@@QEAAJKAEBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ??1PenInterface@@UEAA@XZ @ 0x18018FE6C (--1PenInterface@@UEAA@XZ.c)
 *     ?CheckForHapticTouchpadArrival@PTPProcessor@@AEAAXPEBUDeviceInfo@@@Z @ 0x1801C580C (-CheckForHapticTouchpadArrival@PTPProcessor@@AEAAXPEBUDeviceInfo@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(
        void **a1)
{
  char *v1; // rcx
  int result; // eax

  v1 = (char *)*a1;
  result = (_DWORD)v1 - 1;
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return CloseHandle(v1);
  return result;
}
