/*
 * XREFs of ?DevicePostureModeToString@InputTraceLogging@@CAPEBDW4DevicePostureMode@Input@Internal@UI@Windows@@@Z @ 0x1801117F8
 * Callers:
 *     ?EvaluatePosture@Postures@InputTraceLogging@@SAXW4DevicePostureMode@Input@Internal@UI@Windows@@_NK111@Z @ 0x18011199C (-EvaluatePosture@Postures@InputTraceLogging@@SAXW4DevicePostureMode@Input@Internal@UI@Windows@@_.c)
 *     ?EvaluatePosture@Postures@InputTraceLogging@@SAX_NKK0W4DevicePostureMode@Input@Internal@UI@Windows@@@Z @ 0x180111A70 (-EvaluatePosture@Postures@InputTraceLogging@@SAX_NKK0W4DevicePostureMode@Input@Internal@UI@Windo.c)
 *     ?EvaluatePostureRemote@Postures@InputTraceLogging@@SAXW4DevicePostureMode@Input@Internal@UI@Windows@@_N1@Z @ 0x180111B30 (-EvaluatePostureRemote@Postures@InputTraceLogging@@SAXW4DevicePostureMode@Input@Internal@UI@Wind.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::DevicePostureModeToString(int a1)
{
  if ( !a1 )
    return "Desktop";
  if ( a1 == 1 )
    return "Tablet";
  return "UNKNOWN";
}
