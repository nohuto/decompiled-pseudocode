/*
 * XREFs of xxxEnableMenuItem @ 0x1C02216E0
 * Callers:
 *     NtUserEnableMenuItem @ 0x1C01CEA50 (NtUserEnableMenuItem.c)
 *     xxxSetSysMenu @ 0x1C02219A4 (xxxSetSysMenu.c)
 * Callees:
 *     DwmGetClassStyle @ 0x1C00214C8 (DwmGetClassStyle.c)
 *     DwmAsyncChildStyleChange @ 0x1C0026730 (DwmAsyncChildStyleChange.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C007A800 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C007BA50 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0087C20 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C008CE78 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     DirtyVisRgnTrackers @ 0x1C00B699C (DirtyVisRgnTrackers.c)
 *     xxxRedrawTitle @ 0x1C00E0970 (xxxRedrawTitle.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00E3E74 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00E4714 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C00E4940 (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     MNGetPopupFromMenu @ 0x1C00E5C20 (MNGetPopupFromMenu.c)
 *     ?MenuItemState@@YAKAEBV?$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z @ 0x1C022145C (-MenuItemState@@YAKAEBV-$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C0230C20 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxEnableMenuItem(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rax
  unsigned int v7; // eax
  unsigned int v8; // r14d
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  int ClassStyle; // esi
  void *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD v20[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v22; // [rsp+50h] [rbp-20h]
  __int128 v23; // [rsp+58h] [rbp-18h] BYREF
  __int64 v24; // [rsp+68h] [rbp-8h]
  __int64 v25; // [rsp+90h] [rbp+20h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v21, 0LL);
  v22 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v20, 0LL);
  v6 = v22;
  if ( !v22 )
    v6 = *(_QWORD *)v21[0];
  v25 = v6;
  v7 = MenuItemState(a1, a2, a3, 3, &v25);
  v22 = 0LL;
  v8 = v7;
  SmartObjStackRefBase<tagMENU>::operator=(v21, v25);
  if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 40LL) + 40LL) & 0x100) != 0 )
  {
    if ( *(_QWORD *)(**(_QWORD **)a1 + 80LL) )
    {
      if ( a3 != v8 )
      {
        v24 = 0LL;
        v23 = 0LL;
        if ( a2 == 61440 || a2 == 61456 || a2 == 61472 || a2 == 61488 || a2 == 61536 || a2 == 61728 )
        {
          v9 = *(_QWORD **)(**(_QWORD **)a1 + 80LL);
          ThreadLock(v9, &v23);
          xxxRedrawTitle(*(unsigned __int64 **)(**(_QWORD **)a1 + 80LL), 0x1000u);
          if ( a2 == 61536 && (unsigned int)IsWindowDesktopComposed(v9) )
          {
            DirtyVisRgnTrackers((__int64)v9);
            ClassStyle = DwmGetClassStyle((__int64)v9);
            if ( v9 )
              v9 = (_QWORD *)*v9;
            v16 = (void *)ReferenceDwmApiPort(v14, v13);
            DwmAsyncChildStyleChange(v16, (__int64)v9, -26, ClassStyle);
          }
          ThreadUnlock1(v11, v10, v12);
        }
      }
    }
  }
  if ( (a3 & 3) != v8 && SmartObjStackRef<tagMENU>::operator bool((__int64)v21) )
  {
    v17 = v22;
    if ( !v22 )
      v17 = *(_QWORD *)v21[0];
    v18 = MNGetPopupFromMenu(v17, 0LL);
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v20, v18);
    if ( *(_QWORD *)v20[0] )
      xxxMNUpdateShownMenu(v20, 0LL, 1LL);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v20);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v21);
  return v8;
}
