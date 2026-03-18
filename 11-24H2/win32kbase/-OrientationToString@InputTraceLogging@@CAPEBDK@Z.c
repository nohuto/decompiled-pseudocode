/*
 * XREFs of ?OrientationToString@InputTraceLogging@@CAPEBDK@Z @ 0x1401F405C
 * Callers:
 *     ?InputSpaceRegion@InputConfig@InputTraceLogging@@SAXPEBUINPUT_SPACE_REGION@@@Z @ 0x14012C3C0 (-InputSpaceRegion@InputConfig@InputTraceLogging@@SAXPEBUINPUT_SPACE_REGION@@@Z.c)
 *     ?DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x14012C644 (-DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     ?SetShellContentOrientation@Mouse@InputTraceLogging@@SAXW4DISPLAYCONFIG_ROTATION@@@Z @ 0x14019EFC4 (-SetShellContentOrientation@Mouse@InputTraceLogging@@SAXW4DISPLAYCONFIG_ROTATION@@@Z.c)
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
