/*
 * XREFs of LockQCursor @ 0x140271870
 * Callers:
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1400759F4 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x140237494 (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     xxxSetModernAppWindow @ 0x14024CD58 (xxxSetModernAppWindow.c)
 * Callees:
 *     ?SetQueueCursor@Cursor@InputTraceLogging@@SAXPEAUtagQ@@PEAUtagCURSOR@@@Z @ 0x1401B2498 (-SetQueueCursor@Cursor@InputTraceLogging@@SAXPEAUtagQ@@PEAUtagCURSOR@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall LockQCursor(struct tagQ *a1, struct tagCURSOR *a2)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (*((_DWORD *)a1 + 109) & 0x200) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 614);
  InputTraceLogging::Cursor::SetQueueCursor(a1, a2);
  v5[1] = a2;
  v5[0] = (char *)a1 + 424;
  return HMAssignmentLock(v5, 1LL);
}
