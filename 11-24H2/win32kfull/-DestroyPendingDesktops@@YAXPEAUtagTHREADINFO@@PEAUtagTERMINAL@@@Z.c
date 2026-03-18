/*
 * XREFs of ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x14023AFEC
 * Callers:
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140107708 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxDesktopThread @ 0x1402864A0 (xxxDesktopThread.c)
 * Callees:
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14003E060 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x14003E6B0 (PopAndFreeW32ThreadLock.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x1400688A4 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140070D94 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     _DestroyMenu @ 0x140070FA0 (_DestroyMenu.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140073680 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSetWindowPos @ 0x140076C44 (xxxSetWindowPos.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x1400B4A08 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     xxxSetThreadDesktop @ 0x1401071FC (xxxSetThreadDesktop.c)
 *     xxxDestroyWindow @ 0x14015EF90 (xxxDestroyWindow.c)
 *     DwmAsyncShellWindowChange @ 0x14016A814 (DwmAsyncShellWindowChange.c)
 *     ?ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z @ 0x14016DEFC (-ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Sq @ 0x1401DD514 (WPP_RECORDER_AND_TRACE_SF_Sq.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqS @ 0x1401E9388 (WPP_RECORDER_AND_TRACE_SF_qqS.c)
 *     xxxSwitchDesktop @ 0x1401F69E4 (xxxSwitchDesktop.c)
 *     ?GetDesktopName@@YAPEBGPEAUtagDESKTOP@@@Z @ 0x1401FC5CC (-GetDesktopName@@YAPEBGPEAUtagDESKTOP@@@Z.c)
 *     ?xxxCleanupMotherDesktopWindow@@YAXPEAUtagTERMINAL@@@Z @ 0x14021B070 (-xxxCleanupMotherDesktopWindow@@YAXPEAUtagTERMINAL@@@Z.c)
 *     RemoteDisableScreen @ 0x140224C24 (RemoteDisableScreen.c)
 *     UnlockDesktopSysMenu @ 0x140282D08 (UnlockDesktopSysMenu.c)
 *     UnlockDesktopMenu @ 0x1402C89AC (UnlockDesktopMenu.c)
 */

