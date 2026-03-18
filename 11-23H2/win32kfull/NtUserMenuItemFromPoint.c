/*
 * XREFs of NtUserMenuItemFromPoint @ 0x1C01D6ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C007A800 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C007BA50 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00E4714 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00E4A98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     xxxMenuItemFromPoint @ 0x1C0238B68 (xxxMenuItemFromPoint.c)
 */

__int64 __fastcall NtUserMenuItemFromPoint(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD v21[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v22; // [rsp+30h] [rbp-40h]
  __int128 v23; // [rsp+38h] [rbp-38h] BYREF
  __int64 v24; // [rsp+48h] [rbp-28h]
  __int128 v25; // [rsp+50h] [rbp-20h] BYREF
  __int64 v26; // [rsp+60h] [rbp-10h]
  __int64 v27; // [rsp+90h] [rbp+20h] BYREF

  v27 = a3;
  v26 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v23 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( !a1 || (a1 = ValidateHwnd(a1)) != 0 )
  {
    *(_QWORD *)&v23 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v23;
    *((_QWORD *)&v23 + 1) = a1;
    if ( a1 )
      HMLockObject(a1);
    SmartObjStackRefBase<tagMENU>::Init(v21, 0LL);
    v22 = 0LL;
    v10 = ValidateHmenu(a2);
    v22 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v21, v10);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v21) )
    {
      v9 = -1;
    }
    else
    {
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v11);
      if ( (unsigned __int8)ShouldVirtualizeWindowRect(a1, CurrentThreadDpiAwarenessContext) )
        TransformPointBetweenCoordinateSpaces(&v27, &v27, a1, 0LL);
      v13 = v22;
      if ( !v22 )
        v13 = *(_QWORD *)v21[0];
      *(_QWORD *)&v25 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v25;
      *((_QWORD *)&v25 + 1) = v13;
      HMLockObject(v13);
      v9 = xxxMenuItemFromPoint(a1, v21, v27);
      ThreadUnlock1(v15, v14, v16);
    }
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v21);
    ThreadUnlock1(v18, v17, v19);
  }
  else
  {
    v9 = -1;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
