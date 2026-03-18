/*
 * XREFs of ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140069000
 * Callers:
 *     ?RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z @ 0x140029090 (-RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z.c)
 *     ?RegionCore_vScale@Win32kRS@@YAXPEAVREGION_CORE@@VPOINTFL@@@Z @ 0x14003D324 (-RegionCore_vScale@Win32kRS@@YAXPEAVREGION_CORE@@VPOINTFL@@@Z.c)
 *     ?RegionCore_upload_for_floodfill@Win32kRS@@YAJPEAVREGION_CORE@@PEBJKPEAJK@Z @ 0x140064708 (-RegionCore_upload_for_floodfill@Win32kRS@@YAJPEAVREGION_CORE@@PEBJKPEAJK@Z.c)
 *     ?RegionCore_upload@Win32kRS@@YAHPEAVREGION_CORE@@PEBJK@Z @ 0x140064ED8 (-RegionCore_upload@Win32kRS@@YAHPEAVREGION_CORE@@PEBJK@Z.c)
 *     ?RegionCore_set_from_path@Win32kRS@@YAHPEAVREGION_CORE@@AEAVEPATHOBJ@@KPEBU_RECTL@@@Z @ 0x140065C18 (-RegionCore_set_from_path@Win32kRS@@YAHPEAVREGION_CORE@@AEAVEPATHOBJ@@KPEBU_RECTL@@@Z.c)
 *     ?RegionCore_tighten@Win32kRS@@YAXPEAVREGION_CORE@@@Z @ 0x140066BC4 (-RegionCore_tighten@Win32kRS@@YAXPEAVREGION_CORE@@@Z.c)
 *     ?RegionCore_set_to_rectls@Win32kRS@@YAHPEAVREGION_CORE@@_KPEBU_RECTL@@@Z @ 0x1400689C4 (-RegionCore_set_to_rectls@Win32kRS@@YAHPEAVREGION_CORE@@_KPEBU_RECTL@@@Z.c)
 *     ?RegionCore_fill_path_with_outline@Win32kRS@@YAHPEBVREGION_CORE@@AEAVEPATHOBJ@@PEBVEXFORMOBJ@@@Z @ 0x140068D20 (-RegionCore_fill_path_with_outline@Win32kRS@@YAHPEBVREGION_CORE@@AEAVEPATHOBJ@@PEBVEXFORMOBJ@@@Z.c)
 *     ?RegionCore_iReduce@Win32kRS@@YAJPEAVREGION_CORE@@PEBV2@@Z @ 0x140068DB8 (-RegionCore_iReduce@Win32kRS@@YAJPEAVREGION_CORE@@PEBV2@@Z.c)
 *     ?GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x140068FB0 (-GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     ?GetWakeOnDeviceTypes@CInputGlobals@@QEBA?AW4InputType@@XZ @ 0x140069150 (-GetWakeOnDeviceTypes@CInputGlobals@@QEBA-AW4InputType@@XZ.c)
 *     ?GetKind@LastWokenThread@@YA?AW4LastWokenThreadKind@@XZ @ 0x14006A860 (-GetKind@LastWokenThread@@YA-AW4LastWokenThreadKind@@XZ.c)
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x140103E80 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     UpdateMouseConnectionState @ 0x14012BF88 (UpdateMouseConnectionState.c)
 *     ?EnvironmentChanged@CPTPProcessor@@SAXXZ @ 0x14012C1A0 (-EnvironmentChanged@CPTPProcessor@@SAXXZ.c)
 *     ?TraceEnvironment@CPTPProcessor@@SAXXZ @ 0x1401443F8 (-TraceEnvironment@CPTPProcessor@@SAXXZ.c)
 *     ?OwnsPointerId@CInputManager@@SA_NII@Z @ 0x140146B50 (-OwnsPointerId@CInputManager@@SA_NII@Z.c)
 *     ?GetLastInputType@CInputGlobals@@QEBA?AW4_LINP_SOURCE@@XZ @ 0x14014CF30 (-GetLastInputType@CInputGlobals@@QEBA-AW4_LINP_SOURCE@@XZ.c)
 *     _GetPrecisionTouchPadConfiguration @ 0x140166620 (_GetPrecisionTouchPadConfiguration.c)
 *     ?GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z @ 0x140187948 (-GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z.c)
 *     ?RegionCore_bExpand@Win32kRS@@YAHPEAVREGION_CORE@@K@Z @ 0x140199D48 (-RegionCore_bExpand@Win32kRS@@YAHPEAVREGION_CORE@@K@Z.c)
 *     ?RegionCore_get_pscnTail_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x14019B794 (-RegionCore_get_pscnTail_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ?CreateCoreMsgPort@CoreMessagingKPort@@QEAAJXZ @ 0x1401A7CA0 (-CreateCoreMsgPort@CoreMessagingKPort@@QEAAJXZ.c)
 *     ?SendMessageToEndpoint@CoreMessagingKPort@@QEBAJW4COREMESSAGINGK_ENDPOINT_ID@@PEBXI@Z @ 0x1401A80B4 (-SendMessageToEndpoint@CoreMessagingKPort@@QEBAJW4COREMESSAGINGK_ENDPOINT_ID@@PEBXI@Z.c)
 *     ?DeboostAllProcesses@ForegroundBoost@@YAXXZ @ 0x1401AC0F4 (-DeboostAllProcesses@ForegroundBoost@@YAXXZ.c)
 *     ?LogProcessInformation@ForegroundBoost@@YAXXZ @ 0x1401AC43C (-LogProcessInformation@ForegroundBoost@@YAXXZ.c)
 *     ?SyncBoostAllProcesses@ForegroundBoost@@YAXXZ @ 0x1401ACC64 (-SyncBoostAllProcesses@ForegroundBoost@@YAXXZ.c)
 *     EnablePTPDevices @ 0x1401B16B0 (EnablePTPDevices.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1401B1850 (_SetPrecisionTouchPadConfiguration.c)
 *     ??0RustAutoHotpatchLockSH@@QEAA@XZ @ 0x1401C11C8 (--0RustAutoHotpatchLockSH@@QEAA@XZ.c)
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x1401F3A34 (-Broadcast@InputConfig@@SAXXZ.c)
 *     ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x14020B624 (-OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z.c)
 *     ?GetInfo@SensorLocality@CBaseInput@@QEBA?AW4SensorLocalityInfo@@XZ @ 0x14020C54C (-GetInfo@SensorLocality@CBaseInput@@QEBA-AW4SensorLocalityInfo@@XZ.c)
 *     ?GetWorkAndWait@SensorDispatcherObject@CRIMBase@@QEBA?AVDoWorkAndWait@2@XZ @ 0x14020C678 (-GetWorkAndWait@SensorDispatcherObject@CRIMBase@@QEBA-AVDoWorkAndWait@2@XZ.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x14020C73C (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     ?GetDimmedState@CInputGlobals@@QEBA_NXZ @ 0x14020E7F0 (-GetDimmedState@CInputGlobals@@QEBA_NXZ.c)
 *     ?GetDisplayOnState@CInputGlobals@@QEBA_NXZ @ 0x14020E840 (-GetDisplayOnState@CInputGlobals@@QEBA_NXZ.c)
 *     ?WasLastInputInjected@CInputGlobals@@QEBA_NXZ @ 0x14020E970 (-WasLastInputInjected@CInputGlobals@@QEBA_NXZ.c)
 *     ?_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ @ 0x140210714 (-_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ.c)
 *     GetInputThreadKernelThread @ 0x1402127A4 (GetInputThreadKernelThread.c)
 * Callees:
 *     <none>
 */

void __fastcall W32AcquirePushLockSharedEx(struct W32_PUSH_LOCK *a1, unsigned int a2)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(a1, a2);
}
