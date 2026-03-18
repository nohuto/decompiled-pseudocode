/*
 * XREFs of ?xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z @ 0x1C013C8D8
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     xxxNotifyMonitorChanged @ 0x1C00A4DDC (xxxNotifyMonitorChanged.c)
 *     xxxInheritWindowMonitor @ 0x1C00B04C0 (xxxInheritWindowMonitor.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C0122A20 (_IsTopLevelWindow.c)
 *     xxxSendMessage @ 0x1C0127888 (xxxSendMessage.c)
 */

void __fastcall xxxConsiderPreferredDpiChange(struct tagWND *a1)
{
  __int64 v2; // r8
  __int16 v3; // dx

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 3 && IsTopLevelWindow((__int64)a1) )
  {
    v3 = *(_WORD *)(*(_QWORD *)(ValidateHmonitorNoRip(*(_QWORD *)(v2 + 256)) + 40) + 84LL);
    if ( ((*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) >> 8) & 0x1FF) != v3 && *((_WORD *)a1 + 152) != v3 )
    {
      *((_WORD *)a1 + 152) = v3;
      xxxSendMessage((ULONG_PTR)a1);
    }
  }
}
