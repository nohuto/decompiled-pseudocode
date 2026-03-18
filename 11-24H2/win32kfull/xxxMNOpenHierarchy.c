/*
 * XREFs of xxxMNOpenHierarchy @ 0x14009BE5C
 * Callers:
 *     xxxMNMouseMove @ 0x14006DA24 (xxxMNMouseMove.c)
 *     xxxMNButtonDown @ 0x14009BCCC (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x14009D560 (xxxMNButtonUp.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     xxxMNKeyDown @ 0x1402BE09C (xxxMNKeyDown.c)
 *     xxxMNKeyFilter @ 0x1402EB098 (xxxMNKeyFilter.c)
 * Callees:
 *     GetMonitorRectForWindow @ 0x1400260CC (GetMonitorRectForWindow.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1400322B0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     IntersectRect @ 0x140035778 (IntersectRect.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140040808 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x14004083C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     GetWindowDpiLastNotify @ 0x140045FC8 (GetWindowDpiLastNotify.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x140046B4C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     FindTimer @ 0x14005FED0 (FindTimer.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     MNGetpItemFromIndex @ 0x14006B178 (MNGetpItemFromIndex.c)
 *     MNIspItemValid @ 0x14006B1A4 (MNIspItemValid.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14006DDEC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x14006E488 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14006EFFC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14006F280 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14006F8FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?MNIsUAHMenu@@YAHPEAUtagMENU@@@Z @ 0x1400726AC (-MNIsUAHMenu@@YAHPEAUtagMENU@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x1400733C8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     xxxSetWindowPos @ 0x140076C44 (xxxSetWindowPos.c)
 *     xxxInheritWindowMonitor @ 0x14008C114 (xxxInheritWindowMonitor.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1400987D8 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     LockPopupMenu @ 0x14009AD54 (LockPopupMenu.c)
 *     xxxMNCloseHierarchy @ 0x14009E0A0 (xxxMNCloseHierarchy.c)
 *     xxxPlayEventSound @ 0x1400A4F40 (xxxPlayEventSound.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1400F7E44 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxDestroyWindow @ 0x14015EF90 (xxxDestroyWindow.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1401E1800 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 *     MNClearCachedPopupSizes @ 0x1401F815C (MNClearCachedPopupSizes.c)
 *     MNRefreshUAHCachedSizes @ 0x1401F81DC (MNRefreshUAHCachedSizes.c)
 *     ?GetMenuRightAlignHint@@YA_NXZ @ 0x14026BDD0 (-GetMenuRightAlignHint@@YA_NXZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x140282D2C (safe_cast_fnid_to_PMENUWND.c)
 *     xxxUserModeCallback @ 0x1402BCAD8 (xxxUserModeCallback.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall xxxMNOpenHierarchy(__int64 **a1, __int64 a2)
{
  char v2; // r15
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  struct tagTHREADINFO *v9; // r8
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rsi
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 *v20; // r14
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  void *v30; // rbx
  struct tagWND *Window; // rsi
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 *v38; // rax
  __int64 v39; // rcx
  _DWORD *v40; // rcx
  _DWORD *v41; // r8
  int v42; // eax
  _DWORD *v43; // rdx
  __int64 v44; // rcx
  struct tagWND *v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rax
  int v48; // ecx
  __int16 WindowDpiLastNotify; // dx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  int v53; // r10d
  int v54; // r15d
  int v55; // eax
  _DWORD *v56; // r9
  int v57; // edx
  int v58; // ecx
  __int64 *v59; // rax
  __int64 *v60; // rdx
  __int64 v61; // rdx
  int v62; // r8d
  LONG v63; // esi
  LONG v64; // r14d
  _DWORD *v65; // rcx
  unsigned int v66; // eax
  __int64 *v67; // rax
  int v68; // r9d
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rdx
  struct tagTHREADINFO *v72; // rax
  __int64 v73; // rax
  __int64 v74; // rdx
  struct tagTHREADINFO *v75; // rax
  struct tagTHREADINFO *v76; // rax
  __int64 v78; // rdx
  char v79; // [rsp+20h] [rbp-F0h]
  __int64 *v80; // [rsp+90h] [rbp-80h] BYREF
  __int64 v81; // [rsp+98h] [rbp-78h] BYREF
  __int64 v82; // [rsp+A8h] [rbp-68h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+B0h] [rbp-60h] BYREF
  __int64 v84; // [rsp+B8h] [rbp-58h]
  struct tagRECT v85; // [rsp+C0h] [rbp-50h] BYREF
  int v86[2]; // [rsp+D0h] [rbp-40h] BYREF
  int v87; // [rsp+D8h] [rbp-38h]
  int v88; // [rsp+DCh] [rbp-34h]
  ULONG_PTR v89[2]; // [rsp+E0h] [rbp-30h] BYREF
  __int64 v90; // [rsp+F0h] [rbp-20h]
  int v91[4]; // [rsp+F8h] [rbp-18h] BYREF
  __int64 v92[3]; // [rsp+108h] [rbp-8h] BYREF
  ULONG_PTR v93[4]; // [rsp+120h] [rbp+10h] BYREF
  _QWORD v94[2]; // [rsp+140h] [rbp+30h] BYREF
  _QWORD v95[2]; // [rsp+150h] [rbp+40h] BYREF
  _QWORD v96[2]; // [rsp+160h] [rbp+50h] BYREF
  _QWORD v97[2]; // [rsp+170h] [rbp+60h] BYREF
  __int128 v98; // [rsp+180h] [rbp+70h] BYREF
  __int64 v99; // [rsp+190h] [rbp+80h]
  __int64 v100; // [rsp+198h] [rbp+88h]
  __int128 v101; // [rsp+1C0h] [rbp+B0h]
  ULONG_PTR v102[2]; // [rsp+1F0h] [rbp+E0h] BYREF
  ULONG_PTR v103[2]; // [rsp+200h] [rbp+F0h] BYREF
  ULONG_PTR v104[2]; // [rsp+210h] [rbp+100h] BYREF
  ULONG_PTR v105[8]; // [rsp+220h] [rbp+110h] BYREF
  LONG v106; // [rsp+270h] [rbp+160h] BYREF
  unsigned int v107; // [rsp+280h] [rbp+170h] BYREF
  int v108; // [rsp+288h] [rbp+178h]

  v2 = 0;
  v5 = 0LL;
  memset_0(&v98, 0, 0x70uLL);
  v9 = PtiCurrent(v7, v6);
  v106 = 0;
  LODWORD(v10) = 0;
  v80 = (__int64 *)gSmartObjNullRef;
  LODWORD(v11) = 0;
  v107 = 0;
  v81 = *((_QWORD *)v9 + 209);
  *((_QWORD *)v9 + 209) = &v81;
  BugCheckParameter3 = -1LL;
  v89[0] = -1LL;
  v12 = *a1;
  v84 = 0LL;
  v89[1] = 0LL;
  v108 = 0;
  v13 = *v12;
  v90 = 0LL;
  v82 = 0LL;
  if ( *(_DWORD *)(v13 + 80) == -1 )
    goto LABEL_117;
  v14 = **a1;
  if ( *(_DWORD *)(v14 + 80) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 40) + 40LL) + 44LL) )
    goto LABEL_116;
  if ( (*(_DWORD *)**a1 & 0x20) == 0 )
    goto LABEL_6;
  if ( (*(_DWORD *)**a1 & 0x4000) == 0 )
  {
LABEL_116:
    Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v89, v14);
    Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(&BugCheckParameter3, v78);
LABEL_117:
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v80, v8);
    return 0LL;
  }
  xxxMNCloseHierarchy(**a1, a2);
LABEL_6:
  if ( (*(_DWORD *)**a1 & 0x2000) != 0 )
  {
    FindTimer(*(_QWORD *)(**a1 + 16), 65534LL, 0, 1, 0LL);
    *(_DWORD *)**a1 &= ~0x2000u;
  }
  v15 = MNGetpItemFromIndex(*(_QWORD *)(**a1 + 40), *(_DWORD *)(**a1 + 80));
  v18 = v15;
  if ( !v15 || !*(_QWORD *)(v15 + 16) )
    goto LABEL_111;
  v17 = **a1;
  if ( (*(_DWORD *)v17 & 0x800) == 0 )
  {
    v17 = **a1;
    if ( *(_QWORD *)(v17 + 8) )
    {
      Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v93, *(_QWORD *)(**a1 + 8));
      v90 = **(_QWORD **)(v18 + 16);
      xxxSendMessage(*(struct tagWND **)(**a1 + 8), 0x117u);
      v108 = 1;
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v93, v19);
      v2 = 0;
    }
  }
  if ( (*(_DWORD *)(a2 + 8) & 4) != 0 )
  {
    v16 = **a1;
    v17 = *(_QWORD *)(*(_QWORD *)(v16 + 40) + 40LL);
    if ( *(_DWORD *)(v16 + 80) >= *(_DWORD *)(v17 + 44) )
      goto LABEL_108;
    v16 = *(_QWORD *)(**a1 + 40);
    v20 = (__int64 *)(*(_QWORD *)(v16 + 88) + 96LL * *(int *)(**a1 + 80));
    v17 = *v20;
    if ( (*(_DWORD *)(*v20 + 4) & 3) != 0 || (v16 = v20[2]) == 0 || !*(_DWORD *)(*(_QWORD *)(v16 + 40) + 44LL) )
    {
      v5 = 0LL;
      goto LABEL_108;
    }
    v21 = *(_OWORD *)(v17 + 16);
    v98 = *(_OWORD *)v17;
    v22 = *(_OWORD *)(v17 + 64);
    v100 = *((_QWORD *)&v21 + 1);
    v101 = v22;
    v99 = v16;
    Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)v89, v16);
    if ( *(_QWORD *)(**a1 + 8) )
    {
      Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v102, *(_QWORD *)(**a1 + 8));
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 288LL) & 0xF) == 2
        || (v24 = *(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL), (*(_BYTE *)(v24 + 288) & 0xF) == 3) )
      {
        v25 = ValidateHmonitor(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 256LL));
        v10 = *(_QWORD *)GetMonitorRectForWindow((__int64)v92, v25, *(const struct tagWND **)(**a1 + 16));
        v11 = HIDWORD(v10);
      }
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v24);
      if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
      {
        v28 = PsGetCurrentProcessWin32Process(v27);
        v29 = v28;
        if ( v28 )
          v29 = -(__int64)(*(_QWORD *)v28 != 0LL) & v28;
        if ( (unsigned int)IsImmersiveAppRestricted(v29) )
          v2 = 1;
      }
      v30 = *(void **)(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL) + 32LL);
      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v93, 0LL);
      Window = (struct tagWND *)xxxCreateWindowEx(
                                  385,
                                  (wchar_t *)0x8000,
                                  0x8000LL,
                                  0LL,
                                  -2139095040,
                                  v10,
                                  v11,
                                  100,
                                  100,
                                  *(struct tagWND **)(**a1 + 8),
                                  (__int64)v93,
                                  v30,
                                  0LL,
                                  0,
                                  0xA00u,
                                  v2,
                                  0LL);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v93, v32);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v102, v33);
      if ( Window )
      {
        v34 = safe_cast_fnid_to_PMENUWND(Window);
        if ( v34
          && (SetOrClrWF(0, Window, 0x408u, 1),
              SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)&v80, *(_QWORD *)(v34 + 8)),
              *v80) )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(&v85, *(_QWORD *)(**a1 + 64));
          *(_DWORD *)*v80 |= 0x10000u;
          if ( **(_QWORD **)&v85.left )
          {
            *(_QWORD *)(*v80 + 72) = *(_QWORD *)(**(_QWORD **)&v85.left + 72LL);
            *(_DWORD *)*v80 |= 0x20000000u;
            v35 = *v80;
            *(_QWORD *)(**(_QWORD **)&v85.left + 72LL) = *v80;
          }
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v85, v35);
          SetOrClrWF(
            (*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) >> 6) & 1,
            Window,
            0xA40u,
            1);
          v36 = *v80 + 8;
          v94[1] = *(_QWORD *)(**a1 + 8);
          v94[0] = v36;
          HMAssignmentLock(v94, 0LL);
          SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v92, v99);
          LockPopupMenu((__int64)&v80, (__int64 *)(*v80 + 40), (__int64)v92);
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v92, v37);
          v38 = *a1;
          v95[1] = Window;
          v95[0] = *v38 + 24;
          HMAssignmentLock(v95, 0LL);
          *(_DWORD *)(**a1 + 84) = *(_DWORD *)(**a1 + 80);
          v39 = *v80 + 32;
          v96[1] = *(_QWORD *)(**a1 + 16);
          v96[0] = v39;
          HMAssignmentLock(v96, 0LL);
          *(_QWORD *)(*v80 + 64) = *(_QWORD *)(**a1 + 64);
          *(_DWORD *)*v80 ^= (*(_DWORD *)**a1 ^ *(_DWORD *)*v80) & 2;
          v40 = (_DWORD *)**a1;
          v41 = (_DWORD *)*v80;
          v42 = *(_DWORD *)*v80;
          v108 = 0;
          *v41 = v42 ^ (*v40 ^ v42) & 4;
          *(_DWORD *)*v80 ^= (*(_DWORD *)**a1 ^ *(_DWORD *)*v80) & 0x800;
          *(_DWORD *)*v80 |= 0x200000u;
          *(_DWORD *)*v80 ^= (*(_DWORD *)**a1 ^ *(_DWORD *)*v80) & 0x400000;
          *(_DWORD *)*v80 ^= (*(_DWORD *)**a1 ^ *(_DWORD *)*v80) & 0x10;
          v43 = (_DWORD *)*v80;
          *(_DWORD *)*v80 = *(_DWORD *)**a1 ^ (*(_DWORD *)*v80 ^ *(_DWORD *)**a1) & 0x7FFFFFFF;
          v44 = *(_QWORD *)(*(_QWORD *)(*v80 + 40) + 40LL);
          if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
            *(_DWORD *)(v44 + 40) |= 4u;
          else
            *(_DWORD *)(v44 + 40) &= ~4u;
          *(_DWORD *)*v80 &= ~0x1000u;
          if ( (unsigned int)MNIsUAHMenu(*(struct tagMENU **)(*v80 + 40), (__int64)v43)
            && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*v80 + 40) + 40LL) + 40LL) & 1) != 0 )
          {
            MNRefreshUAHCachedSizes(*(_QWORD *)(*v80 + 40));
          }
          Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)&BugCheckParameter3, (__int64)Window);
          if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)Window + 2) + 464LL) + 816LL) & 0x100000) != 0
            || (v45 = Window, (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 288LL) & 0xF) == 2)
            && (_bittest((const signed __int32 *)(*(_QWORD *)(**a1 + 16) + 380LL), 0x14u)
             || ((*(_DWORD *)**a1 & 2) != 0 || (*(_DWORD *)**a1 & 4) != 0)
             && (v45 = Window, (*(_DWORD *)(*(_QWORD *)(**a1 + 16) + 380LL) & 0x80000) != 0)) )
          {
            SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v92, *(_QWORD *)(*v80 + 40));
            v46 = 0LL;
            v45 = Window;
            while ( (unsigned int)v46 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v92[0] + 40LL) + 44LL) )
            {
              if ( (**(_DWORD **)(96LL * (int)v46 + *(_QWORD *)(*(_QWORD *)v92[0] + 88LL)) & 0x100) != 0
                || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v92[0] + 88LL) + 96LL * (int)v46) + 96LL) == -1LL )
              {
                goto LABEL_55;
              }
              v46 = (unsigned int)(v46 + 1);
            }
            xxxEnableChildWindowDpiMessageX(Window, 1);
LABEL_55:
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v92, v46);
          }
          v47 = *((_QWORD *)v45 + 5);
          v48 = *(_DWORD *)(v47 + 288) & 0xF;
          if ( v48 == 3 )
          {
            WindowDpiLastNotify = (*(_DWORD *)(v47 + 288) >> 8) & 0x1FF;
          }
          else if ( (*(_DWORD *)(v47 + 232) & 0x400) != 0 )
          {
            WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)v45);
          }
          else if ( !v48
                 && (v50 = *(_QWORD *)(*((_QWORD *)Window + 2) + 496LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v50 + 8) + 64LL) & 1) != 0 )
          {
            WindowDpiLastNotify = 96;
          }
          else
          {
            WindowDpiLastNotify = *(_WORD *)(*(_QWORD *)(*((_QWORD *)Window + 2) + 464LL) + 272LL);
          }
          if ( WindowDpiLastNotify != *(_WORD *)(*(_QWORD *)(*v80 + 40) + 76LL) )
          {
            *(_WORD *)(*(_QWORD *)(*v80 + 40) + 76LL) = WindowDpiLastNotify;
            MNClearCachedPopupSizes(*(_QWORD *)(*v80 + 40));
          }
          if ( (unsigned int)xxxSendMessage(v45, 0x1E2u) )
          {
            v52 = **a1;
            if ( *(_QWORD *)(v52 + 40) )
            {
              if ( MNIspItemValid(*(_QWORD *)(**a1 + 40), (__int64)v20) )
              {
                v54 = (unsigned __int16)v53 + 6;
                *(_DWORD *)**a1 |= 0x20u;
                v55 = xxxMNPositionHierarchy(
                        (_DWORD)a1,
                        (_DWORD)v20,
                        v54,
                        (unsigned int)HIWORD(v53) + 6,
                        (__int64)&v106,
                        (__int64)&v107,
                        (__int64)&v82);
                *(_DWORD *)*v80 ^= (*(_DWORD *)*v80 ^ (v55 << 23)) & 0xF800000;
                if ( (*(_DWORD *)**a1 & 1) != 0 && (_GetAsyncKeyState(1LL) & 0x8000u) != 0LL )
                {
                  v56 = (_DWORD *)*((_QWORD *)v45 + 5);
                  v85 = 0LL;
                  v57 = v56[23];
                  v91[2] = v56[24] + v106 - v56[22];
                  v58 = v107 - v57 + v56[25];
                  v91[0] = v106;
                  v91[3] = v58;
                  v91[1] = v107;
                  v59 = *a1;
                  v60 = *a1;
                  v86[0] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) + v101;
                  v61 = *v60;
                  v62 = DWORD1(v101) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*v59 + 16) + 40LL) + 92LL);
                  v87 = DWORD2(v101) + v86[0];
                  v86[1] = v62;
                  v88 = v62 + HIDWORD(v101);
                  SmartObjStackRefBase<tagPOPUPMENU>::Init(v103, v61);
                  MNGetPopupBoundsRect((__int64)v103, v82, &v85, 0);
                  if ( (unsigned int)IntersectRect(v91, v91, v86) )
                  {
                    v63 = v54 + v101 + DWORD2(v101) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL);
                    if ( v63 > v85.right )
                      v63 = 0;
                    v64 = v101 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - v54;
                    if ( v64 < v85.left )
                      v64 = 0;
                    if ( (GetMenuRightAlignHint() || (v98 & 0x2000) != 0) && v64 || !v63 )
                    {
                      v106 = v101 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - v54;
                      v65 = (_DWORD *)*v80;
                      v66 = *(_DWORD *)*v80 & 0xF07FFFFF | 0x1000000;
                    }
                    else
                    {
                      v106 = v101 + DWORD2(v101) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL);
                      v65 = (_DWORD *)*v80;
                      v66 = *(_DWORD *)*v80 & 0xF07FFFFF | 0x800000;
                    }
                    *v65 = v66;
                    if ( v106 <= v85.left )
                    {
                      v106 = v87;
                      *(_DWORD *)*v80 = *(_DWORD *)*v80 & 0xF07FFFFF | 0x1000000;
                    }
                  }
                }
                if ( (*(_DWORD *)**a1 & 1) != 0 )
                {
                  if ( (*(_DWORD *)**a1 & 0x400) == 0 )
                    *(_DWORD *)*v80 |= 0x8000000u;
                  if ( (*(_DWORD *)**a1 & 0x10) != 0 || (*(_DWORD *)*v80 & 0xF800000) == 0x1000000 )
                    *(_DWORD *)*v80 |= 0x10u;
                  *(_DWORD *)**a1 |= 0x400u;
                }
                else
                {
                  *(_DWORD *)*v80 |= 0x8000000u;
                  if ( (*(_DWORD *)*v80 & 0xF800000) == 0x1000000 )
                    *(_DWORD *)*v80 |= 0x10u;
                }
                v67 = *a1;
                v97[1] = v45;
                v97[0] = *(_QWORD *)(*v67 + 64) + 56LL;
                HMAssignmentLock(v97, 0LL);
                if ( *(_QWORD *)(*v80 + 8) )
                {
                  Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v104, *(_QWORD *)(*v80 + 8));
                  xxxInternalUpdateWindow(*(struct tagWND **)(*v80 + 8), 1u);
                  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v104, v69);
                }
                if ( (*(_DWORD *)(a2 + 8) & 0x400) != 0 )
                {
                  v82 = *(_QWORD *)v45;
                  xxxUserModeCallback(100, (unsigned int)&v82, 8, v68, v79);
                }
                xxxPlayEventSound(5u);
                if ( (W32GetCurrentThreadDpiAwarenessContext(v70) & 0xF) == 2 )
                  *(_DWORD *)(*((_QWORD *)v45 + 5) + 288LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL)
                                                                        + 288LL);
                xxxSetWindowPos(
                  v45,
                  ((*(_DWORD *)(a2 + 8) & 0x100) != 0) - 1LL,
                  (unsigned int)v106,
                  v107,
                  0,
                  0,
                  ~(unsigned __int8)(*(_DWORD *)(a2 + 8) >> 4) & 0x10 | 0x241);
                xxxInheritWindowMonitor(v45, *(struct tagWND **)(**a1 + 16), 1);
                xxxWindowEvent(6u, v45, -4, 0, 0);
                if ( *(_DWORD *)(a2 + 20) == 1 )
                  xxxSendMessage(v45, 0x1E5u);
                xxxInternalUpdateWindow(v45, 1u);
                v5 = (__int64)v45;
                Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(&BugCheckParameter3, v71);
                goto LABEL_33;
              }
            }
          }
          v72 = PtiCurrent(v52, v51);
          v73 = Win32HM_UnlockFromThread<1>((ULONG_PTR)v72, &BugCheckParameter3);
          BugCheckParameter3 = -1LL;
          v84 = 0LL;
          if ( v73 )
            xxxDestroyWindow(v45);
          HMAssignmentUnlock(**a1 + 24);
        }
        else
        {
          xxxDestroyWindow(Window);
        }
      }
      v5 = 0LL;
    }
    else
    {
      v5 = 0LL;
    }
LABEL_33:
    Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(v89, v23);
    goto LABEL_108;
  }
  v5 = -1LL;
LABEL_108:
  if ( v108 )
  {
    v17 = **a1;
    if ( *(_QWORD *)(v17 + 8) )
    {
      Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v105, *(_QWORD *)(**a1 + 8));
      xxxSendMessage(*(struct tagWND **)(**a1 + 8), 0x125u);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v105, v74);
    }
  }
LABEL_111:
  if ( v89[0] != -1LL )
  {
    v75 = PtiCurrent(v17, v16);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v75, v89);
  }
  if ( BugCheckParameter3 != -1LL )
  {
    v76 = PtiCurrent(v17, v16);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v76, &BugCheckParameter3);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v80, v16);
  return v5;
}
