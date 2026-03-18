/*
 * XREFs of xxxFlashEnabledPopup @ 0x140102EE4
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x140252880 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14006F8FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     xxxMessageBeep @ 0x140103034 (xxxMessageBeep.c)
 *     DWP_GetEnabledPopup @ 0x1401BFF68 (DWP_GetEnabledPopup.c)
 *     xxxFlashWindow @ 0x14024CA50 (xxxFlashWindow.c)
 */

__int64 __fastcall xxxFlashEnabledPopup(__int64 a1, __int64 a2)
{
  __int64 EnabledPopup; // rax
  struct tagWND *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (*(_DWORD *)(W32GetUserSessionState(a1, a2) + 21004) & 1) == 0 )
  {
    EnabledPopup = DWP_GetEnabledPopup(a1);
    v4 = (struct tagWND *)EnabledPopup;
    if ( EnabledPopup )
    {
      Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, EnabledPopup);
      W32GetUserSessionState(v6, v5);
      UPDWORDPointer(8196LL);
      xxxFlashWindow(v4);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v7);
    }
  }
  return xxxMessageBeep(0LL);
}
