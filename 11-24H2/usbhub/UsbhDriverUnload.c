/*
 * XREFs of UsbhDriverUnload @ 0x14004F680
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 *     USBHUB_FreeBugCheck @ 0x14004E83C (USBHUB_FreeBugCheck.c)
 *     UsbhModuleDispatch @ 0x14005084C (UsbhModuleDispatch.c)
 *     WppCleanupKm @ 0x1400770D4 (WppCleanupKm.c)
 *     wil_UninitializeFeatureStaging @ 0x140077638 (wil_UninitializeFeatureStaging.c)
 */

__int64 __fastcall UsbhDriverUnload(__int64 a1, int a2)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x13u,
      (__int64)&WPP_88c51487de8b36c95d93828ad72ed338_Traceguids);
  UsbhModuleDispatch(0, a2, 0, 4, 0LL, 0LL);
  USBHUB_FreeBugCheck((struct _KBUGCHECK_REASON_CALLBACK_RECORD *)USBHUB_BugCheckPortArray);
  USBHUB_FreeBugCheck((struct _KBUGCHECK_REASON_CALLBACK_RECORD *)USBHUB_BugCheckHubExt);
  WppCleanupKm(a1);
  return wil_UninitializeFeatureStaging();
}
