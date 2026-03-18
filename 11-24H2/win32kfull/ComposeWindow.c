/*
 * XREFs of ComposeWindow @ 0x1400316A8
 * Callers:
 *     ?DecomposeWindowIfNeeded@@YAJPEAUtagWND@@@Z @ 0x140031868 (-DecomposeWindowIfNeeded@@YAJPEAUtagWND@@@Z.c)
 *     UpdateWindowMonitor @ 0x140045CB0 (UpdateWindowMonitor.c)
 *     ?ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z @ 0x140074820 (-ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z.c)
 *     zzzDecomposeDesktop @ 0x140131E78 (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x140168F78 (zzzComposeDesktop.c)
 *     xxxSwitchDesktop @ 0x1401F69E4 (xxxSwitchDesktop.c)
 * Callees:
 *     UpdateWindowSpriteMonitor @ 0x140025828 (UpdateWindowSpriteMonitor.c)
 *     UnsetLayeredWindow @ 0x14002FF88 (UnsetLayeredWindow.c)
 *     DwmAsyncChildStyleChange @ 0x140032044 (DwmAsyncChildStyleChange.c)
 *     xxxInternalInvalidate @ 0x1400428C0 (xxxInternalInvalidate.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     IsDesktopWindow @ 0x140075580 (IsDesktopWindow.c)
 *     xxxSetLayeredWindow @ 0x140090DC8 (xxxSetLayeredWindow.c)
 *     _SetLayeredWindowAttributes @ 0x14015DCB4 (_SetLayeredWindowAttributes.c)
 */

__int64 __fastcall ComposeWindow(struct tagWND *a1, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  char v7; // dl
  int v8; // esi
  void *v10; // rax
  __int64 v11; // rax
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( (a2 & 1) != 0 )
  {
    if ( (unsigned int)IsDesktopWindow(a1) && *((_QWORD *)a1 + 3) != *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19200) )
      return 0;
    v6 = *((_QWORD *)a1 + 5);
    v7 = *(_BYTE *)(v6 + 26) & 8;
    if ( (((a2 & 8) == 0) & (unsigned __int8)~(*(_BYTE *)(v6 + 31) >> 4)) != 0 )
    {
      return v7 == 0 ? 0x3E0001u : 0;
    }
    else
    {
      if ( v7 )
      {
        v11 = ValidateHmonitorNoRip(*(_QWORD *)(v6 + 256));
        UpdateWindowSpriteMonitor((__int64 *)a1, v11);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 0x20) == 0 )
        {
          AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v12);
          xxxInternalInvalidate(a1);
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v12);
        }
        return 0;
      }
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v12);
      v8 = xxxSetLayeredWindow(a1);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v12);
      if ( v8 >= 0 )
      {
        v8 = SetLayeredWindowAttributes(a1);
        if ( v8 < 0 )
        {
          UnsetLayeredWindow(a1, 3);
        }
        else
        {
          *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) |= 2u;
          v10 = (void *)ReferenceDwmApiPort();
          DwmAsyncChildStyleChange(v10);
        }
      }
    }
  }
  else
  {
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 2) != 0 )
      v8 = UnsetLayeredWindow(a1, (a2 & 0x10 | 8u) >> 3);
    else
      v8 = 0;
    *((_DWORD *)a1 + 95) &= ~0x8000u;
  }
  return (unsigned int)v8;
}
