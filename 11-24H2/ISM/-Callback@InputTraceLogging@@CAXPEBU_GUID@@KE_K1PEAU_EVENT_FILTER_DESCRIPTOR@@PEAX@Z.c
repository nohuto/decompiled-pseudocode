/*
 * XREFs of ?Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x180113660
 * Callers:
 *     <none>
 * Callees:
 *     ?CalculateDevicePostureMode@DevicePostureHelpers@@YA?AW4DevicePostureMode@Input@Internal@UI@Windows@@W4DeviceConvertibility@1@@Z @ 0x180113540 (-CalculateDevicePostureMode@DevicePostureHelpers@@YA-AW4DevicePostureMode@Input@Internal@UI@Wind.c)
 *     ?QueryDeviceConvertibility@DevicePostureHelpers@@YA?AW4DeviceConvertibility@1@W4QueryOptions@1@@Z @ 0x180113F70 (-QueryDeviceConvertibility@DevicePostureHelpers@@YA-AW4DeviceConvertibility@1@W4QueryOptions@1@@.c)
 *     ?TraceCurrentState@VirtualTouchpadControllerProxy@@SAXXZ @ 0x180136CF4 (-TraceCurrentState@VirtualTouchpadControllerProxy@@SAXXZ.c)
 *     ?TraceCurrentThresholds@ShellGesturesRecognizer@@SAXXZ @ 0x18015AAC0 (-TraceCurrentThresholds@ShellGesturesRecognizer@@SAXXZ.c)
 */

void __fastcall InputTraceLogging::Callback(const struct _GUID *a1, int a2)
{
  int DeviceConvertibility; // eax

  if ( InputTraceLogging::s_registered && (unsigned int)(a2 - 1) <= 1 )
  {
    VirtualTouchpadControllerProxy::TraceCurrentState();
    ShellGesturesRecognizer::TraceCurrentThresholds();
    DeviceConvertibility = DevicePostureHelpers::QueryDeviceConvertibility();
    DevicePostureHelpers::CalculateDevicePostureMode(DeviceConvertibility);
  }
}
