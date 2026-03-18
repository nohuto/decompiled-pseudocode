/*
 * XREFs of xxxSetDialogSystemMenu @ 0x1C008D9B4
 * Callers:
 *     NtUserSetDialogSystemMenu @ 0x1C008D900 (NtUserSetDialogSystemMenu.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C007A800 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C007BA50 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C008D3BC (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxLoadSysDesktopMenu @ 0x1C008DA54 (xxxLoadSysDesktopMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00E4714 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00E4A98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 */

__int64 __fastcall xxxSetDialogSystemMenu(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 SysDesktopMenu; // rax
  _QWORD *v6[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  SmartObjStackRefBase<tagMENU>::Init(v6, 0LL);
  v2 = *(_QWORD *)(a1 + 24);
  v3 = 0;
  v7 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v6, *(_QWORD *)(v2 + 64));
  if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v6) )
  {
    SysDesktopMenu = xxxLoadSysDesktopMenu(*(_QWORD *)(a1 + 24) + 64LL, 48LL);
    v7 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v6, SysDesktopMenu);
  }
  LockWndMenuWorker(a1, 1u, v6);
  LOBYTE(v3) = (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v6) == 0;
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v6);
  return v3;
}
