/*
 * XREFs of xxxTrackPopupMenuEx @ 0x140099644
 * Callers:
 *     NtUserTrackPopupMenuEx @ 0x1401B1250 (NtUserTrackPopupMenuEx.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     xxxDoScrollMenu @ 0x1402E6618 (xxxDoScrollMenu.c)
 * Callees:
 *     GetMonitorRectForWindow @ 0x1400260CC (GetMonitorRectForWindow.c)
 *     _MonitorFromPoint @ 0x140027270 (_MonitorFromPoint.c)
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     GetWindowDpiLastNotify @ 0x140045FC8 (GetWindowDpiLastNotify.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     FindTimer @ 0x14005FED0 (FindTimer.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140063510 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14006EFFC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14006F280 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNAnimate @ 0x14006F328 (MNAnimate.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x1400733C8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSetWindowPos @ 0x140076C44 (xxxSetWindowPos.c)
 *     xxxInheritWindowMonitor @ 0x14008C114 (xxxInheritWindowMonitor.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z @ 0x140092EAC (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z.c)
 *     SubtractRect @ 0x1400974EC (SubtractRect.c)
 *     GetMonitorMenuRectForWindow @ 0x1400989C8 (GetMonitorMenuRectForWindow.c)
 *     FindBestPos @ 0x140098F94 (FindBestPos.c)
 *     ?IsWindowShellCloakedComponentUIAware@@YA_NPEBUtagWND@@_N@Z @ 0x14009A45C (-IsWindowShellCloakedComponentUIAware@@YA_NPEBUtagWND@@_N@Z.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x14009A4C4 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x14009A5A4 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     xxxMNEndMenuState @ 0x14009A5F0 (xxxMNEndMenuState.c)
 *     MNAllocMenuState @ 0x14009A738 (MNAllocMenuState.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x14009A8C4 (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     xxxMNStartMenu @ 0x14009A980 (xxxMNStartMenu.c)
 *     LockPopupMenu @ 0x14009AD54 (LockPopupMenu.c)
 *     xxxMNLoop @ 0x14009B5E0 (xxxMNLoop.c)
 *     xxxPlayEventSound @ 0x1400A4F40 (xxxPlayEventSound.c)
 *     xxxDestroyWindow @ 0x14015EF90 (xxxDestroyWindow.c)
 *     ?IsChildWindowDpiMessageEnabledX@@YA_NPEAUtagWND@@@Z @ 0x140194314 (-IsChildWindowDpiMessageEnabledX@@YA_NPEAUtagWND@@@Z.c)
 *     ?IsNonClientDpiScalingEnabledX@@YA_NPEAUtagWND@@@Z @ 0x140194494 (-IsNonClientDpiScalingEnabledX@@YA_NPEAUtagWND@@@Z.c)
 *     ?IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z @ 0x14019E09C (-IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1401E1800 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 *     MNClearCachedPopupSizes @ 0x1401F815C (MNClearCachedPopupSizes.c)
 *     xxxMNReleaseCapture @ 0x1402688C4 (xxxMNReleaseCapture.c)
 *     ?GetMenuRightAlignHint@@YA_NXZ @ 0x14026BDD0 (-GetMenuRightAlignHint@@YA_NXZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x140282D2C (safe_cast_fnid_to_PMENUWND.c)
 *     xxxUserModeCallback @ 0x1402BCAD8 (xxxUserModeCallback.c)
 */

