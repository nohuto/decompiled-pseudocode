/*
 * XREFs of UnlockPopupMenu @ 0x14026C05C
 * Callers:
 *     MNFreePopup @ 0x14024F1F0 (MNFreePopup.c)
 *     xxxMNKeyDown @ 0x1402BE09C (xxxMNKeyDown.c)
 * Callees:
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x140046B4C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?UnlockPopupMenuWindow@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z @ 0x14026CBB8 (-UnlockPopupMenuWindow@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall UnlockPopupMenu(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !*a2 )
    return 0LL;
  v4 = *(_QWORD *)(**(_QWORD **)a1 + 8LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v6, *a2);
  UnlockPopupMenuWindow(v6, v4);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v6, v5);
  return HMAssignmentUnlock(a2);
}
