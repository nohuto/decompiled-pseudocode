/*
 * XREFs of ?xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z @ 0x1402AD4EC
 * Callers:
 *     NtUserRegisterSiblingFrostWindow @ 0x14029B6B0 (NtUserRegisterSiblingFrostWindow.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?GetFrostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z @ 0x140064ACC (-GetFrostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14006F8FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     IsWindowBeingDestroyed @ 0x1400911AC (IsWindowBeingDestroyed.c)
 *     ?IsGhostWindowClass@@YA_NPEBUtagWND@@@Z @ 0x14016DFE0 (-IsGhostWindowClass@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x14017C3F8 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x14019552C (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x14024E024 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?RemoveFrostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z @ 0x14026BFC8 (-RemoveFrostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1402ACF68 (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?SetGhostFNID@@YAHPEAUtagWND@@H@Z @ 0x1402ACFD0 (-SetGhostFNID@@YAHPEAUtagWND@@H@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1402AD240 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxRegisterSiblingFrostWindow(HWND a1, HWND a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rax
  struct tagWND *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagTHREADINFO **v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-28h] BYREF
  ULONG_PTR v19[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  if ( !(unsigned int)IsCurrentProcessDwm((__int64)a1) )
  {
    UserSetLastError(5);
    return v4;
  }
  LOBYTE(v5) = 1;
  v6 = HMValidateHandleNoSecure((__int64)a2, v5);
  v7 = (struct tagWND *)v6;
  if ( v6 )
  {
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v19, v6);
    if ( !(unsigned int)_ShouldFrostSiblingWindow(v7) )
      goto LABEL_19;
    LOBYTE(v8) = 1;
    v10 = (struct tagTHREADINFO **)HMValidateHandleNoSecure((__int64)a1, v8);
    if ( !v10 || v10[2] != PtiCurrent(v9, v8) || !IsGhostWindowClass((const struct tagWND *)v10, v8) )
      goto LABEL_19;
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)v10);
    if ( (unsigned int)SetFrostProp((struct tagWND *)v10, (__int64)a2) )
    {
      if ( (unsigned int)SetFrostProp(v7, (__int64)a1) )
      {
        SetGhostFNID((struct tagWND *)v10, 1);
        xxxShowGhostWindow((struct tagWND *)v10, v7);
        if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v10)
          && !(unsigned int)IsWindowBeingDestroyed((__int64)v7)
          && (HWND)GetFrostProp((const struct tagWND *)v10, v13) == a2
          && (HWND)GetFrostProp(v7, v14) == a1 )
        {
          v4 = 1;
          goto LABEL_18;
        }
        SetGhostFNID((struct tagWND *)v10, 0);
        if ( (HWND)GetFrostProp(v7, v15) == a1 )
          RemoveFrostProp(v7, v16);
        xxxHideGhostWindow((LARGE_INTEGER *)v10, v7);
      }
      RemoveFrostProp((struct tagWND *)v10, v12);
    }
LABEL_18:
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v11);
LABEL_19:
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v19, v8);
  }
  return v4;
}