__int64 __fastcall xxxTrackPopupMenuEx(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r14d
  struct tagTHREADINFO *v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // esi
  __int64 v10; // r12
  struct tagTHREADINFO *v11; // rax
  struct tagTHREADINFO *v12; // rdi
  __int64 v13; // rbx
  int v14; // r15d
  __int16 KeyState; // ax
  _BOOL8 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // ebx
  void *v23; // rdi
  __int64 Window; // rdi
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // rdx
  _QWORD **v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // r14d
  int v35; // ebx
  struct tagTHREADINFO *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  struct tagTHREADINFO *v40; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  struct tagTHREADINFO *v44; // rax
  __int64 v45; // rdx
  _DWORD *v46; // rdx
  unsigned int v47; // ecx
  bool v48; // cf
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  int v52; // r9d
  __int64 v53; // rax
  int v54; // ecx
  __int16 WindowDpiLastNotify; // dx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 UserSessionState; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rcx
  struct tagMONITOR *v64; // r9
  __int64 v65; // rcx
  int BestPos; // ebx
  struct tagWND *TopLevelHostForComponent; // rbx
  unsigned int i; // edx
  __int64 v69; // rax
  int v70; // ecx
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rax
  int v74; // eax
  bool v75; // al
  __int64 v76; // rdx
  __int64 v77; // rax
  _QWORD *v78; // rcx
  char v79; // [rsp+20h] [rbp-F0h]
  __int64 v80; // [rsp+90h] [rbp-80h] BYREF
  __int64 v81; // [rsp+98h] [rbp-78h] BYREF
  int v82; // [rsp+A0h] [rbp-70h]
  int v83; // [rsp+A4h] [rbp-6Ch]
  int v84[2]; // [rsp+A8h] [rbp-68h]
  int v85[2]; // [rsp+B0h] [rbp-60h] BYREF
  int v86; // [rsp+B8h] [rbp-58h]
  struct tagMONITOR *v87; // [rsp+C0h] [rbp-50h]
  __int64 v88; // [rsp+C8h] [rbp-48h] BYREF
  __int64 v89; // [rsp+D0h] [rbp-40h] BYREF
  __int64 v90; // [rsp+D8h] [rbp-38h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+E0h] [rbp-30h] BYREF
  __int64 v92[2]; // [rsp+F0h] [rbp-20h] BYREF
  __int128 v93; // [rsp+100h] [rbp-10h] BYREF
  ULONG_PTR v94[2]; // [rsp+110h] [rbp+0h] BYREF
  _QWORD v95[2]; // [rsp+120h] [rbp+10h] BYREF
  __int64 v96[3]; // [rsp+130h] [rbp+20h] BYREF
  _BYTE v97[16]; // [rsp+148h] [rbp+38h] BYREF
  struct tagRECT v98; // [rsp+158h] [rbp+48h] BYREF

  v6 = a2;
  v7 = PtiCurrent(a1, a2);
  v9 = 0;
  v80 = gSmartObjNullRef;
  v90 = 0LL;
  v10 = 0LL;
  v81 = *((_QWORD *)v7 + 209);
  *((_QWORD *)v7 + 209) = &v81;
  v85[0] = 0;
  v82 = 0;
  *(_OWORD *)v92 = 0LL;
  if ( a6 )
  {
    if ( *(_DWORD *)a6 != 20 )
      goto LABEL_83;
    *(_OWORD *)v92 = *(_OWORD *)(a6 + 4);
  }
  v11 = PtiCurrent((__int64)&v81, v8);
  v12 = v11;
  v87 = v11;
  if ( v11 != *(struct tagTHREADINFO **)(a5 + 16) )
  {
LABEL_83:
    v70 = 87;
    goto LABEL_85;
  }
  v13 = *((_QWORD *)v11 + 81);
  v14 = 1;
  if ( v13 )
  {
    if ( (v6 & 1) != 0 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)&v80, *(_QWORD *)v13);
      v26 = *(_QWORD *)(*(_QWORD *)v80 + 8LL);
      if ( (*(_DWORD *)(v13 + 8) & 4) == 0
        || (**(_DWORD **)v80 & 0x8000) != 0
        || !v26
        || v26 != a5
        || *(_QWORD *)(v13 + 32) != *(_QWORD *)(v26 + 16) )
      {
        goto LABEL_86;
      }
      MNAnimate((__int64 *)v13, 0LL);
      v71 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v80 + 56LL));
      if ( v71 )
        v72 = *(_QWORD *)(v71 + 8);
      else
        v72 = 0LL;
      SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)&v80, v72);
      if ( *(_QWORD *)v80 && (**(_DWORD **)v80 & 0x2000) != 0 )
      {
        FindTimer(*(_QWORD *)(*(_QWORD *)v80 + 16LL), 65534LL, 0, 1, 0LL);
        **(_DWORD **)v80 &= ~0x2000u;
      }
      if ( (*(_DWORD *)(v13 + 8) & 0x100) == 0 )
        *(_DWORD *)(*((_QWORD *)v12 + 59) + 436LL) &= ~0x100000u;
      goto LABEL_4;
    }
    v70 = 1446;
