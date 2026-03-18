/*
 * XREFs of ?MitEndpointToString@InputTraceLogging@@CAPEBDW4_MIT_ENDPOINT@@@Z @ 0x14020B4BC
 * Callers:
 *     ?SendCoreMessagingK@Win32k@InputTraceLogging@@SAXW4_MIT_ENDPOINT@@@Z @ 0x14004902C (-SendCoreMessagingK@Win32k@InputTraceLogging@@SAXW4_MIT_ENDPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::MitEndpointToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx
  int v6; // ecx
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

  if ( a1 <= 11 )
  {
    if ( a1 == 11 )
      return "PointerInputObserver";
    if ( a1 > 5 )
    {
      v5 = a1 - 6;
      if ( !v5 )
        return "InputConfig";
      v6 = v5 - 1;
      if ( !v6 )
        return "InputInteropMT";
      v7 = v6 - 1;
      if ( !v7 )
        return "KeyboardInput";
      v8 = v7 - 1;
      if ( !v8 )
        return "InvalidateInput";
      if ( v8 == 1 )
        return "ForegroundManager";
    }
    else
    {
      if ( a1 == 5 )
        return "PointerInputDown";
      if ( !a1 )
        return "CursorManagement";
      v1 = a1 - 1;
      if ( !v1 )
        return "InputDelivery";
      v2 = v1 - 1;
      if ( !v2 )
        return "InputFocus";
      v3 = v2 - 1;
      if ( !v3 )
        return "KeyboardInputAttempted";
      if ( v3 == 1 )
        return "InputInteropISM";
    }
    return "UNKNOWN";
  }
  if ( a1 <= 17 )
  {
    if ( a1 == 17 )
      return "AccessibilityTimerNotification";
    v9 = a1 - 12;
    if ( !v9 )
      return "PnpDeviceNotification";
    v10 = v9 - 1;
    if ( !v10 )
      return "KeyboardOverriderInputMessage";
    v11 = v10 - 1;
    if ( !v11 )
      return "HotkeyRegistration";
    v12 = v11 - 1;
    if ( !v12 )
      return "MouseInput";
    if ( v12 == 1 )
      return "PenInput";
    return "UNKNOWN";
  }
  v13 = a1 - 18;
  if ( !v13 )
    return "VPTPInterop";
  v14 = v13 - 1;
  if ( !v14 )
    return "InputStreamEnded";
  v15 = v14 - 1;
  if ( !v15 )
    return "InputDesktopChanged";
  v16 = v15 - 1;
  if ( !v16 )
    return "PTPInterop";
  if ( v16 != 1 )
    return "UNKNOWN";
  return "HapticNotification";
}
