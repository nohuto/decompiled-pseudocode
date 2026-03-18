/*
 * XREFs of ?CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z @ 0x1401B2518
 * Callers:
 *     ?SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z @ 0x140131A04 (-SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z.c)
 *     ?SetQueueCursor@Cursor@InputTraceLogging@@SAXPEAUtagQ@@PEAUtagCURSOR@@@Z @ 0x1401B2498 (-SetQueueCursor@Cursor@InputTraceLogging@@SAXPEAUtagQ@@PEAUtagCURSOR@@@Z.c)
 * Callees:
 *     ?CurIndexName@InputTraceLogging@@CAPEBDI@Z @ 0x140271104 (-CurIndexName@InputTraceLogging@@CAPEBDI@Z.c)
 */

const char *__fastcall InputTraceLogging::CursorToString(struct tagCURSOR *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 i; // rdi

  v2 = 0;
  if ( !a1 )
    return "Empty";
  for ( i = 0LL; ; i += 552LL )
  {
    if ( i >= 10488 )
      return "Custom";
    if ( *(struct tagCURSOR **)(W32GetUserSessionState(a1, a2) + i + 21936) == a1 )
      break;
    ++v2;
  }
  return InputTraceLogging::CurIndexName(v2);
}
