/*
 * XREFs of xxxGetSystemMenu @ 0x1C00E2BDC
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     NtUserGetSystemMenu @ 0x1C0090FC0 (NtUserGetSystemMenu.c)
 * Callees:
 *     DwmGetClassStyle @ 0x1C00214C8 (DwmGetClassStyle.c)
 *     DwmAsyncChildStyleChange @ 0x1C0026730 (DwmAsyncChildStyleChange.c)
 *     _DestroyMenu @ 0x1C0040040 (_DestroyMenu.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C007A800 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C007BA50 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0087C20 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C008CE78 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C008D3BC (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C0094A20 (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 *     IsWindowBeingDestroyed @ 0x1C00AD46C (IsWindowBeingDestroyed.c)
 *     DirtyVisRgnTrackers @ 0x1C00B699C (DirtyVisRgnTrackers.c)
 *     GetpwndNotifypMenuState @ 0x1C00E14CC (GetpwndNotifypMenuState.c)
 *     _GetSubMenu @ 0x1C00E2DA0 (_GetSubMenu.c)
 *     xxxLoadSysMenu @ 0x1C00E3AD4 (xxxLoadSysMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00E3E74 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00E4714 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C00E4940 (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00E4A98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall xxxGetSystemMenu(struct tagWND *a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 SysMenu; // rax
  __int64 v7; // rdx
  __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 SubMenu; // rax
  __int64 v12; // rdx
  int v13; // r14d
  __int64 v14; // rcx
  __int64 v15; // rbx
  void *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD v20[2]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v21[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD *v23[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v24; // [rsp+60h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v23, 0LL);
  v4 = *((_QWORD *)a1 + 20);
  v5 = 0LL;
  v24 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v23, v4);
  if ( a2 )
  {
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(v23)
      && *(_QWORD *)(*v23[0] + 80LL)
      && (unsigned int)IsWindowDesktopComposed(*(_QWORD *)(*v23[0] + 80LL))
      && (DwmGetClassStyle(*(_QWORD *)(*v23[0] + 80LL)) & 0x200) != 0 )
    {
      DirtyVisRgnTrackers(*(_QWORD *)(*v23[0] + 80LL));
      v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v23[0] + 80LL) + 136LL) + 8LL) + 8LL);
      v14 = *v23[0];
      if ( *(_QWORD *)(*v23[0] + 80LL) )
      {
        v14 = *v23[0];
        v15 = **(_QWORD **)(*v23[0] + 80LL);
      }
      else
      {
        v15 = 0LL;
      }
      v16 = (void *)ReferenceDwmApiPort(v14, v12);
      DwmAsyncChildStyleChange(v16, v15, -26, v13);
    }
    if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v23)
      && (*(_DWORD *)(*(_QWORD *)(*v23[0] + 40LL) + 40LL) & 0x80u) == 0
      && UnlockWndMenuWorker(a1, 1u) )
    {
      v17 = v24;
      if ( !v24 )
        v17 = *v23[0];
      DestroyMenu(v17);
    }
  }
  else if ( ((unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v23)
          || (*(_DWORD *)(*(_QWORD *)(*v23[0] + 40LL) + 40LL) & 0x80u) != 0)
         && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) != 0 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v20, 0LL);
    SysMenu = xxxLoadSysMenu(*((_QWORD *)a1 + 20) != 0LL ? 48 : 16);
    v24 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v23, SysMenu);
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v23) )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v20);
      goto LABEL_16;
    }
    if ( (unsigned int)IsWindowBeingDestroyed((__int64)a1) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 469LL);
    LockWndMenuWorker((__int64)a1, 1u, v23);
    v7 = *((_QWORD *)a1 + 20);
    v24 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v23, v7);
    v8 = GetpwndNotifypMenuState((__int64)a1);
    if ( v8 )
      v9 = *v8;
    else
      v9 = 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v20, v9);
    if ( *(_QWORD *)v20[0] && (**(_DWORD **)v20[0] & 8) == 0 && *(struct tagWND **)(*(_QWORD *)v20[0] + 16LL) == a1 )
    {
      v18 = v24;
      if ( (**(_DWORD **)v20[0] & 4) != 0 )
      {
        if ( !v24 )
          v18 = *v23[0];
        v19 = *(_QWORD *)v20[0] + 40LL;
      }
      else
      {
        if ( !v24 )
          v18 = *v23[0];
        v19 = *(_QWORD *)v20[0] + 48LL;
      }
      v21[1] = v18;
      v21[0] = v19;
      HMAssignmentLock(v21, 0LL);
    }
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v20);
  }
  if ( *((_QWORD *)a1 + 20) )
  {
    SubMenu = GetSubMenu();
    v24 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v23, SubMenu);
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(v23) )
    {
      *(_DWORD *)(*(_QWORD *)(*v23[0] + 40LL) + 40LL) |= 0x100u;
      v22[1] = a1;
      v22[0] = *v23[0] + 80LL;
      HMAssignmentLock(v22, 0LL);
    }
    if ( v24 )
      v5 = v24;
    else
      v5 = *v23[0];
  }
LABEL_16:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v23);
  return v5;
}