void __fastcall DestroyPendingDesktops(struct tagTHREADINFO *a1, struct tagTERMINAL *a2)
{
  struct tagTHREADINFO *v2; // r15
  __int64 *v4; // r13
  unsigned int *v5; // rdx
  __int64 v6; // r14
  char v7; // di
  bool v8; // si
  const unsigned __int16 *DesktopName; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  bool v22; // bl
  unsigned int *v23; // rdx
  bool v24; // di
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  __int64 v28; // rcx
  char v29; // bl
  bool v30; // di
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  char v39; // bl
  bool v40; // di
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdi
  __int64 v48; // rdx
  __int64 v49; // rcx
  _QWORD *v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  void *v54; // rdi
  char v55; // bl
  bool v56; // si
  __int64 v57; // rax
  int v58; // r8d
  int v59; // edx
  char v60; // si
  bool v61; // r15
  const unsigned __int16 *v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  int v66; // r8d
  int v67; // edx
  struct tagTERMINAL *v68; // rdi
  void *v69; // rsi
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 i; // rbx
  __int64 v73; // rbx
  __int64 v74; // rcx
  __int64 v75; // rax
  _DWORD *v76; // r13
  __int64 v77; // r15
  __int64 v78; // rdx
  struct _HEAD *v79; // rcx
  __int64 v80; // rdx
  struct _HEAD *v81; // rcx
  __int64 v82; // rdx
  struct _HEAD *v83; // rcx
  __int64 v84; // rdx
  struct _HEAD *v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rdx
  __int64 **v89; // rax
  __int64 v90; // rbx
  void *v91; // rax
  __int64 v92; // rax
  _QWORD *v93; // rax
  _QWORD *v94; // rax
  struct tagWND *v95; // rbx
  CMonitorTopology *v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 j; // rax
  struct tagTERMINAL *v100; // r12
  char v101; // di
  bool v102; // si
  __int64 v103; // rbx
  __int64 v104; // rax
  int v105; // r8d
  int v106; // edx
  char v107; // r15
  char v108; // r12
  const unsigned __int16 *v109; // rax
  __int64 v110; // rdi
  const char *v111; // rbx
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rax
  __int64 v115; // rbx
  struct tagWND *v116; // rbx
  __int64 v117; // rdx
  char v118; // bl
  bool v119; // di
  __int64 v120; // rax
  int v121; // r8d
  int v122; // edx
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // rax
  char v126; // bl
  bool v127; // di
  __int64 v128; // rax
  int v129; // r8d
  int v130; // edx
  __int64 v131; // rcx
  char v132; // bl
  bool v133; // di
  __int64 v134; // rax
  int v135; // r8d
  int v136; // edx
  __int64 v137; // rax
  __int64 v138; // rdx
  int v139; // [rsp+28h] [rbp-A9h]
  int v140; // [rsp+30h] [rbp-A1h]
  int v141; // [rsp+38h] [rbp-99h]
  int v142; // [rsp+40h] [rbp-91h]
  __int64 v143[2]; // [rsp+68h] [rbp-69h] BYREF
  struct _HEAD *v144; // [rsp+78h] [rbp-59h]
  _QWORD v145[2]; // [rsp+80h] [rbp-51h] BYREF
  __int64 v146; // [rsp+90h] [rbp-41h]
  _QWORD v147[2]; // [rsp+98h] [rbp-39h] BYREF
  __int64 v148; // [rsp+A8h] [rbp-29h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+B0h] [rbp-21h] BYREF
  _QWORD v150[3]; // [rsp+C0h] [rbp-11h] BYREF
  _QWORD v151[10]; // [rsp+D8h] [rbp+7h] BYREF
  __int64 v154; // [rsp+148h] [rbp+77h]

  v2 = a1;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v143, (__int64)a2);
  v4 = (__int64 *)((char *)a2 + 48);
  v5 = &WPP_RECORDER_INITIALIZED;
  v6 = *v4;
  if ( *v4 )
  {
    while ( 1 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
        || (v7 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v7 = 0;
      }
      v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        DesktopName = GetDesktopName((PVOID)v6, (__int64)&WPP_RECORDER_INITIALIZED);
        UserSessionState = W32GetUserSessionState(v11, v10);
        LOBYTE(v13) = v8;
        LOBYTE(v14) = v7;
        WPP_RECORDER_AND_TRACE_SF_Sq(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v14,
          v13,
          *(_QWORD *)(UserSessionState + 69416),
          v139,
          v140,
          11,
          v142,
          (__int64)DesktopName,
          v6);
      }
      Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v151, (void *)v6);
      v15 = *(_QWORD *)(v6 + 40);
      Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v147, (void *)v15);
      LockObjectAssignment(v4, *(_QWORD *)(v6 + 32));
      DeferrableUnlockObjectAssignment<tagDESKTOP>((_QWORD *)(v6 + 32), v16, v17);
      if ( v6 == *(_QWORD *)(W32GetUserSessionState(v19, v18) + 19200) )
        break;
      if ( v6 != *((_QWORD *)v2 + 62) )
        goto LABEL_60;
      LOBYTE(v69) = 0;
      v73 = 0LL;
      v68 = a2;
      v74 = *(_QWORD *)(W32GetUserSessionState(v21, v20) + 63560);
      if ( v74 )
      {
        while ( (*(_DWORD *)(v74 + 64) & 0x10) != 0
             || *(struct tagTERMINAL **)(v74 + 56) != a2
             || !*(_QWORD *)(v74 + 16) )
        {
          v74 = *(_QWORD *)(v74 + 8);
          if ( !v74 )
            goto LABEL_75;
        }
        v73 = *(_QWORD *)(v74 + 16);
        while ( v73 == v6 )
        {
          v73 = *(_QWORD *)(v73 + 32);
          if ( !v73 )
          {
            if ( !v6 )
              v73 = 0LL;
            break;
          }
        }
      }
LABEL_75:
      xxxSetThreadDesktop(0LL, v73);
