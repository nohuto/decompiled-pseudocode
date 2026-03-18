/*
 * XREFs of UnlockPopupMenu @ 0x1C0216198
 * Callers:
 *     MNFreePopup @ 0x1C01FEBC4 (MNFreePopup.c)
 *     xxxMNKeyDown @ 0x1C0217788 (xxxMNKeyDown.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C007BA50 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00E4714 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?UnlockPopupMenuWindow@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z @ 0x1C021516C (-UnlockPopupMenuWindow@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall UnlockPopupMenu(__int64 a1, __int64 *a2)
{
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !*a2 )
    return 0LL;
  SmartObjStackRefBase<tagMENU>::Init(v4, *a2);
  v4[2] = 0LL;
  UnlockPopupMenuWindow((__int64)v4);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v4);
  return HMAssignmentUnlock(a2);
}
