/*
 * XREFs of xxxSetDialogSystemMenu @ 0x140201DA4
 * Callers:
 *     NtUserSetDialogSystemMenu @ 0x140246140 (NtUserSetDialogSystemMenu.c)
 * Callees:
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x140070748 (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140070D94 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140073680 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxLoadSysDesktopMenu @ 0x1401A8EE8 (xxxLoadSysDesktopMenu.c)
 */

_BOOL8 __fastcall xxxSetDialogSystemMenu(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  BOOL v4; // ebx
  __int64 v5; // rdx
  struct _HEAD *SysDesktopMenu; // rax
  _QWORD *v8[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v8, a2);
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL);
  v9 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v8, v3);
  if ( !v9 && !*v8[0] )
  {
    SysDesktopMenu = xxxLoadSysDesktopMenu((struct _HEAD **)(*(_QWORD *)(a1 + 24) + 64LL), 48LL);
    v9 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v8, (__int64)SysDesktopMenu);
  }
  v4 = 1;
  LockWndMenuWorker(a1, 1u, v8);
  if ( !v9 )
    v4 = *v8[0] != 0LL;
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v8, v5);
  return v4;
}
