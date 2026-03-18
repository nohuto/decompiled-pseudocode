/*
 * XREFs of xxxMNStartMenu @ 0x14009A980
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x140099644 (xxxTrackPopupMenuEx.c)
 *     xxxMNLoop @ 0x14009B5E0 (xxxMNLoop.c)
 *     xxxMNKeyFilter @ 0x1402EB098 (xxxMNKeyFilter.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x140046B4C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140070890 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140070D94 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140073680 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     LockPopupMenu @ 0x14009AD54 (LockPopupMenu.c)
 *     xxxGetSysMenu @ 0x1401B0B74 (xxxGetSysMenu.c)
 *     ??1Win32HMThreadLockAlwaysMenuNoModify@@QEAA@XZ @ 0x1401B1700 (--1Win32HMThreadLockAlwaysMenuNoModify@@QEAA@XZ.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1401B1824 (xxxMNRecomputeBarIfNeeded.c)
 *     ??0Win32HMThreadLockAlwaysMenuNoModify@@QEAA@PEAUtagMENU@@@Z @ 0x1401E0D78 (--0Win32HMThreadLockAlwaysMenuNoModify@@QEAA@PEAUtagMENU@@@Z.c)
 *     MNPositionSysMenu @ 0x140202B2C (MNPositionSysMenu.c)
 *     xxxMNSetCapture @ 0x14026533C (xxxMNSetCapture.c)
 *     xxxMNReleaseCapture @ 0x1402688C4 (xxxMNReleaseCapture.c)
 *     ?xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z @ 0x1402B3F28 (-xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z.c)
 *     xxxClientLoadOLE @ 0x1402E7C98 (xxxClientLoadOLE.c)
 */

_BOOL8 __fastcall xxxMNStartMenu(unsigned int ***a1, __int64 a2, int a3)
{
  __int64 v6; // rdx
  struct tagWND *v7; // rsi
  unsigned int v8; // ecx
  struct tagMENU *InitMenuParam; // rax
  __int64 v10; // rdx
  bool v12; // zf
  __int64 SysMenu; // rax
  struct tagMENU *v14; // rax
  __int64 v15; // rdx
  int v16; // r8d
  unsigned int *v17; // rcx
  BOOL v18; // ebx
  __int64 v19; // rdx
  struct tagTHREADINFO *v20; // rax
  __int64 v21; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v23[16]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v24[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v25; // [rsp+60h] [rbp-20h]
  __int64 v26[3]; // [rsp+68h] [rbp-18h] BYREF
  int v27; // [rsp+A0h] [rbp+20h] BYREF

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v24, a2);
  if ( (***a1 & 0x8000) != 0 || !*((_QWORD *)**a1 + 1) )
    goto LABEL_6;
  v7 = (struct tagWND *)*((_QWORD *)**a1 + 1);
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)v7);
  *(_DWORD *)(a2 + 8) |= 1u;
  *(_DWORD *)(a2 + 20) = a3;
  v8 = ((unsigned __int16)_GetKeyState(1LL) >> 9) & 0x7FFFC0 | *(_DWORD *)(a2 + 8) & 0xFFFFFFBF;
  *(_DWORD *)(a2 + 8) = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(v8 >> 3)) & 8;
  xxxMNSetCapture(a1, a2);
  xxxSendMessage(v7, 0x20u);
  if ( (***a1 & 1) != 0 )
  {
    v27 = 0;
    InitMenuParam = xxxGetInitMenuParam(v7, &v27);
    v25 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v24, (__int64)InitMenuParam);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v24) )
    {
      *(_DWORD *)(a2 + 8) &= ~1u;
      xxxMNReleaseCapture(a2);
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v10);
LABEL_6:
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v24, v6);
      return 0LL;
    }
    LockPopupMenu(a1, **a1 + 10, v24);
    v12 = v27 == 0;
    ***a1 = (v27 != 0 ? 4 : 0) | ***a1 & 0xFFFFFFFB;
    if ( v12 )
    {
      SysMenu = xxxGetSysMenu(v7, 0LL);
      v25 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=((__int64)v24, SysMenu);
      LockPopupMenu(a1, **a1 + 12, v24);
    }
  }
  *(_DWORD *)(a2 + 8) ^= ((unsigned __int8)*(_DWORD *)(a2 + 8) ^ (unsigned __int8)(***a1 >> 1)) & 2;
  if ( (***a1 & 0x800) == 0 )
  {
    if ( (***a1 & 8) != 0 && (***a1 & 4) != 0 )
      v14 = xxxGetInitMenuParam(v7, 0LL);
    else
      v14 = (struct tagMENU *)*((_QWORD *)**a1 + 5);
    v25 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v24, (__int64)v14);
    SmartObjStackRef<tagMENU>::operator==((__int64)v24);
    xxxSendMessage(v7, 0x116u);
  }
  if ( (***a1 & 8) == 0 )
  {
    if ( (***a1 & 4) == 0 )
    {
      if ( (***a1 & 1) == 0 || !*((_QWORD *)**a1 + 5) )
        goto LABEL_21;
      Win32HMThreadLockAlwaysMenuNoModify::Win32HMThreadLockAlwaysMenuNoModify(
        (Win32HMThreadLockAlwaysMenuNoModify *)v23,
        *((struct tagMENU **)**a1 + 5));
      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v26, *((_QWORD *)**a1 + 5));
      xxxMNRecomputeBarIfNeeded(v7, v26);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v26, v15);
      Win32HMThreadLockAlwaysMenuNoModify::~Win32HMThreadLockAlwaysMenuNoModify((Win32HMThreadLockAlwaysMenuNoModify *)v23);
    }
    MNPositionSysMenu(v7);
  }
LABEL_21:
  if ( (***a1 & 0x8000) == 0 && *((_QWORD *)**a1 + 5) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)**a1 + 5) + 40LL) + 40LL) & 0x40000000) != 0 )
      *(_DWORD *)(a2 + 8) |= 0x100u;
    if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)**a1 + 5) + 40LL) + 40LL) & 0x20000000) != 0
      && (int)xxxClientLoadOLE() >= 0 )
    {
      *(_DWORD *)(a2 + 8) |= 0x400u;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)**a1 + 5) + 40LL) + 40LL) & 0x10000000) != 0 )
      *(_DWORD *)(a2 + 8) |= 0x800u;
    if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)**a1 + 5) + 40LL) + 40LL) & 0x8000000) != 0 )
      *(_DWORD *)(a2 + 8) |= 0x20000u;
  }
  if ( (***a1 & 4) != 0 )
    v16 = -1;
  else
    v16 = (***a1 & 1) != 0 ? 0xFFFFFFFD : 0;
  xxxWindowEvent(4u, v7, v16, 0, 0);
  v17 = **a1;
  v18 = (*v17 & 0x8000) == 0;
  v20 = PtiCurrent((__int64)v17, v19);
  Win32HM_UnlockFromThread<1>((ULONG_PTR)v20, BugCheckParameter3);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v24, v21);
  return v18;
}
