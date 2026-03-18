/*
 * XREFs of ?CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z @ 0x1C01A7F64
 * Callers:
 *     ?SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z @ 0x1C002D6DC (-SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z.c)
 *     LockQCursor @ 0x1C003A1D0 (LockQCursor.c)
 * Callees:
 *     ?CurIndexName@InputTraceLogging@@CAPEBDI@Z @ 0x1C01A7F18 (-CurIndexName@InputTraceLogging@@CAPEBDI@Z.c)
 */

const char *__fastcall InputTraceLogging::CursorToString(struct tagCURSOR *a1)
{
  unsigned int v2; // ecx
  __int64 v4; // rdx
  struct tagCURSOR **i; // rax

  v2 = 0;
  if ( !a1 )
    return "Empty";
  v4 = 0LL;
  for ( i = (struct tagCURSOR **)&gasyscur[1]; *i != a1; i += 69 )
  {
    ++v2;
    if ( ++v4 >= 19 )
      return "Custom";
  }
  return InputTraceLogging::CurIndexName(v2);
}
