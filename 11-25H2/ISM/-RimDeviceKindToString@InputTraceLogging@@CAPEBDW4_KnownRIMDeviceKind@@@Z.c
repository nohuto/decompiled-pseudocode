/*
 * XREFs of ?RimDeviceKindToString@InputTraceLogging@@CAPEBDW4_KnownRIMDeviceKind@@@Z @ 0x1800F04F8
 * Callers:
 *     ?ReceivePnpNotification@ISM@InputTraceLogging@@SAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x180050890 (-ReceivePnpNotification@ISM@InputTraceLogging@@SAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::RimDeviceKindToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  if ( !a1 )
    return "HID";
  v1 = a1 - 1;
  if ( !v1 )
    return "Mouse";
  v2 = v1 - 1;
  if ( !v2 )
    return "Keyboard";
  v3 = v2 - 1;
  if ( !v3 )
    return "Touch";
  v4 = v3 - 1;
  if ( !v4 )
    return "PTP";
  if ( v4 == 1 )
    return "Pen";
  return "UNKNOWN";
}
