/*
 * XREFs of ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180093228
 * Callers:
 *     ??0LampArrayRawInputProvider@@AEAA@XZ @ 0x1800810BC (--0LampArrayRawInputProvider@@AEAA@XZ.c)
 *     ??1DWMCursor@@MEAA@XZ @ 0x180093150 (--1DWMCursor@@MEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18009C3E0 (--1-$unique_any_t@V-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@.c)
 *     ??0SessionMonitor@@AEAA@PEAUISessionMonitorOwner@@PEAUIMessageSession@@@Z @ 0x1800A4148 (--0SessionMonitor@@AEAA@PEAUISessionMonitorOwner@@PEAUIMessageSession@@@Z.c)
 *     ??1SessionMonitor@@QEAA@XZ @ 0x1800A4430 (--1SessionMonitor@@QEAA@XZ.c)
 *     ??1GameControllerRawInputProvider@@UEAA@XZ @ 0x1800CB198 (--1GameControllerRawInputProvider@@UEAA@XZ.c)
 *     ??1MobileButtonDeviceCollection@@UEAA@XZ @ 0x1800D6D48 (--1MobileButtonDeviceCollection@@UEAA@XZ.c)
 *     ?SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z @ 0x1800D7DC8 (-SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z.c)
 *     ??1LampArrayRawInputProvider@@EEAA@XZ @ 0x1800E0080 (--1LampArrayRawInputProvider@@EEAA@XZ.c)
 *     ?Shutdown@LampArrayRawInputProvider@@AEAAXXZ @ 0x1800E11A0 (-Shutdown@LampArrayRawInputProvider@@AEAAXXZ.c)
 *     ??1SharedTargetWithHandle@SystemCursors@@QEAA@XZ @ 0x1800F734C (--1SharedTargetWithHandle@SystemCursors@@QEAA@XZ.c)
 *     ??1MPCFocusTarget@@UEAA@XZ @ 0x1800FD738 (--1MPCFocusTarget@@UEAA@XZ.c)
 *     ??1CallbackData@CallOnThreadExit@@QEAA@XZ @ 0x18012EB78 (--1CallbackData@CallOnThreadExit@@QEAA@XZ.c)
 *     ?Initialize@SharedTargetWithHandle@SystemCursors@@QEAAJXZ @ 0x18015EE60 (-Initialize@SharedTargetWithHandle@SystemCursors@@QEAAJXZ.c)
 *     ??1PenInterface@@UEAA@XZ @ 0x18018834C (--1PenInterface@@UEAA@XZ.c)
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
