/*
 * XREFs of ?OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z @ 0x1400953B0
 * Callers:
 *     ?KeyEvent@Keyboard@InputTraceLogging@@SAXAEBUtagINPUT_MESSAGE_SOURCE@@HPEAXKHHPEAUHKL__@@E@Z @ 0x140093810 (-KeyEvent@Keyboard@InputTraceLogging@@SAXAEBUtagINPUT_MESSAGE_SOURCE@@HPEAXKHHPEAUHKL__@@E@Z.c)
 *     ?ProcessEvent@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@GGAEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400952C8 (-ProcessEvent@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@GGAEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::OriginIdToString(int a1)
{
  int v1; // ecx
  int v3; // ecx

  if ( !a1 )
    return "Unavailable";
  v1 = a1 - 1;
  if ( !v1 )
    return "Hardware";
  v3 = v1 - 1;
  if ( !v3 )
    return "Injected";
  if ( v3 == 2 )
    return "System";
  return "UNKNOWN";
}
