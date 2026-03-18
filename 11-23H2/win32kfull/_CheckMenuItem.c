/*
 * XREFs of _CheckMenuItem @ 0x1C0221680
 * Callers:
 *     NtUserCheckMenuItem @ 0x1C01CCD70 (NtUserCheckMenuItem.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C007BA50 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00E4714 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?MenuItemState@@YAKAEBV?$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z @ 0x1C022145C (-MenuItemState@@YAKAEBV-$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z.c)
 */

__int64 __fastcall CheckMenuItem(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v5; // ebx
  _QWORD v7[5]; // [rsp+30h] [rbp-28h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v7, a1);
  v7[2] = 0LL;
  v5 = MenuItemState((__int64)v7, a2, a3, 8, 0LL);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v7);
  return v5;
}
