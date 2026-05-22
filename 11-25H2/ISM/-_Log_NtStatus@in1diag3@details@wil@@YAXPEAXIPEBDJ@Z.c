/*
 * XREFs of ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D0F78
 * Callers:
 *     ?OnRIMAsyncPnpWorkNotificationSemaphoreStatic@RIMDeviceCollection@@CAJPEAXK0@Z @ 0x180070720 (-OnRIMAsyncPnpWorkNotificationSemaphoreStatic@RIMDeviceCollection@@CAJPEAXK0@Z.c)
 *     ?OnRIMPnpEventStatic@RIMDeviceCollection@@CAJPEAXK0@Z @ 0x18007A4D0 (-OnRIMPnpEventStatic@RIMDeviceCollection@@CAJPEAXK0@Z.c)
 *     ?OnRIMTimerEventStatic@RIMDeviceCollection@@CAJPEAXK0@Z @ 0x1800D0E70 (-OnRIMTimerEventStatic@RIMDeviceCollection@@CAJPEAXK0@Z.c)
 *     ?PopulateDeviceInfo@DockableDeviceCollection@@AEAAJPEAVHIDDevice@@PEAUDockableDeviceInfo@@@Z @ 0x1800DB964 (-PopulateDeviceInfo@DockableDeviceCollection@@AEAAJPEAVHIDDevice@@PEAUDockableDeviceInfo@@@Z.c)
 *     ?Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z @ 0x1800DE14C (-Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z.c)
 *     ?Initialize@CursorManager@@IEAAJXZ @ 0x18015E628 (-Initialize@CursorManager@@IEAAJXZ.c)
 *     ?ParseTransducerPropertiesReport@PenInterface@@AEAAJW4_HIDP_REPORT_TYPE@@PEADKPEAUTransducerPropertiesReport@1@@Z @ 0x1801888EC (-ParseTransducerPropertiesReport@PenInterface@@AEAAJW4_HIDP_REPORT_TYPE@@PEADKPEAUTransducerProp.c)
 * Callees:
 *     ??$ReportFailure_NtStatus@$01@details@wil@@YAJPEAXIPEBD110J@Z @ 0x1800D0BC8 (--$ReportFailure_NtStatus@$01@details@wil@@YAJPEAXIPEBD110J@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_NtStatus(wil::details::in1diag3 *this, void *a2, int a3, const char *a4)
{
  int v4; // [rsp+20h] [rbp-28h]
  wil::details *v5; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v5) = (_DWORD)a4;
  wil::details::ReportFailure_NtStatus<2>((int)this, (int)a2, a3, (__int64)a4, v4, retaddr, v5);
}
