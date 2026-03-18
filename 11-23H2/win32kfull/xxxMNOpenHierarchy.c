/*
 * XREFs of xxxMNOpenHierarchy @ 0x1C0218340
 * Callers:
 *     xxxMNButtonDown @ 0x1C0216338 (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x1C021643C (xxxMNButtonUp.c)
 *     xxxMNKeyDown @ 0x1C0217788 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C0219F60 (xxxMenuWindowProc.c)
 *     xxxMNKeyFilter @ 0x1C023E908 (xxxMNKeyFilter.c)
 * Callees:
 *     FindTimer @ 0x1C003DA48 (FindTimer.c)
 *     xxxSetWindowPos @ 0x1C0045448 (xxxSetWindowPos.c)
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00632E0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C007BA50 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxPlayEventSound @ 0x1C0085A20 (xxxPlayEventSound.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0087C20 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C008CE78 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1C00A4AD4 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 *     GetMonitorRectForWindow @ 0x1C00ABC60 (GetMonitorRectForWindow.c)
 *     IntersectRect @ 0x1C00AEB30 (IntersectRect.c)
 *     xxxInheritWindowMonitor @ 0x1C00B04C0 (xxxInheritWindowMonitor.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00E3E74 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNGetpItemFromIndex @ 0x1C00E40B0 (MNGetpItemFromIndex.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00E4714 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     MNGetpItemIndex @ 0x1C00E5540 (MNGetpItemIndex.c)
 *     GetWindowDpiLastNotify @ 0x1C00EDCC0 (GetWindowDpiLastNotify.c)
 *     xxxWindowEvent @ 0x1C00F0BC0 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 *     xxxSendMessage @ 0x1C0127888 (xxxSendMessage.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C013A0B4 (safe_cast_fnid_to_PMENUWND.c)
 *     MNMarkDelayedFreePopup @ 0x1C01FECE4 (MNMarkDelayedFreePopup.c)
 *     xxxUserModeCallback @ 0x1C0213134 (xxxUserModeCallback.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0214CA0 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0215824 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     LockPopupMenu @ 0x1C0215F08 (LockPopupMenu.c)
 *     MNIsUAHMenu @ 0x1C0216068 (MNIsUAHMenu.c)
 *     xxxMNCloseHierarchy @ 0x1C0216C60 (xxxMNCloseHierarchy.c)
 *     ?GetMenuRightAlignHint@MenuHelpers@@YA_NXZ @ 0x1C02273FC (-GetMenuRightAlignHint@MenuHelpers@@YA_NXZ.c)
 *     MNClearCachedPopupSizes @ 0x1C0237C98 (MNClearCachedPopupSizes.c)
 *     MNRefreshUAHCachedSizes @ 0x1C0237D18 (MNRefreshUAHCachedSizes.c)
 */

