/*
 * XREFs of ?OrientationToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01E4054
 * Callers:
 *     ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x1C006317C (-TraceCurrentConfig@InputConfig@@SAXXZ.c)
 *     ?DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C00C5014 (-DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     SetContentOrientation @ 0x1C01E8D78 (SetContentOrientation.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::OrientationToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return "Identity";
  v2 = v1 - 1;
  if ( !v2 )
    return "Rotate90";
  v3 = v2 - 1;
  if ( !v3 )
    return "Rotate180";
  if ( v3 == 1 )
    return "Rotate270";
  return "UNKNOWN";
}