LABEL_61:
      if ( v6 == *(_QWORD *)(W32GetUserSessionState(v21, v20) + 19208) )
      {
        for ( i = *(_QWORD *)(v15 + 16);
              i
           && (i == *(_QWORD *)(W32GetUserSessionState(v71, v70) + 63016)
            || i == *(_QWORD *)(W32GetUserSessionState(v71, v70) + 63024));
              i = *(_QWORD *)(i + 32) )
        {
          ;
        }
        v75 = W32GetUserSessionState(v71, v70);
        LockObjectAssignment(v75 + 19208, i);
      }
      if ( (*(_DWORD *)v68 & 2) == 0 )
        W32GetUserSessionState(v71, v70);
      v76 = (_DWORD *)*((_QWORD *)v2 + 62);
      v77 = *((_QWORD *)v2 + 79);
      v154 = v77;
      Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v145, v76);
      xxxSetThreadDesktop(0LL, v6);
      tagUNIQUE_WINDOW_HANDLE::Clear((tagUNIQUE_WINDOW_HANDLE *)(v6 + 88));
      HMAssignmentUnlock(v6 + 192);
      *(_DWORD *)(v6 + 48) &= 0xFFFFFC3F;
      v78 = *(_QWORD *)(v6 + 56);
      if ( v78 )
      {
        v144 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=((__int64)v143, v78);
        if ( UnlockDesktopSysMenu(v6 + 56) )
        {
          v79 = v144;
          if ( !v144 )
            v79 = *(struct _HEAD **)v143[0];
          DestroyMenu(v79);
        }
      }
      v80 = *(_QWORD *)(v6 + 64);
      if ( v80 )
      {
        v144 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=((__int64)v143, v80);
        if ( UnlockDesktopSysMenu(v6 + 64) )
        {
          v81 = v144;
          if ( !v144 )
            v81 = *(struct _HEAD **)v143[0];
          DestroyMenu(v81);
        }
      }
      v82 = *(_QWORD *)(v6 + 72);
      if ( v82 )
      {
        v144 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=((__int64)v143, v82);
        if ( UnlockDesktopMenu(v6 + 72) )
        {
          v83 = v144;
          if ( !v144 )
            v83 = *(struct _HEAD **)v143[0];
          DestroyMenu(v83);
        }
      }
      v84 = *(_QWORD *)(v6 + 80);
      if ( v84 )
      {
        v144 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=((__int64)v143, v84);
        if ( UnlockDesktopMenu(v6 + 80) )
        {
          v85 = v144;
          if ( !v144 )
            v85 = *(struct _HEAD **)v143[0];
          DestroyMenu(v85);
        }
      }
      v86 = *(_QWORD *)(v6 + 8);
      if ( v86 )
      {
        v87 = *(_QWORD *)(v86 + 168);
        if ( v87 )
        {
          if ( (unsigned int)IsWindowDesktopComposed(v87) )
          {
            v89 = *(__int64 ***)(v6 + 8);
            v90 = **v89;
            v91 = (void *)ReferenceDwmApiPort(*v89, v88);
            DwmAsyncShellWindowChange(v91, 0LL, v90);
          }
          v92 = *(_QWORD *)(v6 + 8);
          *(_QWORD *)(*(_QWORD *)v92 + 24LL) = 0LL;
          HMAssignmentUnlock(v92 + 168);
        }
        v93 = *(_QWORD **)(v6 + 8);
        if ( v93[23] )
        {
          *(_QWORD *)(*v93 + 32LL) = 0LL;
          HMAssignmentUnlock(v93 + 23);
        }
        v94 = *(_QWORD **)(v6 + 8);
        if ( v94[24] )
        {
          *(_QWORD *)(*v94 + 40LL) = 0LL;
          HMAssignmentUnlock(v94 + 24);
        }
      }
      v95 = *(struct tagWND **)(v6 + 112);
      if ( v95 && HMAssignmentUnlock(v6 + 112) )
        xxxDestroyWindow(v95, v84);
      v96 = *(CMonitorTopology **)(v6 + 264);
      if ( v96 )
      {
        CMonitorTopology::Release(v96);
        *(_QWORD *)(v6 + 264) = 0LL;
      }
      v97 = *((_QWORD *)v68 + 1);
      if ( v97 && *(_QWORD *)(v97 + 24) == v6 )
      {
        if ( (*(_DWORD *)v68 & 2) != 0 )
        {
          if ( *(_QWORD *)(W32GetUserSessionState(v96, v84) + 63560) )
          {
            v96 = *(CMonitorTopology **)(W32GetUserSessionState(v96, v98) + 63560);
            for ( j = *((_QWORD *)v96 + 1); j; j = *(_QWORD *)(j + 8) )
            {
              v69 = *(void **)(j + 16);
              v98 = 0LL;
              if ( v69 )
                goto LABEL_136;
            }
          }
        }
        else
        {
          v69 = *(void **)(v15 + 16);
          v98 = 0LL;
          if ( v69 )
          {
LABEL_136:
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
              || (v107 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
            {
              v107 = 0;
            }
            v108 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v107 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v109 = GetDesktopName(v69, 0LL);
              v110 = *((_QWORD *)v68 + 1);
              v111 = (const char *)v109;
              v114 = W32GetUserSessionState(v113, v112);
              WPP_RECORDER_AND_TRACE_SF_qqS(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v107,
                v108,
                *(_QWORD *)(v114 + 69416),
                v139,
                v140,
                v141,
                v142,
                v110,
                (char)v69,
                v111);
            }
            v100 = a2;
            LockObjectAssignment(*((_QWORD *)a2 + 1) + 24LL, v69);
            v77 = v154;
            goto LABEL_145;
          }
        }
        v100 = a2;
        if ( a2 == (struct tagTERMINAL *)(W32GetUserSessionState(v96, v98) + 68720) )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
            || (v101 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
          {
            v101 = (char)v69;
          }
          v102 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v101 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v103 = *((_QWORD *)a2 + 1);
            v104 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v84);
            LOBYTE(v105) = v102;
            LOBYTE(v106) = v101;
            WPP_RECORDER_AND_TRACE_SF_q(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v106,
              v105,
              *(_QWORD *)(v104 + 69416),
              4,
              8,
              17,
              (__int64)&WPP_6e3958beb26f3f5b8556df48f81bef5f_Traceguids,
              v103);
          }
          xxxCleanupMotherDesktopWindow(a2);
        }
      }
      else
      {
        v100 = a2;
      }
