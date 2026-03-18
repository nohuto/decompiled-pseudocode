/*
 * XREFs of xxxRedrawWindow @ 0x140042630
 * Callers:
 *     xxxSetWindowStyle @ 0x1400318F0 (xxxSetWindowStyle.c)
 *     xxxValidateRect @ 0x14003F0D8 (xxxValidateRect.c)
 *     NtUserRedrawWindow @ 0x14003F320 (NtUserRedrawWindow.c)
 *     xxxSetLayeredWindow @ 0x140090DC8 (xxxSetLayeredWindow.c)
 *     xxxUserResetDisplayDevice @ 0x140135460 (xxxUserResetDisplayDevice.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x14017C3F8 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     NtUserInvalidateRgn @ 0x1401C5F10 (NtUserInvalidateRgn.c)
 *     _DwmLockScreenUpdates @ 0x140210F80 (_DwmLockScreenUpdates.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x14023BD28 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     NtUserValidateRgn @ 0x140247E90 (NtUserValidateRgn.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14024F6E8 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     xxxMinimizeHungWindow @ 0x14026994C (xxxMinimizeHungWindow.c)
 *     RemoteRedrawRectangle @ 0x1402AD718 (RemoteRedrawRectangle.c)
 *     ?xxxSoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1402ADC20 (-xxxSoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxDwmStopRedirection @ 0x1402B38D0 (xxxDwmStopRedirection.c)
 *     xxxInvalidateRect @ 0x1402BD274 (xxxInvalidateRect.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxInternalInvalidate @ 0x1400428C0 (xxxInternalInvalidate.c)
 *     _GetDesktopWindow @ 0x140046470 (_GetDesktopWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     MirrorRegion @ 0x1400F553C (MirrorRegion.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall xxxRedrawWindow(struct tagWND *a1, __int64 a2, __int64 a3, char a4)
{
  ULONG_PTR v4; // rdi
  int *v7; // r14
  struct tagWND *v8; // rbx
  struct tagWND *i; // rcx
  char v10; // al
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rcx
  struct tagWND *v15; // rax
  __int64 v16; // rcx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  ULONG_PTR *v21; // rax
  __int64 UserSessionState; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // edx
  int v30; // eax
  int v31; // edx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0LL;
  v7 = (int *)a2;
  v8 = a1;
  if ( !a1 )
    v8 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)PtiCurrent() + 62) + 8LL) + 24LL);
  for ( i = v8; i; i = (struct tagWND *)*((_QWORD *)i + 13) )
  {
    a2 = *((_QWORD *)i + 5);
    v10 = *(_BYTE *)(a2 + 31);
    if ( (v10 & 0x10) == 0 || (v10 & 0x20) != 0 && i != v8 )
      return 1LL;
    if ( (*(_WORD *)(a2 + 42) & 0x2FFF) == 0x29D )
      break;
  }
  if ( (a4 & 9) != 0 )
  {
    if ( a3 )
    {
      if ( a3 != 1 )
      {
        UserSessionState = W32GetUserSessionState(i, a2);
        GreCombineRgn(*(_QWORD *)(UserSessionState + 63400), a3, 0LL, 5LL);
        v26 = W32GetUserSessionState(v25, v24);
        MirrorRegion(v8, *(_QWORD *)(v26 + 63400), 1LL);
        a3 = *(_QWORD *)(W32GetUserSessionState(v28, v27) + 63400);
      }
      if ( v8 != (struct tagWND *)GetDesktopWindow(v8) )
        GreOffsetRgn(a3, *(unsigned int *)(*((_QWORD *)v8 + 5) + 104LL), *(unsigned int *)(*((_QWORD *)v8 + 5) + 108LL));
    }
    else if ( v7 )
    {
      v11 = W32GetUserSessionState(i, a2);
      v12 = *((_QWORD *)v8 + 5);
      v13 = *(_QWORD *)(v11 + 63400);
      if ( (*(_BYTE *)(v12 + 26) & 0x40) != 0 )
      {
        v29 = *(_DWORD *)(v12 + 112) - *(_DWORD *)(v12 + 104);
        v30 = v29 - v7[2];
        v31 = v29 - *v7;
        *v7 = v30;
        v7[2] = v31;
      }
      v14 = *((_QWORD *)v8 + 3);
      v15 = 0LL;
      if ( v14 )
      {
        v16 = *(_QWORD *)(v14 + 8);
        if ( v16 )
          v15 = *(struct tagWND **)(v16 + 24);
      }
      if ( v8 == v15 )
        SetRectRgnIndirect(v13, v7);
      else
        GreSetRectRgn(
          v13,
          (unsigned int)(*v7 + *(_DWORD *)(*((_QWORD *)v8 + 5) + 104LL)),
          (unsigned int)(*(_DWORD *)(*((_QWORD *)v8 + 5) + 108LL) + v7[1]),
          (unsigned int)(*(_DWORD *)(*((_QWORD *)v8 + 5) + 104LL) + v7[2]),
          *(_DWORD *)(*((_QWORD *)v8 + 5) + 108LL) + v7[3]);
    }
  }
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(i, a2);
  if ( CurrentThreadNonPaged )
    v18 = *CurrentThreadNonPaged;
  else
    v18 = 0LL;
  BugCheckParameter3[0] = *(_QWORD *)(v18 + 456);
  *(_QWORD *)(v18 + 456) = BugCheckParameter3;
  BugCheckParameter3[1] = (ULONG_PTR)v8;
  if ( v8 )
    HMLockObject(v8);
  xxxInternalInvalidate(v8);
  v21 = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v20, v19);
  if ( v21 )
    v4 = *v21;
  Win32HM_UnlockFromThread<1>(v4, BugCheckParameter3);
  return 1LL;
}
