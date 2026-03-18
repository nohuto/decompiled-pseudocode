/*
 * XREFs of ?ShouldSaveAndRestorePreviousRecalcInfos@DesktopRecalcSettings@@YA_NXZ @ 0x1C005B534
 * Callers:
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x1C005B6E8 (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z.c)
 *     ?ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x1C005BD10 (-ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C002F37C (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     Feature_Erpsrbspi__private_ReportDeviceUsage @ 0x1C013CF88 (Feature_Erpsrbspi__private_ReportDeviceUsage.c)
 */

bool __fastcall DesktopRecalcSettings::ShouldSaveAndRestorePreviousRecalcInfos(DesktopRecalcSettings *this)
{
  int v1; // r10d
  bool v2; // bl
  char v3; // r8
  char v4; // dl
  const char *v5; // r9

  Feature_Erpsrbspi__private_ReportDeviceUsage(this);
  v1 = *(_DWORD *)UPDWORDPointer(8238LL);
  v2 = v1 == 0;
  v3 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (v4 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v4 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v3 = 0;
  if ( v4 || v3 )
  {
    v5 = "Enabled";
    if ( v1 )
      v5 = "Disabled";
    WPP_RECORDER_AND_TRACE_SF_s(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v4,
      v3,
      (__int64)gFullLog,
      5u,
      7u,
      0x55u,
      (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
      v5);
  }
  return v2;
}
