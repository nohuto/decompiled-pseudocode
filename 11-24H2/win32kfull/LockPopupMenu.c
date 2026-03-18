/*
 * XREFs of LockPopupMenu @ 0x14009AD54
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x140099644 (xxxTrackPopupMenuEx.c)
 *     xxxMNStartMenu @ 0x14009A980 (xxxMNStartMenu.c)
 *     xxxMNOpenHierarchy @ 0x14009BE5C (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     xxxMNKeyDown @ 0x1402BE09C (xxxMNKeyDown.c)
 * Callees:
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x140046B4C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140070890 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?UnlockPopupMenuWindow@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z @ 0x14026CBB8 (-UnlockPopupMenuWindow@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall LockPopupMenu(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD v11[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13[4]; // [rsp+40h] [rbp-28h] BYREF

  v6 = *(_QWORD *)(**(_QWORD **)a1 + 8LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v13, *a2);
  UnlockPopupMenuWindow(v13, v6);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v13, v7);
  if ( !SmartObjStackRef<tagMENU>::operator==(a3) )
  {
    v8 = **(_QWORD **)a3 + 80LL;
    v11[1] = *(_QWORD *)(**(_QWORD **)a1 + 8LL);
    v11[0] = v8;
    HMAssignmentLock(v11, 0LL);
  }
  v9 = *(_QWORD *)(a3 + 16);
  if ( !v9 )
    v9 = **(_QWORD **)a3;
  v12[0] = a2;
  v12[1] = v9;
  return HMAssignmentLock(v12, 1LL);
}
