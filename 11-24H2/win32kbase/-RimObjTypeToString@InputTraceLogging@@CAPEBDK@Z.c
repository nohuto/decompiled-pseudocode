/*
 * XREFs of ?RimObjTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x14013C684
 * Callers:
 *     ?RawInputManagerObjectUsed@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@@Z @ 0x14013C4DC (-RawInputManagerObjectUsed@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::RimObjTypeToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return "Mouse";
  v2 = v1 - 1;
  if ( !v2 )
    return "Keyboard";
  v3 = v2 - 2;
  if ( !v3 )
    return "Pen";
  v4 = v3 - 4;
  if ( !v4 )
    return "Touchpad";
  v5 = v4 - 8;
  if ( !v5 )
    return "Touch";
  v6 = v5 - 16;
  if ( !v6 )
    return "GenericHid";
  if ( v6 == 28 )
    return "AllHid";
  return "UNKNOWN";
}
