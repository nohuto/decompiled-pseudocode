/*
 * XREFs of xxxCreateDesktopEx @ 0x14016470C
 * Callers:
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x140163C44 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     xxxConnectService @ 0x140164060 (xxxConnectService.c)
 *     xxxResolveDesktop @ 0x14023C550 (xxxResolveDesktop.c)
 *     EditionCreateDesktopEntryPoint @ 0x1402406E0 (EditionCreateDesktopEntryPoint.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140040808 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x14004083C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14004B6E8 (--0-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140065000 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x14006E488 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x1400733C8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     xxxSetWindowPos @ 0x140076C44 (xxxSetWindowPos.c)
 *     xxxInheritWindowMonitor @ 0x14008C114 (xxxInheritWindowMonitor.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x140092FE8 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x1400B4A08 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     zzzDecomposeDesktop @ 0x140131E78 (zzzDecomposeDesktop.c)
 *     xxxDestroyWindow @ 0x14015EF90 (xxxDestroyWindow.c)
 *     ??1?$Win32RawLockedItem@UtagEVENT_PACKET_TARGETS@@$0A@@@QEAA@XZ @ 0x140160900 (--1-$Win32RawLockedItem@UtagEVENT_PACKET_TARGETS@@$0A@@@QEAA@XZ.c)
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x140163C44 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     ??0?$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXPEAX@Z@Z @ 0x1401646B0 (--0-$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXP.c)
 *     zzzComposeDesktop @ 0x140168F78 (zzzComposeDesktop.c)
 *     MapDesktop @ 0x14016A320 (MapDesktop.c)
 *     OpenDesktopCompletion @ 0x140195558 (OpenDesktopCompletion.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAU_HEAD@@@Z @ 0x1401A6A48 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     CloseProtectedHandle @ 0x1401AABAC (CloseProtectedHandle.c)
 *     GetPhysicalScreenRect @ 0x1401DA3D0 (GetPhysicalScreenRect.c)
 *     ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x1401DFCE4 (-HYDRA_HINT@@YAXW4HydraHint@@@Z.c)
 *     DwmAsyncDesktopFree @ 0x140211784 (DwmAsyncDesktopFree.c)
 *     ?CleanupDirtyDesktops@@YAXXZ @ 0x14023AD50 (-CleanupDirtyDesktops@@YAXXZ.c)
 *     zzzSetDesktop @ 0x14023D170 (zzzSetDesktop.c)
 *     DwmAsyncDesktopCreate @ 0x140268C14 (DwmAsyncDesktopCreate.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x14026E498 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     _CloseDesktop @ 0x14028628C (_CloseDesktop.c)
 *     LinkWindow @ 0x1402B47A8 (LinkWindow.c)
 */

