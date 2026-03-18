/*
 * XREFs of NtUserGetMenuItemRect @ 0x1401B1410
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x14003F454 (--0-$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140070890 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140070D94 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140073680 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ @ 0x14009D200 (--1-$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     xxxGetMenuItemRect @ 0x1401B15B8 (xxxGetMenuItemRect.c)
 *     ??$?0VSmartObjStackRef@@@?$Win32HMThreadLockAlways@UtagMENU@@@@QEAA@PEAUtagTHREADINFO@@AEAV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1401B1724 (--$-0VSmartObjStackRef@@@-$Win32HMThreadLockAlways@UtagMENU@@@@QEAA@PEAUtagTHREADINFO@@AEAV-$Sma.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetMenuItemRect(__int64 a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int MenuItemRect; // ebx
  __int64 v13; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v18[4]; // [rsp+28h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter3[3]; // [rsp+48h] [rbp-70h] BYREF
  _BYTE v20[16]; // [rsp+60h] [rbp-58h] BYREF
  __int128 v21; // [rsp+70h] [rbp-48h] BYREF

  v21 = 0LL;
  v8 = EnterCrit(0LL, 0LL);
  if ( !a1 || (a1 = ValidateHwnd(a1)) != 0 )
  {
    Win32HMOptionalThreadLock<tagWND>::Win32HMOptionalThreadLock<tagWND>(BugCheckParameter3, v8, a1);
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v18, v9);
    v10 = ValidateHmenu(a2, 1LL);
    v18[2] = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v18, v10);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v18) )
    {
      MenuItemRect = 0;
    }
    else
    {
      Win32HMThreadLockAlways<tagMENU>::Win32HMThreadLockAlways<tagMENU>(v20, v8, v18);
      MenuItemRect = xxxGetMenuItemRect(a1, v18, a3, &v21);
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v13);
      if ( (unsigned __int8)ShouldVirtualizeWindowRect(a1, CurrentThreadDpiAwarenessContext) )
        TransformRectBetweenCoordinateSpaces(&v21, &v21, 0LL, a1);
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_OWORD *)MmUserProbeAddress;
      *a4 = v21;
      Win32HMThreadLockAlways<tagACCELTABLE>::~Win32HMThreadLockAlways<tagACCELTABLE>((ULONG_PTR)v20);
    }
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v18, v11);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v15);
  }
  else
  {
    MenuItemRect = 0;
  }
  UserSessionSwitchLeaveCrit(v16);
  return MenuItemRect;
}
