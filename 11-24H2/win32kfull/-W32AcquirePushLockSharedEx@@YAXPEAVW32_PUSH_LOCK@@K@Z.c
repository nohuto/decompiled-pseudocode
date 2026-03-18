/*
 * XREFs of ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400A3FC0
 * Callers:
 *     ?RegionCore_get_pscnTail_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x1400A360C (-RegionCore_get_pscnTail_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     NtUserGetRawInputDeviceList @ 0x1400A3680 (NtUserGetRawInputDeviceList.c)
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1400A38B4 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 *     ?RegionCore_subtract@Win32kRS@@YAHPEAVREGION_CORE@@PEBU_RECTL@@1_K@Z @ 0x1400A3930 (-RegionCore_subtract@Win32kRS@@YAHPEAVREGION_CORE@@PEBU_RECTL@@1_K@Z.c)
 *     ??0?$PushLockSharedObj@$0A@$0A@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400A39F4 (--0-$PushLockSharedObj@$0A@$0A@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400A3BBC (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400A3EA8 (--$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?RegionCore_bContain_rcl@Win32kRS@@YAHPEBVREGION_CORE@@AEBU_RECTL@@@Z @ 0x1400A42B8 (-RegionCore_bContain_rcl@Win32kRS@@YAHPEBVREGION_CORE@@AEBU_RECTL@@@Z.c)
 *     ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x14013104C (-InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH.c)
 *     NtUserGetPointerDevices @ 0x14018E3A0 (NtUserGetPointerDevices.c)
 *     InkProcessorIsInkDevice @ 0x1401E88E0 (InkProcessorIsInkDevice.c)
 *     ?RegionCore_get_sizeScanAlloc@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x1401FEEEC (-RegionCore_get_sizeScanAlloc@Win32kRS@@YAKPEBVREGION_CORE@@@Z.c)
 *     CheckPointerDeviceConfiguration @ 0x14020EF48 (CheckPointerDeviceConfiguration.c)
 *     _GetTouchValidationStatus @ 0x140279C74 (_GetTouchValidationStatus.c)
 *     ?VolumeUpDownComboSupported@@YA_NXZ @ 0x140288AB8 (-VolumeUpDownComboSupported@@YA_NXZ.c)
 *     UserGetHipDeviceInfo @ 0x14028B8F0 (UserGetHipDeviceInfo.c)
 *     ?GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPECUtagINPUT_TRANSFORM@@D@Z @ 0x14029046C (-GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPECUtagINPUT_TRANSFORM@@D@Z.c)
 *     ?RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z @ 0x14031F46C (-RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall W32AcquirePushLockSharedEx(struct W32_PUSH_LOCK *a1, unsigned int a2)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(a1, a2);
}
