/*
 * XREFs of LockPopupMenu @ 0x1C0215F08
 * Callers:
 *     xxxMNStartMenu @ 0x1C01FF3DC (xxxMNStartMenu.c)
 *     xxxMNKeyDown @ 0x1C0217788 (xxxMNKeyDown.c)
 *     xxxMNOpenHierarchy @ 0x1C0218340 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0219F60 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C0231EEC (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C007BA50 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00E4714 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00E4A98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?UnlockPopupMenuWindow@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z @ 0x1C021516C (-UnlockPopupMenuWindow@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall LockPopupMenu(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD v9[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v10[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v11[4]; // [rsp+40h] [rbp-28h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v11, *a2);
  v11[2] = 0LL;
  UnlockPopupMenuWindow((__int64)v11);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v11);
  if ( !SmartObjStackRef<tagMENU>::operator==(a3) )
  {
    v6 = **(_QWORD **)a3 + 80LL;
    v9[1] = *(_QWORD *)(**(_QWORD **)a1 + 8LL);
    v9[0] = v6;
    HMAssignmentLock(v9, 0LL);
  }
  v7 = *(_QWORD *)(a3 + 16);
  if ( !v7 )
    v7 = **(_QWORD **)a3;
  v10[0] = a2;
  v10[1] = v7;
  return HMAssignmentLock(v10, 1LL);
}