__int64 __fastcall xxxCreateDesktopEx(__int64 a1, __int64 a2, int a3, int a4, HANDLE *a5, int a6)
{
  unsigned int v8; // edi
  struct tagWND *Window; // r13
  struct tagTHREADINFO *v10; // rsi
  int v11; // r12d
  __int64 v12; // r8
  NTSTATUS v13; // eax
  int v14; // ebx
  __int64 v15; // rdx
  int v16; // eax
  char *v17; // r15
  __int64 v18; // rdx
  struct tagWINDOWSTATION *v19; // rbx
  __int64 v20; // r12
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdi
  void *v27; // rax
  __int64 v28; // rax
  __int64 UserSessionState; // rax
  int v30; // edi
  __int64 v31; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  char v37; // di
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned int v44; // edi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  struct tagWND *v48; // rbx
  __int64 v49; // rdx
  int v50; // ecx
  _QWORD *v51; // rdi
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  volatile signed __int32 *v57; // rcx
  __int64 v58; // rax
  struct tagWINDOWSTATION *v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 i; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  void *v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rdx
  __int64 v82; // rax
  struct tagWND *v83; // rbx
  char v84; // bl
  bool v85; // r12
  __int64 v86; // rax
  int v87; // r8d
  int v88; // edx
  __int64 v89; // rdx
  _QWORD *v90; // rcx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r12
  void *v94; // rax
  __int64 v95; // r8
  __int64 v96; // rdx
  char v98; // [rsp+90h] [rbp-248h]
  bool v99; // [rsp+91h] [rbp-247h]
  char v100; // [rsp+94h] [rbp-244h]
  HANDLE Handle; // [rsp+98h] [rbp-240h] BYREF
  _BYTE v102[4]; // [rsp+A0h] [rbp-238h] BYREF
  unsigned int v103; // [rsp+A4h] [rbp-234h]
  struct tagWND *v104; // [rsp+A8h] [rbp-230h]
  signed __int32 v105; // [rsp+B0h] [rbp-228h]
  int v106; // [rsp+B4h] [rbp-224h]
  BOOL v107; // [rsp+B8h] [rbp-220h]
  struct tagWINDOWSTATION *v108; // [rsp+C8h] [rbp-210h]
  _BYTE v109[16]; // [rsp+D0h] [rbp-208h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+E0h] [rbp-1F8h] BYREF
  _DWORD v111[2]; // [rsp+F0h] [rbp-1E8h] BYREF
  PVOID Object; // [rsp+F8h] [rbp-1E0h] BYREF
  _QWORD *v113; // [rsp+100h] [rbp-1D8h]
  __int64 v114; // [rsp+108h] [rbp-1D0h]
  __int64 v115; // [rsp+110h] [rbp-1C8h]
  __int64 v116; // [rsp+118h] [rbp-1C0h]
  __int64 v117; // [rsp+120h] [rbp-1B8h]
  ULONG_PTR v118[2]; // [rsp+128h] [rbp-1B0h] BYREF
  int v119[4]; // [rsp+138h] [rbp-1A0h]
  union _LARGE_INTEGER Timeout; // [rsp+148h] [rbp-190h] BYREF
  HWINSTA v121; // [rsp+158h] [rbp-180h]
  _QWORD v122[4]; // [rsp+160h] [rbp-178h] BYREF
  _QWORD v123[2]; // [rsp+180h] [rbp-158h] BYREF
  _QWORD v124[2]; // [rsp+190h] [rbp-148h] BYREF
  _BYTE v125[16]; // [rsp+1A0h] [rbp-138h] BYREF
  _QWORD v126[5]; // [rsp+1B0h] [rbp-128h] BYREF
  int v127; // [rsp+1D8h] [rbp-100h]
  int v128; // [rsp+1DCh] [rbp-FCh]
  __int128 v129; // [rsp+1F0h] [rbp-E8h] BYREF
  _BYTE v130[16]; // [rsp+200h] [rbp-D8h] BYREF
  _BYTE v131[16]; // [rsp+210h] [rbp-C8h] BYREF
  _BYTE v132[16]; // [rsp+220h] [rbp-B8h] BYREF
  _BYTE v133[16]; // [rsp+230h] [rbp-A8h] BYREF
  __int128 v134; // [rsp+240h] [rbp-98h] BYREF
  __int64 v135[3]; // [rsp+250h] [rbp-88h] BYREF
  __int64 v136[3]; // [rsp+268h] [rbp-70h] BYREF
  char v137[16]; // [rsp+280h] [rbp-58h] BYREF
  char v138[16]; // [rsp+290h] [rbp-48h] BYREF
  char v139[16]; // [rsp+2A0h] [rbp-38h] BYREF

  v8 = a2;
  Handle = 0LL;
  Window = 0LL;
  v104 = 0LL;
  v10 = PtiCurrent(a1, a2);
  v11 = 0;
  v106 = 0;
  v103 = 0;
  Win32HMOptionalThreadLockAlways<tagMENU>::Win32HMOptionalThreadLockAlways<tagMENU>(v118);
  Win32HMOptionalThreadLockAlways<tagMENU>::Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
  v121 = *(HWINSTA *)(a1 + 8);
  v111[0] = W32GetCurrentWin32kSessionId();
  v111[1] = a4;
  LOBYTE(v12) = a6 == 0;
  v13 = ObOpenObjectByName(a1, ExDesktopObjectType, v12, 0LL, a3, v111, &Handle);
  v14 = v13;
  if ( v13 < 0 )
  {
    SetLastNtError(v13);
    CleanupDirtyDesktops();
LABEL_9:
    *a5 = 0LL;
    goto LABEL_123;
  }
  if ( v13 == 0x40000000 )
  {
    if ( !(unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
    {
      SetLastNtError(-1073741801);
      CloseProtectedHandle(Handle);
      v14 = -1073741801;
      goto LABEL_9;
    }
    *a5 = Handle;
    v11 = 1;
  }
  Object = 0LL;
  v16 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, 0LL);
  v14 = v16;
  v17 = (char *)Object;
  if ( v16 < 0 )
  {
    SetLastNtError(v16);
    CloseProtectedHandle(Handle);
    goto LABEL_9;
  }
  Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>::Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>(
    v122,
    (__int64)Object,
    UserDereferenceObject);
  if ( v11 )
  {
    v14 = OpenDesktopCompletion(v17, Handle, v8);
    if ( v14 < 0 )
    {
      CloseProtectedHandle(Handle);
      *a5 = 0LL;
    }
    goto LABEL_13;
  }
  v19 = (struct tagWINDOWSTATION *)*((_QWORD *)v17 + 5);
  v108 = v19;
  v20 = *((_QWORD *)v19 + 7);
  v113 = (_QWORD *)*((_QWORD *)v17 + 1);
  v113[22] = 0LL;
  if ( !(unsigned int)SetHandleFlag(Handle, 0LL, v8 & 1) )
  {
    CloseProtectedHandle(Handle);
    *a5 = 0LL;
    Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>::~Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>((__int64)v122, v22);
    v14 = -1073741801;
    goto LABEL_123;
  }
  if ( *(_QWORD *)(W32GetUserGdiSessionState(v21) + 40) )
  {
    v126[0] = 0LL;
    v126[1] = 0LL;
    v126[2] = 1LL;
    v126[3] = *(_QWORD *)(W32GetUserGdiSessionState(v24) + 40);
    v126[4] = v17;
    v127 = 0;
    v128 = 1;
    v14 = MapDesktop(v126);
    if ( v14 < 0 )
    {
      CloseProtectedHandle(Handle);
      SetLastNtError(-1073741790);
      *a5 = 0LL;
LABEL_13:
      Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>::~Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>((__int64)v122, v18);
      goto LABEL_123;
    }
    v19 = v108;
  }
  v26 = ReferenceDwmApiPort(v24, v23);
  if ( v26 )
  {
    if ( (*((_DWORD *)v19 + 16) & 0x200) != 0 )
    {
      v27 = (void *)ReferenceDwmApiPort(**((_QWORD **)v17 + 1), v25);
      DwmAsyncDesktopCreate(v27);
      zzzComposeDesktop((struct tagDESKTOP *)v17);
      v106 = 1;
    }
    DereferenceDwmApiPort(v26);
  }
  v114 = *((_QWORD *)v10 + 58);
  v117 = *(_QWORD *)(v114 + 344);
  v105 = _InterlockedCompareExchange((volatile signed __int32 *)v10 + 132, 0, 0) & 0x20000000;
  v99 = v105 != 0;
  v28 = *(_QWORD *)(*(_QWORD *)(v20 + 16) + 464LL);
  *((_QWORD *)v10 + 58) = v28;
  if ( (*(_DWORD *)(v28 + 12) & 0x2000000) != 0 )
    _InterlockedOr((volatile signed __int32 *)v10 + 132, 0x20000000u);
  else
    _InterlockedAnd((volatile signed __int32 *)v10 + 132, 0xDFFFFFFF);
  v107 = (_InterlockedCompareExchange((volatile signed __int32 *)v10 + 132, 0, 0) & 0x20000000) != 0;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)v10 + 132, 0, 0) & 0x10000000) != 0 )
  {
    v98 = 0;
  }
  else
  {
    v98 = 1;
    _InterlockedOr((volatile signed __int32 *)v10 + 132, 0x10000000u);
  }
  v116 = *((_QWORD *)v10 + 62);
  v115 = *((_QWORD *)v10 + 79);
  UserSessionState = W32GetUserSessionState(0x10000000LL, v25);
  ++*(_DWORD *)(UserSessionState + 70856);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v109);
  v30 = zzzSetDesktop(v10, v17, Handle);
  if ( v30 < 0 )
    goto LABEL_31;
  v103 = W32SetCurrentThreadDpiAwarenessContext(18LL);
  *(_OWORD *)v119 = *(_OWORD *)GetPhysicalScreenRect(v137);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v31);
  v34 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v33 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v34 = v33 & CurrentProcessWin32Process;
  }
  if ( !v34 )
    goto LABEL_38;
  v35 = PsGetCurrentProcessWin32Process(v33);
  v36 = v35;
  if ( v35 )
    v36 = -(__int64)(*(_QWORD *)v35 != 0LL) & v35;
  v37 = 1;
  if ( !(unsigned int)IsImmersiveAppRestricted(v36) )
