/*
 * XREFs of RtlInitUnicodeStringOrId @ 0x1C00DFB00
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0x1C00DE3EC (-xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReaso.c)
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C00DEC0C (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C00E10B4 (xxxUpdateSystemIconsFromRegistry.c)
 *     xxxLoadSysMenu @ 0x1C00E3AD4 (xxxLoadSysMenu.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01AD1B4 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C0228D98 (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlInitUnicodeStringOrId(struct _UNICODE_STRING *a1, WCHAR *a2)
{
  if ( ((unsigned __int64)a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    RtlInitUnicodeString(a1, a2);
  }
  else
  {
    a1->Buffer = a2;
    *(_DWORD *)&a1->Length = 0;
  }
}
