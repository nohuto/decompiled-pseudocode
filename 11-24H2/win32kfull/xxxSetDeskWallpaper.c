/*
 * XREFs of xxxSetDeskWallpaper @ 0x14012AE2C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z @ 0x140031030 (-IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14006F8FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     xxxSendNotifyMessage @ 0x140119930 (xxxSendNotifyMessage.c)
 *     DwmAsyncNotifyWallpaperChange @ 0x14012A96C (DwmAsyncNotifyWallpaperChange.c)
 *     ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x14012ADB8 (-xxxNotifyShellOfWallpaperChange@@YAHXZ.c)
 *     ?GetCurrentWallpaperSettings@@YAXPEAU_UNICODE_STRING@@PEAUtagWALLPAPERSETTINGS@@@Z @ 0x14012B004 (-GetCurrentWallpaperSettings@@YAXPEAU_UNICODE_STRING@@PEAUtagWALLPAPERSETTINGS@@@Z.c)
 *     ?SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z @ 0x14012B07C (-SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z.c)
 *     ?_GetShellWindow@@YAPEAUtagWND@@PEAUtagDESKTOP@@@Z @ 0x14012B2E0 (-_GetShellWindow@@YAPEAUtagWND@@PEAUtagDESKTOP@@@Z.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x14012B2FC (LoadWallpaperFilenameFromRegistry.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall xxxSetDeskWallpaper(struct _UNICODE_STRING *a1, __int64 a2)
{
  int v4; // esi
  __int64 v5; // rdx
  _WORD *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int16 v9; // ax
  _WORD *v10; // rax
  struct tagTHREADINFO *v11; // rax
  struct tagWND *ShellWindow; // rdi
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // ebx
  struct tagTHREADINFO *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  void *v23; // rax
  __int64 v24; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-238h] BYREF
  _BYTE v26[4]; // [rsp+40h] [rbp-228h] BYREF
  _BYTE v27[524]; // [rsp+44h] [rbp-224h] BYREF

  memset_0(v26, 0, 0x204uLL);
  v4 = 0;
  GetCurrentWallpaperSettings(a1, (struct tagWALLPAPERSETTINGS *)v26);
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    LoadWallpaperFilenameFromRegistry(a1, v27, 256LL);
  }
  else if ( a2 != -2 )
  {
    v7 = 256LL;
    v8 = a2 - (_QWORD)v27;
    v6 = v27;
    do
    {
      if ( v7 == -2147483390 )
        break;
      v9 = *(_WORD *)((char *)v6 + v8);
      if ( !v9 )
        break;
      *v6++ = v9;
      --v7;
    }
    while ( v7 );
    v10 = v6 - 1;
    if ( v7 )
      v10 = v6;
    *v10 = 0;
  }
  v11 = PtiCurrent((__int64)v6, v5);
  ShellWindow = _GetShellWindow(*((struct tagDESKTOP **)v11 + 62));
  v14 = *(_QWORD *)(W32GetUserGdiSessionState(v13) + 40);
  if ( (PsGetCurrentProcess() == v14
     || (CurrentProcess = PsGetCurrentProcess(), (unsigned int)PsIsProtectedProcess(CurrentProcess)))
    && ShellWindow )
  {
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)ShellWindow);
    v18 = xxxSendNotifyMessage(ShellWindow, 0x34u, 5uLL, 0LL, 1);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v24);
  }
  else
  {
    v4 = 1;
    v18 = SetGlobalWallpaperSettings((const struct tagWALLPAPERSETTINGS *)v26);
  }
  if ( v18 && v4 )
  {
    v20 = PtiCurrent(v17, v16);
    if ( (unsigned int)IsThreadDesktopComposed(v20) )
    {
      v23 = (void *)ReferenceDwmApiPort(v22, v21);
      DwmAsyncNotifyWallpaperChange(v23);
    }
    xxxNotifyShellOfWallpaperChange(v22, v21);
  }
  return v18;
}
