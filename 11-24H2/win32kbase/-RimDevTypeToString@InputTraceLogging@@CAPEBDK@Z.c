/*
 * XREFs of ?RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1400D10C0
 * Callers:
 *     ?ProcessDeviceBuffer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1400D0E18 (-ProcessDeviceBuffer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?StartDeviceRead@RIM@InputTraceLogging@@SAXPEBURIMDEV@@J@Z @ 0x1400D0F60 (-StartDeviceRead@RIM@InputTraceLogging@@SAXPEBURIMDEV@@J@Z.c)
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x14017A974 (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::RimDevTypeToString(int a1)
{
  int v2; // ecx
  int v3; // ecx

  if ( !a1 )
    return "Mouse";
  v2 = a1 - 1;
  if ( !v2 )
    return "Keyboard";
  v3 = v2 - 1;
  if ( !v3 )
    return "Hid";
  if ( v3 == 1 )
    return "Config";
  return "UNKNOWN";
}