LABEL_85:
    UserSetLastError(v70);
    goto LABEL_86;
  }
LABEL_4:
  v83 = v6 & 2;
  if ( (v6 & 2) != 0 )
  {
    v86 = (unsigned __int16)_GetKeyState(2LL) >> 15;
  }
  else
  {
    KeyState = _GetKeyState(1LL);
    v16 = KeyState < 0;
    v86 = KeyState < 0;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext(v16) & 0xF) == 2
    || (W32GetCurrentThreadDpiAwarenessContext(v17) & 0xF) == 3 )
  {
    *(_QWORD *)v85 = __PAIR64__(a4, a3);
    v18 = *(_QWORD *)(MonitorFromPoint(__SPAIR64__(a4, a3), 2u, 0) + 40);
    v85[0] = *(_DWORD *)(v18 + 28);
    v82 = *(_DWORD *)(v18 + 32);
  }
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v18);
  if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
    goto LABEL_10;
  v73 = PsGetCurrentProcessWin32Process(v20);
  if ( v73 )
    v73 &= -(__int64)(*(_QWORD *)v73 != 0LL);
  v74 = IsImmersiveAppRestricted(v73);
  v84[0] = 1;
  if ( !v74 )
LABEL_10:
    v84[0] = 0;
  v21 = *(_QWORD *)(a5 + 40);
  v22 = *(_DWORD *)(v21 + 236);
  v23 = *(void **)(v21 + 32);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v96, 0LL);
  Window = xxxCreateWindowEx(
             385,
             (wchar_t *)0x8000,
             0x8000LL,
             0LL,
             -2139095040,
             v85[0],
             v82,
             100,
             100,
             (struct tagWND *)(a5 & -(__int64)((*(_DWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 40LL) + 40LL) & 0x40000000) != 0)),
             (__int64)v96,
             v23,
             0LL,
             v22,
             0xA00u,
             v84[0],
             0LL);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v96, v25);
  if ( Window )
  {
    *(_QWORD *)v84 = safe_cast_fnid_to_PMENUWND(Window);
    if ( !*(_QWORD *)v84 )
    {
      xxxDestroyWindow((struct tagWND *)Window);
LABEL_33:
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v80, v38);
      return v9;
    }
    v27 = (__int64)v87;
    Win32HM_LockIntoThread<0>((__int64)v87, Window, BugCheckParameter3);
    if ( (W32GetCurrentThreadDpiAwarenessContext(v28) & 0xF) == 2 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v27 + 464) + 816LL) & 0x100000) != 0
        || ((v6 & 0x200) == 0
          ? (!IsTopLevelWindow(a5)
           ? (v75 = IsChildWindowDpiMessageEnabledX((struct tagWND *)a5))
           : (v75 = IsWindowBroadcastingDpiToChildrenX((struct tagWND *)a5)))
          : (v75 = IsNonClientDpiScalingEnabledX((struct tagWND *)a5)),
            v75) )
      {
        xxxEnableChildWindowDpiMessageX((struct tagWND *)Window, 1);
      }
      v30 = (_QWORD **)a1;
    }
    else
    {
      v30 = (_QWORD **)a1;
      if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 40LL) + 40LL) & 0x40000000) == 0 )
        xxxInheritWindowMonitor((struct tagWND *)Window, (struct tagWND *)a5, 0);
    }
    v31 = (__int64)*v30;
    *(_QWORD *)v85 = 0LL;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v31 + 40LL) + 40LL) & 0x40000000) == 0 )
    {
      TopLevelHostForComponent = (struct tagWND *)Window;
      if ( (!(unsigned int)CoreWindowProp::IsComponent((const struct tagWND *)Window, v29)
         || (TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent((const struct tagWND *)Window)) != 0LL)
        && (*(_BYTE *)(*((_QWORD *)TopLevelHostForComponent + 5) + 233LL) & 0x20) != 0
        && !IsWindowShellCloakedComponentUIAware((const struct tagWND *)a5, 0) )
      {
        zzzSetWindowCompositionCloak(Window, 0LL);
      }
      v30 = (_QWORD **)a1;
    }
    if ( (((v6 & 0x8000) == 0) & (unsigned __int8)~(*(_BYTE *)(*(_QWORD *)(a5 + 40) + 26LL) >> 6)) == 0 )
      SetOrClrWF(1, (struct tagWND *)Window, 0xA40u, 1);
    SetOrClrWF(0, (struct tagWND *)Window, 0x408u, 1);
    SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)&v80, *(_QWORD *)(*(_QWORD *)v84 + 8LL));
    if ( !*(_QWORD *)v80 )
      goto LABEL_20;
    v95[1] = a5;
    v95[0] = *(_QWORD *)v80 + 8LL;
    HMAssignmentLock(v95, 0LL);
    LockPopupMenu(&v80, *(_QWORD *)v80 + 40LL, v30);
    *((_QWORD *)&v93 + 1) = Window;
    *(_QWORD *)&v93 = *(_QWORD *)v80 + 56LL;
    HMAssignmentLock(&v93, 0LL);
    v44 = PtiCurrent(v43, v42);
    v88 = gSmartObjNullRef;
    v89 = *((_QWORD *)v44 + 209);
    *((_QWORD *)v44 + 209) = &v89;
    **(_DWORD **)v80 |= 0x10000u;
    if ( *(_QWORD *)v88 )
    {
      *(_QWORD *)(*(_QWORD *)v80 + 72LL) = *(_QWORD *)(*(_QWORD *)v88 + 72LL);
      **(_DWORD **)v80 |= 0x20000000u;
      v45 = *(_QWORD *)v80;
      *(_QWORD *)(*(_QWORD *)v88 + 72LL) = *(_QWORD *)v80;
    }
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v88, v45);
    *(_QWORD *)(*(_QWORD *)v80 + 64LL) = *(_QWORD *)v80;
    **(_DWORD **)v80 |= 8u;
    v46 = *(_DWORD **)v80;
    v47 = (v86 << 9) | **(_DWORD **)v80 & 0xFFFFFDFF;
    v48 = v83 != 0;
    v83 = -v83;
    *v46 = v47;
    **(_DWORD **)v80 = **(_DWORD **)v80 & 0xFFFFFFBF | (v48 ? 0x40 : 0);
    if ( GetMenuRightAlignHint() || (*(_DWORD *)(*(_QWORD *)(**v30 + 40LL) + 40LL) & 0x20) != 0 )
      **(_DWORD **)v80 |= 0x10u;
    **(_DWORD **)v80 = **(_DWORD **)v80 & 0xFFFFF7FF | (16 * (v6 & 0x80));
    v83 = v6 & 0x100;
    if ( (v6 & 0x100) != 0 )
      **(_DWORD **)v80 |= 0x100u;
    **(_DWORD **)v80 = **(_DWORD **)v80 & 0xFFFFFFFB | (v6 >> 7) & 4;
    v10 = MNAllocMenuState(&v80);
    if ( v10 )
    {
      if ( PtiCurrent(v50, v49) == *(struct tagTHREADINFO **)(v10 + 32) )
      {
        ++*(_DWORD *)(v10 + 40);
        v51 = v10;
      }
      else
      {
        v51 = 0LL;
      }
      *(_QWORD *)v85 = v51;
      if ( (**(_DWORD **)v80 & 0x800) == 0 )
        xxxSendMessage((struct tagWND *)a5, 0x211u);
      if ( (unsigned int)xxxMNStartMenu(&v80, v10, 0xFFFFFFFFLL) )
      {
        if ( (*(_DWORD *)(v10 + 8) & 0x400) != 0 )
        {
          v88 = *(_QWORD *)Window;
          xxxUserModeCallback(100, (unsigned int)&v88, 8, v52, v79);
        }
        if ( (**(_DWORD **)v80 & 0x800) == 0 && *(_QWORD *)(*(_QWORD *)v80 + 8LL) )
        {
          Win32HM_LockIntoThread<0>((__int64)v87, *(_QWORD *)(*(_QWORD *)v80 + 8LL), v94);
          xxxSendMessage(*(struct tagWND **)(*(_QWORD *)v80 + 8LL), 0x117u);
          **(_DWORD **)v80 |= 0x200000u;
          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v94, v76);
        }
        if ( (*(_DWORD *)(Window + 380) & 0x100000) != 0 )
        {
          for ( i = 0; i < *(_DWORD *)(*(_QWORD *)(**v30 + 40LL) + 44LL); ++i )
          {
            if ( (**(_DWORD **)(96LL * (int)i + *(_QWORD *)(**v30 + 88LL)) & 0x100) != 0
              || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**v30 + 88LL) + 96LL * (int)i) + 96LL) == -1LL )
            {
              xxxEnableChildWindowDpiMessageX((struct tagWND *)Window, 0);
              break;
            }
          }
        }
        v53 = *(_QWORD *)(Window + 40);
        v54 = *(_DWORD *)(v53 + 288) & 0xF;
        if ( v54 == 3 )
        {
          WindowDpiLastNotify = (*(_DWORD *)(v53 + 288) >> 8) & 0x1FF;
        }
        else if ( (*(_DWORD *)(v53 + 232) & 0x400) != 0 )
        {
          WindowDpiLastNotify = GetWindowDpiLastNotify(Window);
        }
        else if ( !v54
               && (v77 = *(_QWORD *)(*(_QWORD *)(Window + 16) + 496LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v77 + 8) + 64LL) & 1) != 0 )
        {
          WindowDpiLastNotify = 96;
        }
        else
        {
          WindowDpiLastNotify = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(Window + 16) + 464LL) + 272LL);
        }
        if ( WindowDpiLastNotify != *(_WORD *)(**v30 + 76LL) )
        {
          *(_WORD *)(**v30 + 76LL) = WindowDpiLastNotify;
          v78 = v30[2];
          if ( !v78 )
            v78 = (_QWORD *)**v30;
          MNClearCachedPopupSizes(v78);
        }
        v88 = xxxSendMessage((struct tagWND *)Window, 0x1E2u);
        if ( (_DWORD)v88 )
        {
          UserSessionState = W32GetUserSessionState(v57, v56);
          if ( (unsigned int)CInputGlobals::GetLastInputType(*(_QWORD *)(UserSessionState + 3064)) == 1
            || (v69 = W32GetUserSessionState(v60, v59),
                (unsigned int)CInputGlobals::GetLastInputType(*(_QWORD *)(v69 + 3064)) == 4) )
          {
            *(_DWORD *)(v10 + 8) |= 0x20u;
            *(_DWORD *)(*(_QWORD *)(**v30 + 40LL) + 40LL) |= 4u;
          }
          else
          {
            *(_DWORD *)(*(_QWORD *)(**v30 + 40LL) + 40LL) &= ~4u;
          }
          v84[0] = (unsigned __int16)v88 + 6;
          v82 = WORD1(v88) + 6;
          v90 = __PAIR64__(a4, a3);
          v61 = __PAIR64__(a4, a3);
          v62 = MonitorFromPoint(__SPAIR64__(a4, a3), 2u, 0);
          v63 = *(_QWORD *)(a5 + 40);
          v64 = (struct tagMONITOR *)v62;
          v87 = (struct tagMONITOR *)v62;
          if ( (*(_BYTE *)(v63 + 26) & 0x40) != 0 && (v6 & 4) == 0 )
            v6 ^= 8u;
          if ( (v6 & 8) != 0 )
          {
            a3 -= v84[0];
            **(_DWORD **)v80 = **(_DWORD **)v80 & 0xF07FFFFF | 0x1000000;
          }
          else if ( (v6 & 4) != 0 )
          {
            a3 -= (unsigned int)v84[0] >> 1;
          }
          else
          {
            **(_DWORD **)v80 = **(_DWORD **)v80 & 0xF07FFFFF | ((((**(_DWORD **)v80 & 0x10) != 0) + 1) << 23);
          }
          if ( (v6 & 0x20) != 0 )
          {
            a4 -= v82;
            **(_DWORD **)v80 |= 0x4000000u;
          }
          else if ( (v6 & 0x10) != 0 )
          {
            a4 -= (unsigned int)v82 >> 1;
          }
          else
          {
            **(_DWORD **)v80 |= 0x2000000u;
          }
          if ( (v6 & 0x3C00) != 0 )
            **(_DWORD **)v80 = ((v6 & 0x3C00) << 13) | **(_DWORD **)v80 & 0xF07FFFFF;
          v65 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v80 + 16LL) + 40LL);
          if ( a6 )
          {
            if ( *(_DWORD *)(v65 + 236) != 1 )
            {
LABEL_66:
              BestPos = FindBestPos(a3, a4, v84[0], v82, (struct tagRECT *)v92, v6, (unsigned int ***)&v80, v64, v61);
              if ( (*(_BYTE *)(*(_QWORD *)(a5 + 40) + 26LL) & 0x40) != 0 && (**(_DWORD **)v80 & 0x1800000) != 0 )
                **(_DWORD **)v80 ^= 0x1800000u;
              if ( (**(_DWORD **)v80 & 0xF800000) != 0 && (v6 & 0x4000) == 0 )
                **(_DWORD **)v80 |= 0x8000000u;
              xxxPlayEventSound(5u);
              xxxSetWindowPos(
                (struct tagWND *)Window,
                ((*(_DWORD *)(v10 + 8) & 0x100) != 0) - 1LL,
                (unsigned int)(__int16)BestPos,
                (unsigned int)SHIWORD(BestPos),
                0,
                0,
                ~(unsigned __int8)(*(_DWORD *)(v10 + 8) >> 4) & 0x10 | 0x241);
              xxxWindowEvent(6u, (struct tagWND *)Window, -4, 0, 0);
              *(_DWORD *)(v10 + 8) = (8 * v86) | *(_DWORD *)(v10 + 8) & 0xFFFFFFF7;
              v35 = xxxMNLoop(&v80, v10, 0LL, 0LL);
              v34 = v83;
              if ( (*(_DWORD *)(v10 + 8) & 0x100) != 0 )
                goto LABEL_28;
              goto LABEL_24;
            }
          }
          else
          {
            if ( *(_DWORD *)(v65 + 236) != 1 )
            {
              *(_OWORD *)v92 = 0LL;
              **(_DWORD **)v80 &= ~0x80000000;
              goto LABEL_66;
            }
            v93 = *(_OWORD *)GetMonitorRectForWindow((__int64)v97, v62, (const struct tagWND *)Window);
            *(struct tagRECT *)v94 = *GetMonitorMenuRectForWindow(&v98, (__int64)v87, (const struct tagWND *)Window);
            SubtractRect((__int64)v92, (int *)&v93, (int *)v94);
            v64 = v87;
          }
          **(_DWORD **)v80 |= 0x80000000;
          goto LABEL_66;
        }
      }
    }
    else
    {
LABEL_20:
      LOBYTE(v6) = v6 | 0x80;
    }
    xxxWindowEvent(5u, (struct tagWND *)a5, 0, 0, 0);
    xxxMNReleaseCapture(v10);
    if ( (v6 & 0x80u) == 0 )
      xxxSendMessage((struct tagWND *)a5, 0x212u);
    v34 = 1;
    v35 = 0;
LABEL_24:
    v36 = PtiCurrent(v33, v32);
    v37 = Win32HM_UnlockFromThread<0>((ULONG_PTR)v36, BugCheckParameter3);
    BugCheckParameter3[0] = -1LL;
    BugCheckParameter3[1] = 0LL;
    if ( v37 && *(char *)(*(_QWORD *)(Window + 40) + 19LL) >= 0 )
      xxxDestroyWindow((struct tagWND *)Window);
    if ( v10 )
      xxxMNEndMenuState(v10);
    xxxDeliverRestoreFocusMessage((struct tagWND *)a5);
LABEL_28:
    if ( v34 )
      v14 = v35;
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)v85);
    if ( BugCheckParameter3[0] != -1LL )
    {
      v40 = PtiCurrent(v39, v38);
      Win32HM_UnlockFromThread<0>((ULONG_PTR)v40, BugCheckParameter3);
    }
    v9 = v14;
    goto LABEL_33;
  }
LABEL_86:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v80, v26);
  return 0LL;
}
