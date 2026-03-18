/*
 * XREFs of ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1C00A4AD4
 * Callers:
 *     NtUserEnableChildWindowDpiMessage @ 0x1C00A4A10 (NtUserEnableChildWindowDpiMessage.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F4E00 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C0218340 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C0231EEC (xxxTrackPopupMenuEx.c)
 * Callees:
 *     UpdateMonitorForWindowAndChildren @ 0x1C00A4B9C (UpdateMonitorForWindowAndChildren.c)
 *     xxxNotifyMonitorChanged @ 0x1C00A4DDC (xxxNotifyMonitorChanged.c)
 *     _IsTopLevelWindow @ 0x1C0122A20 (_IsTopLevelWindow.c)
 */

char __fastcall xxxEnableChildWindowDpiMessageX(struct tagWND *a1)
{
  char v1; // bl
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // r9d
  __int64 v6; // rdx

  v1 = 0;
  if ( !a1 || (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 2 || !(unsigned int)IsTopLevelWindow(a1) )
    return 0;
  if ( v5 )
  {
    *(_DWORD *)(v3 + 320) |= 0x180000u;
    v6 = ValidateHmonitorNoRip(*(_QWORD *)(v4 + 256));
  }
  else
  {
    *(_DWORD *)(v3 + 320) &= 0xFFE7FFFF;
    v6 = *(_QWORD *)(gpDispInfo + 96LL);
  }
  if ( v6 )
  {
    if ( (unsigned int)UpdateMonitorForWindowAndChildren(a1) )
    {
      xxxNotifyMonitorChanged(a1);
      return 1;
    }
  }
  return v1;
}
