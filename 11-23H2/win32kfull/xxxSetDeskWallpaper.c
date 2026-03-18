/*
 * XREFs of xxxSetDeskWallpaper @ 0x1C0062778
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00D9A30 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C0033170 (xxxSendNotifyMessage.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C003B918 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     IsThreadDesktopComposed @ 0x1C005F7D4 (IsThreadDesktopComposed.c)
 *     ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x1C00628E0 (-xxxNotifyShellOfWallpaperChange@@YAHXZ.c)
 *     ?_GetShellWindow@@YAPEAUtagWND@@PEAUtagDESKTOP@@@Z @ 0x1C006296C (-_GetShellWindow@@YAPEAUtagWND@@PEAUtagDESKTOP@@@Z.c)
 *     DwmAsyncNotifyWallpaperChange @ 0x1C0062988 (DwmAsyncNotifyWallpaperChange.c)
 *     ?SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z @ 0x1C0062A04 (-SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C0062AC0 (LoadWallpaperFilenameFromRegistry.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

__int64 __fastcall xxxSetDeskWallpaper(__int64 a1, size_t *a2)
{
  int v4; // ebp
  struct tagWND *ShellWindow; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 CurrentProcess; // rax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  void *v15; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int128 v20; // [rsp+30h] [rbp-248h] BYREF
  __int64 v21; // [rsp+40h] [rbp-238h]
  int v22; // [rsp+50h] [rbp-228h] BYREF
  unsigned __int16 v23[262]; // [rsp+54h] [rbp-224h] BYREF

  memset_0(v23, 0, 0x200uLL);
  v4 = 0;
  v22 = 1;
  if ( g_pWallpaperSettings )
    RtlStringCchCopyW(v23, 0x100uLL, (size_t *)(g_pWallpaperSettings + 4LL));
  else
    LoadWallpaperFilenameFromRegistry(a1, v23, 256LL);
  if ( (unsigned __int64)a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    LoadWallpaperFilenameFromRegistry(a1, v23, 256LL);
  }
  else if ( a2 != (size_t *)-2LL )
  {
    RtlStringCchCopyW(v23, 0x100uLL, a2);
  }
  ShellWindow = _GetShellWindow(*(struct tagDESKTOP **)(gptiCurrent + 456LL));
  if ( (PsGetCurrentProcess(v7, v6, v8) == gpepCSRSS
     || (CurrentProcess = PsGetCurrentProcess(gpepCSRSS, v9, v10), (unsigned int)PsIsProtectedProcess(CurrentProcess)))
    && ShellWindow )
  {
    v20 = 0LL;
    v21 = 0LL;
    ThreadLockAlways(ShellWindow, &v20);
    v12 = xxxSendNotifyMessage(ShellWindow, 0x34u, 5uLL, 0LL, 1);
    ThreadUnlock1(v18, v17, v19);
  }
  else
  {
    v4 = 1;
    v12 = SetGlobalWallpaperSettings((const struct tagWALLPAPERSETTINGS *)&v22);
  }
  if ( v12 && v4 )
  {
    if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent) )
    {
      v15 = (void *)ReferenceDwmApiPort(v14, v13);
      DwmAsyncNotifyWallpaperChange(v15);
    }
    xxxNotifyShellOfWallpaperChange();
  }
  return v12;
}