__int64 __fastcall xxxMNOpenHierarchy(__int64 **a1, __int64 a2)
{
  int v4; // r12d
  __int64 v5; // r14
  unsigned __int64 v6; // r15
  __int64 *v7; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 **v15; // r14
  __int128 *v16; // rdx
  __int64 v17; // rcx
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  void *v29; // rbx
  __int64 *v30; // rax
  __int64 *Window; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rbx
  __int64 v36; // rcx
  __int64 *v37; // rax
  __int64 v38; // rcx
  _DWORD *v39; // rdx
  char v40; // cl
  __int64 v41; // rcx
  struct tagWND *v42; // rbx
  int v43; // edx
  __int64 v44; // rax
  int v45; // ecx
  __int16 WindowDpiLastNotify; // dx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  int v51; // r9d
  int v52; // r15d
  int v53; // eax
  _DWORD *v54; // r9
  int v55; // edx
  int v56; // ecx
  __int64 *v57; // rax
  __int64 *v58; // rdx
  __int64 v59; // rdx
  int v60; // r8d
  LONG v61; // esi
  MenuHelpers *v62; // rcx
  LONG v63; // r14d
  unsigned int *v64; // rcx
  unsigned int v65; // eax
  __int64 *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  _QWORD *v81[2]; // [rsp+90h] [rbp-80h] BYREF
  struct tagRECT v82; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v83; // [rsp+B0h] [rbp-60h] BYREF
  int v84[2]; // [rsp+B8h] [rbp-58h] BYREF
  int v85; // [rsp+C0h] [rbp-50h]
  int v86; // [rsp+C4h] [rbp-4Ch]
  __int64 v87; // [rsp+C8h] [rbp-48h]
  int v88[4]; // [rsp+D0h] [rbp-40h] BYREF
  _QWORD v89[3]; // [rsp+E0h] [rbp-30h] BYREF
  __int128 v90; // [rsp+F8h] [rbp-18h] BYREF
  __int64 v91; // [rsp+108h] [rbp-8h]
  __int64 v92[2]; // [rsp+110h] [rbp+0h] BYREF
  _QWORD v93[2]; // [rsp+120h] [rbp+10h] BYREF
  _QWORD v94[2]; // [rsp+130h] [rbp+20h] BYREF
  _QWORD v95[2]; // [rsp+140h] [rbp+30h] BYREF
  _QWORD v96[2]; // [rsp+150h] [rbp+40h] BYREF
  __int128 v97; // [rsp+160h] [rbp+50h]
  __int64 v98; // [rsp+170h] [rbp+60h]
  __int64 v99; // [rsp+178h] [rbp+68h]
  __int128 v100; // [rsp+1A0h] [rbp+90h]
  _QWORD v101[3]; // [rsp+1D0h] [rbp+C0h] BYREF
  _QWORD v102[3]; // [rsp+1E8h] [rbp+D8h] BYREF
  int **v103[2]; // [rsp+200h] [rbp+F0h] BYREF
  __int128 v104; // [rsp+210h] [rbp+100h] BYREF
  __int64 v105; // [rsp+220h] [rbp+110h]
  __int128 v106; // [rsp+228h] [rbp+118h] BYREF
  __int64 v107; // [rsp+238h] [rbp+128h]
  _BYTE v108[64]; // [rsp+240h] [rbp+130h] BYREF
  LONG v109; // [rsp+290h] [rbp+180h] BYREF
  unsigned int v110; // [rsp+2A0h] [rbp+190h] BYREF
  int v111; // [rsp+2A8h] [rbp+198h]

  v4 = 0;
  v5 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v81, 0LL);
  v109 = 0;
  v91 = 0LL;
  v107 = 0LL;
  v105 = 0LL;
  LODWORD(v6) = 0;
  v7 = *a1;
  LODWORD(v8) = 0;
  v90 = 0LL;
  v110 = 0;
  v106 = 0LL;
  v111 = 0;
  v104 = 0LL;
  v9 = *v7;
  v87 = 0LL;
  v83 = 0LL;
  if ( *(_DWORD *)(v9 + 80) != -1
    && *(_DWORD *)(**a1 + 80) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 44LL) )
  {
    if ( (*(_DWORD *)**a1 & 0x20) == 0 )
      goto LABEL_6;
    if ( (*(_DWORD *)**a1 & 0x4000) != 0 )
    {
      xxxMNCloseHierarchy(**a1, a2);
LABEL_6:
      if ( (*(_DWORD *)**a1 & 0x2000) != 0 )
      {
        FindTimer(*(_QWORD *)(**a1 + 16), 65534LL, 0, 1, 0LL);
        *(_DWORD *)**a1 &= ~0x2000u;
      }
      v10 = MNGetpItemFromIndex(*(_QWORD *)(**a1 + 40), *(_DWORD *)(**a1 + 80));
      v11 = v10;
      if ( !v10 || !*(_QWORD *)(v10 + 16) )
        goto LABEL_108;
      if ( (*(_DWORD *)**a1 & 0x800) == 0 && *(_QWORD *)(**a1 + 8) )
      {
        ThreadLockAlways(*(_QWORD *)(**a1 + 8), &v90);
        v87 = **(_QWORD **)(v11 + 16);
        xxxSendMessage(*(_QWORD *)(**a1 + 8));
        ThreadUnlock1(v13, v12, v14);
        v4 = 0;
        v111 = 1;
      }
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0 )
      {
        v5 = -1LL;
        goto LABEL_105;
      }
      if ( *(_DWORD *)(**a1 + 80) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 44LL) )
      {
        v15 = (__int128 **)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 88LL) + 96LL * *(int *)(**a1 + 80));
        v16 = *v15;
        if ( (*((_DWORD *)*v15 + 1) & 3) == 0 )
        {
          v17 = (__int64)v15[2];
          if ( v17 )
          {
            if ( *(_DWORD *)(*(_QWORD *)(v17 + 40) + 44LL) )
            {
              v18 = v16[1];
              v97 = *v16;
              v19 = v16[4];
              v99 = *((_QWORD *)&v18 + 1);
              v100 = v19;
              v98 = v17;
              ThreadLock(v17, &v104);
              v22 = **a1;
              if ( *(_QWORD *)(v22 + 8) )
              {
                ThreadLockAlways(*(_QWORD *)(**a1 + 8), &v90);
                if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 288LL) & 0xF) == 2
                  || (v23 = *(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL), (*(_BYTE *)(v23 + 288) & 0xF) == 3) )
                {
                  v24 = ValidateHmonitor(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 256LL));
                  v6 = *(_QWORD *)GetMonitorRectForWindow((__int64)v108, v24, *(const struct tagWND **)(**a1 + 16));
                  v8 = HIDWORD(v6);
                }
                CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v23);
                if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
                {
                  v27 = PsGetCurrentProcessWin32Process(v26);
                  v28 = v27;
                  if ( v27 )
                    v28 = -(__int64)(*(_QWORD *)v27 != 0LL) & v27;
                  if ( (unsigned int)IsImmersiveAppRestricted(v28) )
                    v4 = 1;
                }
                v29 = *(void **)(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL) + 32LL);
                SmartObjStackRefBase<tagMENU>::Init(v101, 0LL);
                v30 = *a1;
                v101[2] = 0LL;
                Window = (__int64 *)xxxCreateWindowEx(
                                      385,
                                      0x8000LL,
                                      0x8000LL,
                                      0LL,
                                      0x80800000,
                                      v6,
                                      v8,
                                      0x64u,
                                      0x64u,
                                      *(struct tagWND **)(*v30 + 8),
                                      (__int64)v101,
                                      v29,
                                      0LL,
                                      0,
                                      0xA00u,
                                      v4,
                                      0LL);
                SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v101);
                ThreadUnlock1(v33, v32, v34);
                if ( Window )
                {
                  v35 = safe_cast_fnid_to_PMENUWND((__int64)Window);
                  if ( v35
                    && (SetOrClrWF(0, Window, 0x408u, 1),
                        SmartObjStackRefBase<tagPOPUPMENU>::operator=(v81, *(_QWORD *)(v35 + 8)),
                        *v81[0]) )
                  {
                    SmartObjStackRefBase<tagPOPUPMENU>::Init(v92, *(_QWORD *)(**a1 + 64));
                    MNMarkDelayedFreePopup(v81, v92);
                    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v92);
                    SetOrClrWF(
                      (*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) >> 6) & 1,
                      Window,
                      0xA40u,
                      1);
                    v36 = *v81[0] + 8LL;
                    v93[1] = *(_QWORD *)(**a1 + 8);
                    v93[0] = v36;
                    HMAssignmentLock(v93, 0LL);
                    SmartObjStackRefBase<tagMENU>::Init(v102, v98);
                    v102[2] = 0LL;
                    LockPopupMenu((__int64)v81, (__int64 *)(*v81[0] + 40LL), (__int64)v102);
                    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v102);
                    v37 = *a1;
                    v94[1] = Window;
                    v94[0] = *v37 + 24;
                    HMAssignmentLock(v94, 0LL);
                    *(_DWORD *)(**a1 + 84) = *(_DWORD *)(**a1 + 80);
                    v38 = *v81[0] + 32LL;
                    v95[1] = *(_QWORD *)(**a1 + 16);
                    v95[0] = v38;
                    HMAssignmentLock(v95, 0LL);
                    *(_QWORD *)(*v81[0] + 64LL) = *(_QWORD *)(**a1 + 64);
                    v39 = (_DWORD *)*v81[0];
                    v40 = *(_DWORD *)**a1 ^ **(_DWORD **)v81[0];
                    v111 = 0;
                    *v39 ^= v40 & 2;
                    **(_DWORD **)v81[0] ^= ((unsigned __int8)*(_DWORD *)**a1 ^ (unsigned __int8)**(_DWORD **)v81[0]) & 4;
                    **(_DWORD **)v81[0] ^= (**(_DWORD **)v81[0] ^ *(_DWORD *)**a1) & 0x800;
                    **(_DWORD **)v81[0] |= 0x200000u;
                    **(_DWORD **)v81[0] ^= (*(_DWORD *)**a1 ^ **(_DWORD **)v81[0]) & 0x400000;
                    **(_DWORD **)v81[0] ^= (**(_DWORD **)v81[0] ^ *(_DWORD *)**a1) & 0x10;
                    **(_DWORD **)v81[0] = *(_DWORD *)**a1 ^ (*(_DWORD *)**a1 ^ **(_DWORD **)v81[0]) & 0x7FFFFFFF;
                    v41 = *(_QWORD *)(*(_QWORD *)(*v81[0] + 40LL) + 40LL);
                    if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
                      *(_DWORD *)(v41 + 40) |= 4u;
                    else
                      *(_DWORD *)(v41 + 40) &= ~4u;
                    **(_DWORD **)v81[0] &= ~0x1000u;
                    if ( (unsigned int)MNIsUAHMenu(*(_QWORD *)(*v81[0] + 40LL))
                      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*v81[0] + 40LL) + 40LL) + 40LL) & 1) != 0 )
                    {
                      MNRefreshUAHCachedSizes(*(_QWORD *)(*v81[0] + 40LL));
                    }
                    ThreadLock(Window, &v106);
                    if ( _bittest((const signed __int32 *)(*(_QWORD *)(Window[2] + 424) + 824LL), 0x14u)
                      || (v42 = (struct tagWND *)Window,
                          (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 288LL) & 0xF) == 2)
                      && (_bittest((const signed __int32 *)(*(_QWORD *)(**a1 + 16) + 320LL), 0x14u)
                       || ((*(_DWORD *)**a1 & 2) != 0 || (*(_DWORD *)**a1 & 4) != 0)
                       && (v42 = (struct tagWND *)Window, (*(_DWORD *)(*(_QWORD *)(**a1 + 16) + 320LL) & 0x80000) != 0)) )
                    {
                      SmartObjStackRefBase<tagMENU>::Init(v89, *(_QWORD *)(*v81[0] + 40LL));
                      v43 = 0;
                      v89[2] = 0LL;
                      v42 = (struct tagWND *)Window;
                      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v89[0] + 40LL) + 44LL) )
                      {
                        while ( (**(_DWORD **)(96LL * v43 + *(_QWORD *)(*(_QWORD *)v89[0] + 88LL)) & 0x100) == 0
                             && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v89[0] + 88LL) + 96LL * v43) + 96LL) != -1LL )
                        {
                          if ( (unsigned int)++v43 >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v89[0] + 40LL) + 44LL) )
                            goto LABEL_51;
                        }
                      }
                      else
                      {
LABEL_51:
                        xxxEnableChildWindowDpiMessageX((struct tagWND *)Window);
                      }
                      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v89);
                    }
                    v44 = *((_QWORD *)v42 + 5);
                    v45 = *(_DWORD *)(v44 + 288) & 0xF;
                    if ( v45 == 3 )
                    {
                      WindowDpiLastNotify = (*(_DWORD *)(v44 + 288) >> 8) & 0x1FF;
                    }
                    else if ( (*(_DWORD *)(v44 + 232) & 0x400) != 0 )
                    {
                      WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)v42);
                    }
                    else if ( !v45
                           && (v47 = *(_QWORD *)(Window[2] + 456)) != 0
                           && (*(_DWORD *)(**(_QWORD **)(v47 + 8) + 64LL) & 1) != 0 )
                    {
                      WindowDpiLastNotify = 96;
                    }
                    else
                    {
                      WindowDpiLastNotify = *(_WORD *)(*(_QWORD *)(Window[2] + 424) + 284LL);
                    }
                    if ( WindowDpiLastNotify != *(_WORD *)(*(_QWORD *)(*v81[0] + 40LL) + 76LL) )
                    {
                      *(_WORD *)(*(_QWORD *)(*v81[0] + 40LL) + 76LL) = WindowDpiLastNotify;
                      MNClearCachedPopupSizes(*(_QWORD *)(*v81[0] + 40LL));
                    }
                    if ( (unsigned int)xxxSendMessage((ULONG_PTR)v42) )
                    {
                      v49 = **a1;
                      if ( *(_QWORD *)(v49 + 40) )
                      {
                        if ( (unsigned int)MNGetpItemIndex(*(_QWORD *)(**a1 + 40), (__int64)v15) != -1 )
                        {
                          v52 = (unsigned __int16)v51 + 6;
                          *(_DWORD *)**a1 |= 0x20u;
                          v53 = xxxMNPositionHierarchy(
                                  a1,
                                  (__int64)v15,
                                  v52,
                                  (unsigned int)HIWORD(v51) + 6,
                                  &v109,
                                  (int *)&v110,
                                  (__int64)&v83);
                          **(_DWORD **)v81[0] ^= (**(_DWORD **)v81[0] ^ (v53 << 23)) & 0xF800000;
                          if ( (*(_DWORD *)**a1 & 1) != 0 && (_GetAsyncKeyState(1LL) & 0x8000u) != 0LL )
                          {
                            v54 = (_DWORD *)*((_QWORD *)v42 + 5);
                            v82 = 0LL;
                            v55 = v54[23];
                            v88[2] = v54[24] + v109 - v54[22];
                            v56 = v110 - v55 + v54[25];
                            v88[0] = v109;
                            v88[3] = v56;
                            v88[1] = v110;
                            v57 = *a1;
                            v58 = *a1;
                            v84[0] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) + v100;
                            v59 = *v58;
                            v60 = DWORD1(v100) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*v57 + 16) + 40LL) + 92LL);
                            v85 = DWORD2(v100) + v84[0];
                            v84[1] = v60;
                            v86 = v60 + HIDWORD(v100);
                            SmartObjStackRefBase<tagPOPUPMENU>::Init(v103, v59);
                            MNGetPopupBoundsRect(v103, v83, &v82, 0);
                            if ( (unsigned int)IntersectRect(v88, v88, v84) )
                            {
                              v61 = v52
                                  + v100
                                  + DWORD2(v100)
                                  + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL);
                              if ( v61 > v82.right )
                                v61 = 0;
                              v62 = *(MenuHelpers **)(*(_QWORD *)(**a1 + 16) + 40LL);
                              v63 = v100 + *((_DWORD *)v62 + 22) - v52;
                              if ( v63 < v82.left )
                                v63 = 0;
                              if ( (MenuHelpers::GetMenuRightAlignHint(v62) || (v97 & 0x2000) != 0) && v63 || !v61 )
                              {
                                v109 = v100 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - v52;
                                v64 = (unsigned int *)*v81[0];
                                v65 = **(_DWORD **)v81[0] & 0xF07FFFFF | 0x1000000;
                              }
                              else
                              {
                                v109 = v100
                                     + DWORD2(v100)
                                     + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL);
                                v64 = (unsigned int *)*v81[0];
                                v65 = **(_DWORD **)v81[0] & 0xF07FFFFF | 0x800000;
                              }
                              *v64 = v65;
                              if ( v109 <= v82.left )
                              {
                                v109 = v85;
                                **(_DWORD **)v81[0] = **(_DWORD **)v81[0] & 0xF07FFFFF | 0x1000000;
                              }
                            }
                          }
                          if ( (*(_DWORD *)**a1 & 1) != 0 )
                          {
                            if ( (*(_DWORD *)**a1 & 0x400) == 0 )
                              **(_DWORD **)v81[0] |= 0x8000000u;
                            if ( (*(_DWORD *)**a1 & 0x10) != 0 || (**(_DWORD **)v81[0] & 0xF800000) == 0x1000000 )
                              **(_DWORD **)v81[0] |= 0x10u;
                            *(_DWORD *)**a1 |= 0x400u;
                          }
                          else
                          {
                            **(_DWORD **)v81[0] |= 0x8000000u;
                            if ( (**(_DWORD **)v81[0] & 0xF800000) == 0x1000000 )
                              **(_DWORD **)v81[0] |= 0x10u;
                          }
                          v66 = *a1;
                          v96[1] = v42;
                          v96[0] = *(_QWORD *)(*v66 + 64) + 56LL;
                          HMAssignmentLock(v96, 0LL);
                          if ( *(_QWORD *)(*v81[0] + 8LL) )
                          {
                            ThreadLockAlways(*(_QWORD *)(*v81[0] + 8LL), &v90);
                            xxxInternalUpdateWindow(*(struct tagWND **)(*v81[0] + 8LL), 1u);
                            ThreadUnlock1(v71, v70, v72);
                          }
                          if ( (*(_DWORD *)(a2 + 8) & 0x400) != 0 )
                          {
                            v83 = *(_QWORD *)v42;
                            xxxUserModeCallback(0x64u, (__int64)&v83, 8u, v69);
                          }
                          xxxPlayEventSound(5LL, v67, v68, v69);
                          if ( (W32GetCurrentThreadDpiAwarenessContext(v73) & 0xF) == 2 )
                            *(_DWORD *)(*((_QWORD *)v42 + 5) + 288LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16)
                                                                                              + 40LL)
                                                                                  + 288LL);
                          xxxSetWindowPos(
                            v42,
                            ((*(_DWORD *)(a2 + 8) & 0x100) != 0) - 1LL,
                            (unsigned int)v109,
                            v110,
                            0,
                            0,
                            ~(unsigned __int8)(*(_DWORD *)(a2 + 8) >> 4) & 0x10 | 0x241);
                          xxxInheritWindowMonitor(v42, *(__int64 **)(**a1 + 16), 1);
                          xxxWindowEvent(6u, v42, -4, 0, 0);
                          if ( *(_DWORD *)(a2 + 20) == 1 )
                            xxxSendMessage((ULONG_PTR)v42);
                          xxxInternalUpdateWindow(v42, 1u);
                          v5 = (__int64)v42;
                          ThreadUnlock1(v75, v74, v76);
                          goto LABEL_33;
                        }
                      }
                    }
                    if ( ThreadUnlock1(v49, v48, v50) )
                      xxxDestroyWindow((__int64 *)v42);
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
              ThreadUnlock1(v22, v20, v21);
              goto LABEL_105;
            }
          }
        }
        v5 = 0LL;
      }
LABEL_105:
      if ( v111 )
      {
        if ( *(_QWORD *)(**a1 + 8) )
        {
          ThreadLockAlways(*(_QWORD *)(**a1 + 8), &v90);
          xxxSendMessage(*(_QWORD *)(**a1 + 8));
          ThreadUnlock1(v78, v77, v79);
        }
      }
LABEL_108:
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v81);
      return v5;
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v81);
  return 0LL;
}
