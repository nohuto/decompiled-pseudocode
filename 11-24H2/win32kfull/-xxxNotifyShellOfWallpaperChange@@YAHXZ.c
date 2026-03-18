/*
 * XREFs of ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x14012ADB8
 * Callers:
 *     xxxSetDeskWallpaper @ 0x14012AE2C (xxxSetDeskWallpaper.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14006F8FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     xxxSendNotifyMessage @ 0x140119930 (xxxSendNotifyMessage.c)
 *     ?_GetShellWindow@@YAPEAUtagWND@@PEAUtagDESKTOP@@@Z @ 0x14012B2E0 (-_GetShellWindow@@YAPEAUtagWND@@PEAUtagDESKTOP@@@Z.c)
 */

__int64 __fastcall xxxNotifyShellOfWallpaperChange(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  struct tagTHREADINFO *v3; // rax
  struct tagWND *ShellWindow; // rax
  struct tagWND *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = 0;
  v3 = PtiCurrent(a1, a2);
  ShellWindow = _GetShellWindow(*((struct tagDESKTOP **)v3 + 62));
  v5 = ShellWindow;
  if ( ShellWindow )
  {
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)ShellWindow);
    v2 = xxxSendNotifyMessage(v5, 0x34u, 4uLL, 0LL, 1);
    v8 = PtiCurrent(v7, v6);
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v8, BugCheckParameter3);
  }
  return v2;
}
