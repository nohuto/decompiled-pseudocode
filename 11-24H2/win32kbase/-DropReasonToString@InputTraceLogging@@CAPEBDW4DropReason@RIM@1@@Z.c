/*
 * XREFs of ?DropReasonToString@InputTraceLogging@@CAPEBDW4DropReason@RIM@1@@Z @ 0x1400D7714
 * Callers:
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1400D75DC (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::DropReasonToString(int a1)
{
  int v1; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx

  if ( a1 <= 6 )
  {
    if ( a1 == 6 )
      return "DevicePaused";
    if ( !a1 )
      return "NoMonitor";
    v1 = a1 - 1;
    if ( !v1 )
      return "TouchpadDisabled";
    v3 = v1 - 1;
    if ( !v3 )
      return "TouchDisabled";
    v4 = v3 - 1;
    if ( !v4 )
      return "InvalidInputConfig";
    v5 = v4 - 1;
    if ( !v5 )
      return "InputFiltered";
    if ( v5 == 1 )
      return "InputSuppressed";
    return "UNKNOWN";
  }
  v6 = a1 - 7;
  if ( !v6 )
    return "FifoOverflow";
  v7 = v6 - 1;
  if ( !v7 )
    return "FifoCleared";
  v8 = v7 - 1;
  if ( !v8 )
    return "UnknownDeviceType";
  v9 = v8 - 1;
  if ( !v9 )
    return "DelayedPnp";
  v10 = v9 - 1;
  if ( v10 )
  {
    if ( v10 == 1 )
      return "FailedStackAttach";
    return "UNKNOWN";
  }
  return "SuppressedByObserver";
}
