/*
 * XREFs of xxxLoadSysDesktopMenu @ 0x1C008DA54
 * Callers:
 *     xxxTranslateAccelerator @ 0x1C000C884 (xxxTranslateAccelerator.c)
 *     xxxSetDialogSystemMenu @ 0x1C008D9B4 (xxxSetDialogSystemMenu.c)
 *     xxxGetSysMenuPtr @ 0x1C00E4960 (xxxGetSysMenuPtr.c)
 * Callees:
 *     _DestroyMenu @ 0x1C0040040 (_DestroyMenu.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C007A800 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C007BA50 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     LockDesktopMenu @ 0x1C008DB10 (LockDesktopMenu.c)
 *     xxxLoadSysMenu @ 0x1C00E3AD4 (xxxLoadSysMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00E4714 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00E4A98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 */

__int64 __fastcall xxxLoadSysDesktopMenu(__int64 *a1, unsigned int a2)
{
  __int64 v4; // rdi
  __int64 SysMenu; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD v9[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v10; // [rsp+30h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v9, 0LL);
  v4 = 0LL;
  v10 = 0LL;
  SysMenu = xxxLoadSysMenu(a2);
  v10 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v9, SysMenu);
  if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v9) )
  {
    if ( *a1 )
    {
      v7 = v10;
      if ( !v10 )
        v7 = *(_QWORD *)v9[0];
      DestroyMenu(v7);
      v4 = *a1;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v9[0] + 40LL) + 40LL) |= 0x80u;
      if ( !(unsigned int)LockDesktopMenu(a1, v9) )
      {
        v8 = v10;
        if ( !v10 )
          v8 = *(_QWORD *)v9[0];
        DestroyMenu(v8);
        v10 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v9, 0LL);
      }
      if ( v10 )
        v4 = v10;
      else
        v4 = *(_QWORD *)v9[0];
    }
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v9);
  return v4;
}
