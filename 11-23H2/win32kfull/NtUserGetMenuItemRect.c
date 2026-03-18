/*
 * XREFs of NtUserGetMenuItemRect @ 0x1C01D1DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C007A800 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00E4A98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0139FF4 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C013A068 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxGetMenuItemRect @ 0x1C0237E44 (xxxGetMenuItemRect.c)
 */

__int64 __fastcall NtUserGetMenuItemRect(__int64 a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int MenuItemRect; // edi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD v23[2]; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+38h] [rbp-90h]
  __int128 v25; // [rsp+48h] [rbp-80h] BYREF
  __int64 v26; // [rsp+58h] [rbp-70h]
  __int128 v27; // [rsp+60h] [rbp-68h] BYREF
  __int64 v28; // [rsp+70h] [rbp-58h]
  __int128 v29; // [rsp+80h] [rbp-48h] BYREF

  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( !a1 || (a1 = ValidateHwnd(a1)) != 0 )
  {
    *(_QWORD *)&v25 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v25;
    *((_QWORD *)&v25 + 1) = a1;
    if ( a1 )
      HMLockObject(a1);
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v23);
    v13 = ValidateHmenu(a2);
    v24 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v23, v13);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v23) )
    {
      MenuItemRect = 0;
    }
    else
    {
      v14 = v24;
      if ( !v24 )
        v14 = *(_QWORD *)v23[0];
      *(_QWORD *)&v27 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v27;
      *((_QWORD *)&v27 + 1) = v14;
      HMLockObject(v14);
      MenuItemRect = xxxGetMenuItemRect(a1, v23, a3, &v29);
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v15);
      if ( (unsigned __int8)ShouldVirtualizeWindowRect(a1, CurrentThreadDpiAwarenessContext) )
        TransformRectBetweenCoordinateSpaces(&v29, &v29, 0LL, a1);
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_OWORD *)MmUserProbeAddress;
      *a4 = v29;
      ThreadUnlock1(MmUserProbeAddress, v17, v18);
    }
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v23);
    ThreadUnlock1(v20, v19, v21);
  }
  else
  {
    MenuItemRect = 0;
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return MenuItemRect;
}