LABEL_145:
      v115 = *(_QWORD *)(v6 + 8);
      if ( v115 )
      {
        v116 = *(struct tagWND **)(v115 + 24);
        if ( v116 )
        {
          LOBYTE(v84) = *(_BYTE *)(*((_QWORD *)v116 + 5) + 31LL);
          if ( (v84 & 0x10) != 0 )
          {
            Win32HM_LockIntoThread<0>((__int64)a1, (__int64)v116, BugCheckParameter3);
            xxxSetWindowPos(v116, 0LL, 0LL, 0LL, 0, 0, 1183);
            Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v117);
          }
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
            || (v118 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
          {
            v118 = 0;
          }
          v119 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v118 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v120 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v84);
            LOBYTE(v121) = v119;
            LOBYTE(v122) = v118;
            WPP_RECORDER_AND_TRACE_SF_(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v122,
              v121,
              *(_QWORD *)(v120 + 69416),
              4,
              8,
              19,
              (__int64)&WPP_6e3958beb26f3f5b8556df48f81bef5f_Traceguids);
          }
          xxxDestroyWindow(*(struct tagWND **)(*(_QWORD *)(v6 + 8) + 24LL), v84);
          if ( v6 == *(_QWORD *)(W32GetUserSessionState(v124, v123) + 19200) )
          {
            v96 = *(CMonitorTopology **)&WPP_GLOBAL_Control;
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
              || (v126 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
            {
              v126 = 0;
            }
            v127 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v126 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v128 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v84);
              LOBYTE(v129) = v127;
              LOBYTE(v130) = v126;
              WPP_RECORDER_AND_TRACE_SF_q(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v130,
                v129,
                *(_QWORD *)(v128 + 69416),
                4,
                8,
                20,
                (__int64)&WPP_6e3958beb26f3f5b8556df48f81bef5f_Traceguids,
                v6);
            }
          }
          else
          {
            v125 = *(_QWORD *)(v6 + 8);
            *(_QWORD *)(*(_QWORD *)v125 + 8LL) = 0LL;
            HMAssignmentUnlock(v125 + 24);
          }
          *(_DWORD *)(v6 + 48) |= 2u;
        }
      }
      if ( (*(_DWORD *)v100 & 2) == 0 || !v76 || (v76[12] & 6) == 0 )
        xxxSetThreadDesktop(v77, (__int64)v76);
      if ( (*(_DWORD *)v100 & 2) == 0 )
        W32GetUserSessionState(v96, v84);
      if ( v146 != -1 )
      {
        PopAndFreeW32ThreadLock((__int64)v145, v84);
        v146 = -1LL;
      }
      if ( v148 != -1 )
      {
        PopAndFreeW32ThreadLock((__int64)v147, v84);
        v148 = -1LL;
      }
      if ( v151[2] != -1LL )
        PopAndFreeW32ThreadLock((__int64)v151, v84);
      v2 = a1;
      v4 = (__int64 *)((char *)v100 + 48);
      v6 = *((_QWORD *)v100 + 6);
      if ( !v6 )
      {
        v5 = &WPP_RECORDER_INITIALIZED;
        goto LABEL_180;
      }
    }
    v22 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v23 = &WPP_RECORDER_INITIALIZED;
    v24 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v22 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v25 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v26) = v24;
      LOBYTE(v27) = v22;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v27,
        v26,
        *(_QWORD *)(v25 + 69416),
        4,
        8,
        12,
        (__int64)&WPP_6e3958beb26f3f5b8556df48f81bef5f_Traceguids);
      v23 = &WPP_RECORDER_INITIALIZED;
    }
    if ( (*(_DWORD *)(v15 + 64) & 1) != 0 )
    {
      v28 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
        || (v29 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v29 = 0;
      }
      v30 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v29 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v31 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
        LOBYTE(v32) = v30;
        LOBYTE(v33) = v29;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v33,
          v32,
          *(_QWORD *)(v31 + 69416),
          4,
          8,
          13,
          (__int64)&WPP_6e3958beb26f3f5b8556df48f81bef5f_Traceguids);
      }
      if ( *(_QWORD *)(W32GetUserSessionState(v28, v23) + 63024) )
      {
        if ( v6 == *(_QWORD *)(W32GetUserSessionState(v35, v34) + 63016)
          || !*(_QWORD *)(W32GetUserSessionState(v36, v34) + 63016)
          || (v35 = *(_QWORD *)(W32GetUserSessionState(v37, v34) + 63016), (*(_DWORD *)(v35 + 48) & 2) != 0) )
        {
          v38 = *(_QWORD *)&WPP_GLOBAL_Control;
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
            || (v39 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
          {
            v39 = 0;
          }
          v40 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v39 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v41 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v34);
            LOBYTE(v42) = v40;
            LOBYTE(v43) = v39;
            WPP_RECORDER_AND_TRACE_SF_(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v43,
              v42,
              *(_QWORD *)(v41 + 69416),
              4,
              8,
              14,
              (__int64)&WPP_6e3958beb26f3f5b8556df48f81bef5f_Traceguids);
          }
          v44 = W32GetUserSessionState(v38, v34);
          v47 = W32GetUserSessionState(v46, v45);
          v50 = *(_QWORD **)(W32GetUserSessionState(v49, v48) + 63024);
          v53 = W32GetUserSessionState(v52, v51);
          RemoteDisableScreen(*(_QWORD **)(v53 + 19200), v50, v47 + 19208, (_DWORD *)(v44 + 62872));
LABEL_60:
          v68 = a2;
          LOBYTE(v69) = 0;
          goto LABEL_61;
        }
      }
      v54 = *(void **)(W32GetUserSessionState(v35, v34) + 63016);
    }
    else
    {
      v54 = *(void **)(v15 + 16);
      if ( v54 == (void *)v6 )
        v54 = *(void **)(v6 + 32);
      if ( !v54 )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
          || (v55 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v55 = 0;
        }
        v56 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v55 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v57 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
          LOBYTE(v58) = v56;
          LOBYTE(v59) = v55;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v59,
            v58,
            *(_QWORD *)(v57 + 69416),
            4,
            8,
            15,
            (__int64)&WPP_6e3958beb26f3f5b8556df48f81bef5f_Traceguids);
        }
        ClearWakeBit(v2, 15367, 0);
      }
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
      || (v60 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v60 = 0;
    }
    v61 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v60 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v62 = GetDesktopName(v54, (__int64)v23);
      v65 = W32GetUserSessionState(v64, v63);
      LOBYTE(v66) = v61;
      LOBYTE(v67) = v60;
      WPP_RECORDER_AND_TRACE_SF_Sq(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v67,
        v66,
        *(_QWORD *)(v65 + 69416),
        v139,
        v140,
        16,
        v142,
        (__int64)v62,
        (char)v54);
    }
    Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v150, v54);
    xxxSwitchDesktop(v15, (__int64)v54, 0, 0);
    if ( v150[2] != -1LL )
      PopAndFreeW32ThreadLock((__int64)v150, v20);
    v2 = a1;
    goto LABEL_60;
  }
LABEL_180:
  v131 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
    || (v132 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v132 = 0;
  }
  v133 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v132 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v134 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v135) = v133;
    LOBYTE(v136) = v132;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v136,
      v135,
      *(_QWORD *)(v134 + 69416),
      4,
      8,
      21,
      (__int64)&WPP_6e3958beb26f3f5b8556df48f81bef5f_Traceguids);
  }
  v137 = W32GetUserSessionState(v131, v5);
  KeSetEvent(*(PRKEVENT *)(v137 + 62984), 1, 0);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v143, v138);
}
