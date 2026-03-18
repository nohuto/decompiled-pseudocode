/*
 * XREFs of xxxSendNotifyMessage @ 0x1C0033170
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C000EF34 (xxxSetModernAppWindow.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C0031520 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     xxxBroadcastMessageEx @ 0x1C00326D0 (xxxBroadcastMessageEx.c)
 *     ?xxxWrapSendNotifyMessage@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00330D0 (-xxxWrapSendNotifyMessage@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C005A1D0 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     xxxSetDeskWallpaper @ 0x1C0062778 (xxxSetDeskWallpaper.c)
 *     ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x1C00628E0 (-xxxNotifyShellOfWallpaperChange@@YAHXZ.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00A57E8 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C00A6318 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     xxxDWP_UpdateUIState @ 0x1C00AD604 (xxxDWP_UpdateUIState.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00AFD5C (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00D9A30 (xxxSystemParametersInfoWorker.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00DF38C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0109880 (xxxRealDefWindowProc.c)
 *     _NotifyOverlayWindow @ 0x1C01C7F50 (_NotifyOverlayWindow.c)
 *     xxxMetricsRecalc @ 0x1C01C804C (xxxMetricsRecalc.c)
 *     NtUserNavigateFocus @ 0x1C01D72E0 (NtUserNavigateFocus.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C01FC4FC (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C01FCE00 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     xxxMNLoop @ 0x1C0213DFC (xxxMNLoop.c)
 *     xxxBroadcastPaletteChanged @ 0x1C02144DC (xxxBroadcastPaletteChanged.c)
 *     xxxSendMenuSelect @ 0x1C023F51C (xxxSendMenuSelect.c)
 * Callees:
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C0030E84 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxSendMessageCallback @ 0x1C00333BC (xxxSendMessageCallback.c)
 *     ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z @ 0x1C0036584 (-CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z.c)
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00E0550 (PopAndFreeAlwaysW32ThreadLock.c)
 */

__int64 __fastcall xxxSendNotifyMessage(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        struct _LARGE_STRING *a4,
        int a5)
{
  struct _LARGE_STRING *v5; // r10
  char v9; // di
  __int128 v10; // [rsp+50h] [rbp-38h] BYREF
  __int128 v11; // [rsp+60h] [rbp-28h] BYREF
  __int64 v12; // [rsp+70h] [rbp-18h]

  v5 = a4;
  if ( a1 != (struct tagWND *)-1LL )
    return xxxSendMessageCallback(a1, a2, a3, 0LL, 0LL, 0, a5, 0);
  v12 = 0LL;
  v9 = 0;
  v11 = 0LL;
  v10 = 0LL;
  if ( a2 == 26 || a2 == 27 )
  {
    if ( a4 )
    {
      if ( !(unsigned int)CaptureBroadcastString((struct _LARGE_UNICODE_STRING *)&v10, a4) )
        return 0LL;
      PushW32ThreadLock(*((_QWORD *)&v10 + 1), &v11, Win32FreePool);
      v5 = (struct _LARGE_STRING *)&v10;
      v9 = 1;
    }
  }
  else if ( a2 != 42 )
  {
    return xxxSendMessageCallback(a1, a2, a3, 0LL, 0LL, 0, a5, 0);
  }
  xxxSystemBroadcastMessage(a2, a3, (__int64)v5, 1, 0LL, a5, 0);
  if ( v9 )
    PopAndFreeAlwaysW32ThreadLock(&v11);
  return 1LL;
}
