/*
 * XREFs of ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x14002C0A4
 * Callers:
 *     ?HidePointer@Api@Cursor@InputTraceLogging@@SAX_N00@Z @ 0x14002BD28 (-HidePointer@Api@Cursor@InputTraceLogging@@SAX_N00@Z.c)
 *     ?SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z @ 0x14002BF48 (-SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z.c)
 *     ?CopyForGetRawInputBuffer@RawInput@InputTraceLogging@@SAXPEAUtagHIDDATA@@@Z @ 0x14002C180 (-CopyForGetRawInputBuffer@RawInput@InputTraceLogging@@SAXPEAUtagHIDDATA@@@Z.c)
 *     ?RawInputListener@RawInput@InputTraceLogging@@SAXPEBUtagPROCESS_HID_TABLE@@@Z @ 0x140130094 (-RawInputListener@RawInput@InputTraceLogging@@SAXPEBUtagPROCESS_HID_TABLE@@@Z.c)
 *     ?SetSystemCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@KPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@PEAGI@Z @ 0x1401DBDF0 (-SetSystemCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@KPEAU_UNICODE_STRING@@W4InputTracin.c)
 *     ?ForceSetCurrentCursorShape@Api@Cursor@InputTraceLogging@@SAX_N@Z @ 0x14021EA20 (-ForceSetCurrentCursorShape@Api@Cursor@InputTraceLogging@@SAX_N@Z.c)
 *     ?ShellWindowPosApplied@Win32k@InputTraceLogging@@SAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z @ 0x14026AC08 (-ShellWindowPosApplied@Win32k@InputTraceLogging@@SAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLI.c)
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x14028B2FC (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 *     ?RequestCursorSynchronizationMode@Api@Cursor@InputTraceLogging@@SAX_N@Z @ 0x1402DA7B0 (-RequestCursorSynchronizationMode@Api@Cursor@InputTraceLogging@@SAX_N@Z.c)
 *     ?SetCursorSynchronizationMode@Api@Cursor@InputTraceLogging@@SAX_N@Z @ 0x1402DAE48 (-SetCursorSynchronizationMode@Api@Cursor@InputTraceLogging@@SAX_N@Z.c)
 *     ?UserGetDwmCursorShape@Api@Cursor@InputTraceLogging@@SAXW4UserGetDwmCursorShapeResult@123@KK@Z @ 0x1402DB038 (-UserGetDwmCursorShape@Api@Cursor@InputTraceLogging@@SAXW4UserGetDwmCursorShapeResult@123@KK@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall InputTraceLogging::Enabled(int a1, unsigned __int8 a2)
{
  unsigned int v2; // eax
  char v3; // dl

  v2 = a2;
  v3 = 0;
  if ( v2 < dword_140398B80
    && (!a1
     || (a1 & (unsigned __int64)qword_140398B90) != 0 && (a1 & (unsigned __int64)qword_140398B98) == qword_140398B98) )
  {
    return 1;
  }
  return v3;
}
