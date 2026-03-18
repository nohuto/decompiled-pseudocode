/*
 * XREFs of xxxGetSysMenu @ 0x1401B0B74
 * Callers:
 *     xxxMNStartMenu @ 0x14009A980 (xxxMNStartMenu.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1401AF128 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxGetMenuBarInfo @ 0x1401B04B0 (xxxGetMenuBarInfo.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x140252880 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     ?xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z @ 0x1402B3F28 (-xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z.c)
 * Callees:
 *     _GetSubMenu @ 0x14006F7B4 (_GetSubMenu.c)
 *     xxxSetSysMenu @ 0x14006F958 (xxxSetSysMenu.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140070890 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     xxxGetSysMenuPtr @ 0x140070C28 (xxxGetSysMenuPtr.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140070D94 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140073680 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall xxxGetSysMenu(struct tagWND *a1, __int64 a2)
{
  int v3; // edi
  __int64 SysMenuPtr; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 SubMenu; // rax
  __int64 v8; // rbx
  __int64 v10[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v3 = a2;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v10, a2);
  xxxSetSysMenu(a1);
  SysMenuPtr = xxxGetSysMenuPtr(a1);
  v11 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v10, SysMenuPtr);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v10) && v3 )
  {
    v6 = v11;
    if ( !v11 )
      v6 = *(_QWORD *)v10[0];
    SubMenu = GetSubMenu(v6, v5);
    v11 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v10, SubMenu);
  }
  v8 = v11;
  if ( !v11 )
    v8 = *(_QWORD *)v10[0];
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v10, v5);
  return v8;
}
