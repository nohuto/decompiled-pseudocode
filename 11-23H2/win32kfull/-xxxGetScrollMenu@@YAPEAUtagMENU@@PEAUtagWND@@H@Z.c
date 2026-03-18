/*
 * XREFs of ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C0228D98
 * Callers:
 *     xxxDoScrollMenu @ 0x1C022969C (xxxDoScrollMenu.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C007A800 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C007BA50 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     LockDesktopMenu @ 0x1C008DB10 (LockDesktopMenu.c)
 *     RtlInitUnicodeStringOrId @ 0x1C00DFB00 (RtlInitUnicodeStringOrId.c)
 *     xxxClientLoadMenu @ 0x1C00E0A48 (xxxClientLoadMenu.c)
 *     _GetSubMenu @ 0x1C00E2DA0 (_GetSubMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00E4714 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00E4A98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 */

struct tagMENU *__fastcall xxxGetScrollMenu(struct tagWND *a1, int a2)
{
  __int64 v4; // rax
  __int64 *v5; // rbx
  unsigned __int8 *Menu; // rax
  __int64 v7; // rcx
  __int64 SubMenu; // rbx
  struct _UNICODE_STRING v10; // [rsp+20h] [rbp-30h] BYREF
  _QWORD *v11[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+40h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v11, 0LL);
  v4 = *((_QWORD *)a1 + 3);
  v12 = 0LL;
  v5 = (__int64 *)(v4 + 80);
  if ( !a2 )
    v5 = (__int64 *)(v4 + 72);
  SmartObjStackRefBase<tagMENU>::operator=(v11, *v5);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v11) && (*(_DWORD *)(gptiCurrent + 488LL) & 5) == 0 )
  {
    v10 = 0LL;
    RtlInitUnicodeStringOrId(&v10, (WCHAR *)(a2 != 0 ? 80LL : 64LL));
    Menu = xxxClientLoadMenu(0LL, (void **)&v10);
    v12 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v11, (__int64)Menu);
    LockDesktopMenu((__int64)v5, v11);
  }
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v11) )
  {
    SubMenu = 0LL;
  }
  else
  {
    v7 = v12;
    if ( !v12 )
      v7 = *v11[0];
    SubMenu = GetSubMenu(v7);
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v11);
  return (struct tagMENU *)SubMenu;
}
