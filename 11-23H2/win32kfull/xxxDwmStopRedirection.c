/*
 * XREFs of xxxDwmStopRedirection @ 0x1C0020430
 * Callers:
 *     NtUserDwmKernelShutdown @ 0x1C01CE960 (NtUserDwmKernelShutdown.c)
 * Callees:
 *     DwmAsyncDesktopFree @ 0x1C0020658 (DwmAsyncDesktopFree.c)
 *     zzzDecomposeDesktop @ 0x1C00206F8 (zzzDecomposeDesktop.c)
 *     DwmNotifyChildrenAddRemove @ 0x1C0020E00 (DwmNotifyChildrenAddRemove.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C002433C (DeleteOrSetRedirectionBitmap.c)
 *     GreDwmUseDeviceBitmaps @ 0x1C0026144 (GreDwmUseDeviceBitmaps.c)
 *     _GetProcessWindowStation @ 0x1C0028180 (_GetProcessWindowStation.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     xxxRedrawWindow @ 0x1C004E1B4 (xxxRedrawWindow.c)
 *     bSetDevDragRect @ 0x1C00910D0 (bSetDevDragRect.c)
 *     GreDwmShutdown @ 0x1C009DFB8 (GreDwmShutdown.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00B7028 (zzzEndDeferWinEventNotify.c)
 *     ChangeComposableCursor @ 0x1C01A87C0 (ChangeComposableCursor.c)
 *     StopFade @ 0x1C01BC550 (StopFade.c)
 *     GreDxDwmShutdown @ 0x1C026F620 (GreDxDwmShutdown.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxDwmStopRedirection()
{
  __int64 ProcessWindowStation; // rbp
  unsigned int v1; // edi
  __int64 i; // rsi
  void *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 j; // rsi
  struct tagWND *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD v16[7]; // [rsp+20h] [rbp-38h] BYREF
  char v17; // [rsp+68h] [rbp+10h] BYREF

  ProcessWindowStation = GetProcessWindowStation(0LL);
  v1 = 0;
  if ( (unsigned int)IsDwmApiPortRegistered() && (*(_DWORD *)(ProcessWindowStation + 64) & 0x204) == 0x200 )
  {
    ++gdwDeferWinEvent;
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v17);
    if ( gfade[2] )
      StopFade();
    bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL));
    if ( gbScreenCaptureSoftwareCursorEnabled )
    {
      ChangeComposableCursor(0LL);
      gbScreenCaptureSoftwareCursorEnabled = 0;
    }
    if ( grpdeskRitInput )
    {
      for ( i = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); i; i = *(_QWORD *)(i + 32) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(i + 8) + 64LL) & 1) != 0 )
        {
          zzzDecomposeDesktop((struct tagDESKTOP *)i);
          DwmNotifyChildrenAddRemove((struct tagDESKTOP *)i);
          v3 = (void *)ReferenceDwmApiPort();
          DwmAsyncDesktopFree(v3);
        }
      }
      v4 = *(_QWORD *)(ProcessWindowStation + 120);
      if ( v4 )
        DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), v4, 1LL);
    }
    GreDwmShutdown(*(_QWORD *)(gpDispInfo + 40LL));
    *(_DWORD *)(ProcessWindowStation + 64) &= ~0x200u;
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v17);
    zzzEndDeferWinEventNotify(v5);
    if ( (unsigned int)UserIsWddmConnectedSession() )
    {
      UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
      GreDxDwmShutdown();
      EnterCrit(1LL, 0LL);
    }
    if ( grpdeskRitInput )
    {
      for ( j = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); j; j = *(_QWORD *)(j + 32) )
      {
        if ( (*(_DWORD *)(j + 48) & 8) == 0 )
        {
          v11 = *(struct tagWND **)(*(_QWORD *)(j + 8) + 24LL);
          if ( v11 )
          {
            v16[2] = 0LL;
            v16[0] = *(_QWORD *)(gptiCurrent + 416LL);
            *(_QWORD *)(gptiCurrent + 416LL) = v16;
            v16[1] = v11;
            HMLockObject(v11);
            GreDwmUseDeviceBitmaps();
            xxxRedrawWindow(v11);
            ThreadUnlock1(v13, v12, v14);
          }
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v1;
}