LABEL_38:
    v37 = 0;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v135, 0LL);
  Window = (struct tagWND *)xxxCreateWindowEx(
                              0,
                              (wchar_t *)0x8001,
                              32769LL,
                              0LL,
                              -2113929216,
                              v119[0],
                              v119[1],
                              v119[2] - v119[0],
                              v119[3] - v119[1],
                              0LL,
                              (__int64)v135,
                              hModuleWin,
                              0LL,
                              1u,
                              0x30Au,
                              v37,
                              0LL);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v135, v38);
  if ( !Window )
    goto LABEL_40;
  Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)v118, (__int64)Window);
  v40 = PsGetCurrentProcessWin32Process(v39);
  if ( !v40 || (-(__int64)(*(_QWORD *)v40 != 0LL) & v40) == 0 )
    goto LABEL_46;
  v41 = PsGetCurrentProcessWin32Process(-*(_QWORD *)v40);
  if ( v41 )
    v41 &= -(__int64)(*(_QWORD *)v41 != 0LL);
  v100 = 1;
  if ( !(unsigned int)IsImmersiveAppRestricted(v41) )
LABEL_46:
    v100 = 0;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v136, 0LL);
  v44 = *(unsigned __int16 *)(W32GetUserSessionState(v43, v42) + 41392);
  v47 = W32GetUserSessionState(v46, v45);
  v48 = (struct tagWND *)xxxCreateWindowEx(
                           0,
                           (wchar_t *)*(unsigned __int16 *)(v47 + 41392),
                           v44,
                           0LL,
                           -2113929216,
                           0,
                           0,
                           100,
                           100,
                           0LL,
                           (__int64)v136,
                           hModuleWin,
                           0LL,
                           1u,
                           0x30Au,
                           v100,
                           0LL);
  v104 = v48;
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v136, v49);
  if ( !v48 )
  {
LABEL_40:
    v30 = -1073741801;
LABEL_31:
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v109);
    goto LABEL_103;
  }
  v50 = *(unsigned __int16 *)(*((_QWORD *)v48 + 5) + 42LL);
  if ( (v50 & 0xFFFF3FFF) != 0 )
  {
    if ( (v50 & 0x1000) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 2404LL);
    v30 = -1073741790;
    goto LABEL_31;
  }
  Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)BugCheckParameter3, (__int64)v48);
  *(_WORD *)(*((_QWORD *)v48 + 5) + 42LL) = *(_WORD *)(*((_QWORD *)v48 + 5) + 42LL) & 0xC000 | 0x29F;
  v51 = v113 + 3;
  *(_QWORD *)(*v113 + 8LL) = *((_QWORD *)Window + 6);
  v123[0] = v51;
  v123[1] = Window;
  HMAssignmentLock(v123, 0LL);
  v129 = *(_OWORD *)LockPointer(v139, (char *)v48 + 104);
  HMAssignmentLock(&v129, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v130);
  xxxInheritWindowMonitor(v48, 0LL, 0);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v130);
  LinkWindow(v48);
  v124[0] = v17 + 112;
  v124[1] = v48;
  HMAssignmentLock(v124, 0LL);
  *(_QWORD *)(*((_QWORD *)v48 + 5) + 64LL) = 0LL;
  HMAssignmentUnlock((char *)v48 + 120);
  v134 = *(_OWORD *)LockPointer(v138, (char *)Window + 104);
  HMAssignmentLock(&v134, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v131);
  xxxInheritWindowMonitor(Window, 0LL, 0);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v131);
  LinkWindow(Window);
  *(_QWORD *)(*((_QWORD *)Window + 5) + 64LL) = 0LL;
  HMAssignmentUnlock((char *)Window + 120);
  v54 = *(_QWORD *)(W32GetUserSessionState(v53, v52) + 57008);
  if ( (*(_DWORD *)(v54 + 140) & 1) == 0 )
    *(_QWORD *)(*((_QWORD *)Window + 5) + 168LL) = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v55, v54) + 57008)
                                                             + 128LL);
  HMChangeOwnerThread(*v51, *(_QWORD *)(v20 + 16));
  HMChangeOwnerThread(v48, *(_QWORD *)(v20 + 16));
  W32SetCurrentThreadDpiAwarenessContext(v103);
  v103 = 0;
  *((_QWORD *)v10 + 58) = v114;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)v10 + 132, 0, 0) & 0x10000000) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2476LL);
  if ( v98 )
    _InterlockedAnd((volatile signed __int32 *)v10 + 132, 0xEFFFFFFF);
  if ( v107 != v99 )
  {
    if ( v105 )
      _InterlockedOr((volatile signed __int32 *)v10 + 132, 0x20000000u);
    else
      _InterlockedAnd((volatile signed __int32 *)v10 + 132, 0xDFFFFFFF);
  }
  v30 = zzzSetDesktop(v10, v116, v115);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v109);
  if ( v30 >= 0 )
  {
    zzzEndDeferWinEventNotify();
    if ( !*(_QWORD *)(v20 + 56) )
      goto LABEL_79;
    if ( (*(_DWORD *)v20 & 2) == 0 )
    {
      v58 = W32GetUserSessionState(v57, v56);
      v59 = v108;
      *(_QWORD *)(*(_QWORD *)(v58 + 18704) + 656LL) = v108;
      *(_QWORD *)(*(_QWORD *)(v20 + 16) + 656LL) = v59;
LABEL_68:
      KeSetEvent(*(PRKEVENT *)(v20 + 56), 1, 0);
      if ( (*(_DWORD *)v20 & 2) == 0 )
      {
        LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v102, 1);
        for ( i = W32GetUserSessionState(v63, v62); !*(_QWORD *)(i + 19200); i = W32GetUserSessionState(v71, v70) )
        {
          if ( *(_QWORD *)(W32GetUserSessionState(v66, v65) + 63008) )
          {
            Timeout.QuadPart = -200000LL;
            v69 = W32GetUserSessionState(v68, v67);
            KeWaitForSingleObject(*(PVOID *)(v69 + 63008), Executive, 0, 0, &Timeout);
          }
          else
          {
            UserSleep(20LL);
          }
        }
        LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v102);
      }
      v72 = *(void **)(v20 + 56);
      if ( v72 )
      {
        ObfDereferenceObject(v72);
        *(_QWORD *)(v20 + 56) = 0LL;
      }
      v57 = *(volatile signed __int32 **)(W32GetUserSessionState(v72, v61) + 19928);
      _InterlockedOr(v57, 0x800u);
