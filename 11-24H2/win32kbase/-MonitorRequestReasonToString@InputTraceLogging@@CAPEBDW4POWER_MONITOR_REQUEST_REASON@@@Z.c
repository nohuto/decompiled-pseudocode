/*
 * XREFs of ?MonitorRequestReasonToString@InputTraceLogging@@CAPEBDW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401ADACC
 * Callers:
 *     ?PowerOnMonitor@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@W4_POWERON_LOC@@@Z @ 0x140090A68 (-PowerOnMonitor@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@W4_POWERON_LOC@@@Z.c)
 *     ?UpdateDisplayState@Power@InputTraceLogging@@SAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@_N2@Z @ 0x140091C2C (-UpdateDisplayState@Power@InputTraceLogging@@SAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUES.c)
 *     ?PowerOffMonitor@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x14019EE74 (-PowerOffMonitor@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?PowerDisplayBurst@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401AE098 (-PowerDisplayBurst@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?PowerOffSession@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401AE2BC (-PowerOffSession@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?PowerOnSession@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@W4_POWERON_LOC@@@Z @ 0x1401AE468 (-PowerOnSession@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@W4_POWERON_LOC@@@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::MonitorRequestReasonToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx

  if ( a1 <= 28 )
  {
    if ( a1 == 28 )
      return "AcDcDisplayBurstSuppressed";
    if ( a1 > 14 )
    {
      if ( a1 > 21 )
      {
        v17 = a1 - 22;
        if ( !v17 )
          return "NearProximity";
        v18 = v17 - 1;
        if ( !v18 )
          return "ThermalStandby";
        v19 = v18 - 1;
        if ( !v19 )
          return "ResumePdc";
        v20 = v19 - 1;
        if ( !v20 )
          return "ResumeS4";
        v21 = v20 - 1;
        if ( !v21 )
          return "Terminal";
        if ( v21 == 1 )
          return "PdcSignal";
      }
      else
      {
        if ( a1 == 21 )
          return "SystemIdle";
        v12 = a1 - 15;
        if ( !v12 )
          return "Lid";
        v13 = v12 - 1;
        if ( !v13 )
          return "BatteryCountChange";
        v14 = v13 - 1;
        if ( !v14 )
          return "GracePeriod";
        v15 = v14 - 1;
        if ( !v15 )
          return "PnP";
        v16 = v15 - 1;
        if ( !v16 )
          return "DP";
        if ( v16 == 1 )
          return "SxTransition";
      }
    }
    else
    {
      if ( a1 == 14 )
        return "SleepButton";
      if ( a1 > 7 )
      {
        v7 = a1 - 8;
        if ( !v7 )
          return "SetThreadExecutionState";
        v8 = v7 - 1;
        if ( !v8 )
          return "FullWake";
        v9 = v8 - 1;
        if ( !v9 )
          return "SessionUnlock";
        v10 = v9 - 1;
        if ( !v10 )
          return "ScreenOffRequest";
        v11 = v10 - 1;
        if ( !v11 )
          return "IdleTimeout";
        if ( v11 == 1 )
          return "PolicyChange";
      }
      else
      {
        if ( a1 == 7 )
          return "PoSetSystemState";
        if ( !a1 )
          return "Unknown";
        v1 = a1 - 1;
        if ( !v1 )
          return "PowerButton";
        v2 = v1 - 1;
        if ( !v2 )
          return "RemoteConnection";
        v3 = v2 - 1;
        if ( !v3 )
          return "ScMonitorpower";
        v4 = v3 - 1;
        if ( !v4 )
          return "UserInput";
        v5 = v4 - 1;
        if ( !v5 )
          return "AcDcDisplayBurst";
        if ( v5 == 1 )
          return "UserDisplayBurst";
      }
    }
    return "UNKNOWN";
  }
  if ( a1 <= 43 )
  {
    if ( a1 == 43 )
      return "PdcSignalHolographicShell";
    if ( a1 > 36 )
    {
      v28 = a1 - 37;
      if ( !v28 )
        return "UserInputPoUserPresent";
      v29 = v28 - 1;
      if ( !v29 )
        return "UserInputSessionSwitch";
      v30 = v29 - 1;
      if ( !v30 )
        return "UserInputInitialization";
      v31 = v30 - 1;
      if ( !v31 )
        return "PdcSignalWindowsMobilePwrNotif";
      v32 = v31 - 1;
      if ( !v32 )
        return "PdcSignalWindowsMobileShell";
      if ( v32 == 1 )
        return "PdcSignalHeyCortana";
    }
    else
    {
      if ( a1 == 36 )
        return "UserInputHid";
      v22 = a1 - 29;
      if ( !v22 )
        return "SystemStateEntered";
      v23 = v22 - 1;
      if ( !v23 )
        return "Winrt";
      v24 = v23 - 1;
      if ( !v24 )
        return "UserInputKeyboard";
      v25 = v24 - 1;
      if ( !v25 )
        return "UserInputMouse";
      v26 = v25 - 1;
      if ( !v26 )
        return "UserInputTouchpad";
      v27 = v26 - 1;
      if ( !v27 )
        return "UserInputPen";
      if ( v27 == 1 )
        return "UserInputAccelerometer";
    }
    return "UNKNOWN";
  }
  if ( a1 <= 50 )
  {
    if ( a1 == 50 )
      return "ResumeModernStandby";
    v33 = a1 - 44;
    if ( !v33 )
      return "PdcSignalFingerprint";
    v34 = v33 - 1;
    if ( !v34 )
      return "DirectedDrips";
    v35 = v34 - 1;
    if ( !v35 )
      return "Dim";
    v36 = v35 - 1;
    if ( !v36 )
      return "BuiltinPanel";
    v37 = v36 - 1;
    if ( !v37 )
      return "DisplayRequiredUnDim";
    if ( v37 == 1 )
      return "BatteryCountChangeSuppressed";
    return "UNKNOWN";
  }
  v38 = a1 - 51;
  if ( !v38 )
    return "TerminalInit";
  v39 = v38 - 1;
  if ( !v39 )
    return "PdcSignalSensorsHumanPresence";
  v40 = v39 - 1;
  if ( !v40 )
    return "BatteryPreCritical";
  v41 = v40 - 1;
  if ( !v41 )
    return "UserInputTouch";
  v42 = v41 - 1;
  if ( !v42 )
    return "AusterityBatteryDrain";
  if ( v42 != 1 )
    return "UNKNOWN";
  return "DozeRestrictedStandby";
}