LABEL_79:
      if ( v20 == W32GetUserSessionState(v57, v56) + 68720 )
        xxxSetWindowPos(Window, 1LL, 0LL, 0LL, 0, 0, 1115);
      if ( !v117 )
        DeferrableUnlockObjectAssignment<tagDESKTOP>((_QWORD *)(*((_QWORD *)v10 + 58) + 344LL), v73, v75);
      if ( !*(_QWORD *)(W32GetUserSessionState(v74, v73) + 63024)
        && v17 == *(char **)(W32GetUserSessionState(v77, v76) + 63016) )
      {
        if ( !(unsigned int)xxxCreateDisconnectDesktop(v121, v108) )
        {
          Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3, v78);
          Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(v118, v80);
          CloseDesktop(Handle);
          *a5 = 0LL;
          Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>::~Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>(
            (__int64)v122,
            v81);
          v14 = -1073741823;
          goto LABEL_123;
        }
        v82 = W32GetUserSessionState(v79, v78);
        KeSetEvent(*(PRKEVENT *)(v82 + 62848), 1, 0);
        HYDRA_HINT(0x40000LL);
      }
      v83 = v104;
      goto LABEL_89;
    }
    v60 = W32GetUserSessionState(v57, v56);
    ++*(_DWORD *)(v60 + 70856);
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v125);
    v30 = zzzSetDesktop(*(_QWORD *)(v20 + 16), v17, 0LL);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v125);
    if ( v30 >= 0 )
    {
      zzzEndDeferWinEventNotify();
      goto LABEL_68;
    }
  }
  while ( 1 )
  {
LABEL_103:
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v132);
    if ( v103 )
      W32SetCurrentThreadDpiAwarenessContext(v103);
    v83 = v104;
    if ( v104 )
    {
      xxxDestroyWindow(v104, v89);
      HMAssignmentUnlock(v17 + 112);
    }
    if ( Window )
    {
      xxxDestroyWindow(Window, v89);
      v90 = v113 + 3;
      *(_QWORD *)(*v113 + 8LL) = 0LL;
      HMAssignmentUnlock(v90);
    }
    *((_QWORD *)v10 + 58) = v114;
    if ( v98 )
      _InterlockedAnd((volatile signed __int32 *)v10 + 132, 0xEFFFFFFF);
    if ( v107 != v99 )
    {
      if ( v105 )
        _InterlockedOr((volatile signed __int32 *)v10 + 132, 0x20000000u);
      else
        _InterlockedAnd((volatile signed __int32 *)v10 + 132, 0xDFFFFFFF);
    }
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v132);
    zzzEndDeferWinEventNotify();
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v133);
    zzzSetDesktop(v10, v116, v115);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v133);
    if ( v106 )
    {
      v93 = ReferenceDwmApiPort(v92, v91);
      if ( v93 )
      {
        zzzDecomposeDesktop((struct tagDESKTOP *)v17, 0);
        v94 = (void *)ReferenceDwmApiPort(*((_QWORD *)v17 + 1), **((_QWORD **)v17 + 1));
        DwmAsyncDesktopFree(v94);
        DereferenceDwmApiPort(v93);
        v83 = v104;
      }
    }
    CloseProtectedHandle(Handle);
    Handle = 0LL;
    if ( !v117 )
      DeferrableUnlockObjectAssignment<tagDESKTOP>((_QWORD *)(*((_QWORD *)v10 + 58) + 344LL), v76, v95);
LABEL_89:
    if ( v83 )
      v104 = (struct tagWND *)Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3, v76);
    if ( Window )
      Window = (struct tagWND *)Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(v118, v76);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
      || (v84 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v84 = 0;
    }
    v85 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v84 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v86 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v76);
      LOBYTE(v87) = v85;
      LOBYTE(v88) = v84;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v88,
        v87,
        *(_QWORD *)(v86 + 69416),
        4,
        3,
        24,
        (__int64)&WPP_6e3958beb26f3f5b8556df48f81bef5f_Traceguids);
    }
    if ( !Handle || (unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
      break;
    v30 = -1073741801;
  }
  if ( v30 >= 0 )
    *((_DWORD *)v17 + 12) |= 0x10u;
  *a5 = Handle;
  Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>::~Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>((__int64)v122, v76);
  v14 = v30;
LABEL_123:
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3, v15);
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v118, v96);
  return (unsigned int)v14;
}
