/*
 * XREFs of xxxCreateDesktopEx @ 0x1C00293D4
 * Callers:
 *     EditionCreateDesktopEntryPoint @ 0x1C0027E60 (EditionCreateDesktopEntryPoint.c)
 *     xxxResolveDesktop @ 0x1C0028660 (xxxResolveDesktop.c)
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C0097F5C (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     xxxConnectService @ 0x1C0137AE0 (xxxConnectService.c)
 * Callees:
 *     DwmAsyncDesktopFree @ 0x1C0020658 (DwmAsyncDesktopFree.c)
 *     zzzDecomposeDesktop @ 0x1C00206F8 (zzzDecomposeDesktop.c)
 *     DwmAsyncDesktopCreate @ 0x1C002217C (DwmAsyncDesktopCreate.c)
 *     zzzComposeDesktop @ 0x1C0022F04 (zzzComposeDesktop.c)
 *     _CloseDesktop @ 0x1C0028218 (_CloseDesktop.c)
 *     OpenDesktopCompletion @ 0x1C002A624 (OpenDesktopCompletion.c)
 *     CloseProtectedHandle @ 0x1C002B684 (CloseProtectedHandle.c)
 *     zzzSetDesktop @ 0x1C002B850 (zzzSetDesktop.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAX@Z @ 0x1C002BE08 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MapDesktop @ 0x1C00448C0 (MapDesktop.c)
 *     xxxSetWindowPos @ 0x1C0045448 (xxxSetWindowPos.c)
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C0097F5C (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     xxxInheritWindowMonitor @ 0x1C00B04C0 (xxxInheritWindowMonitor.c)
 *     LinkWindow @ 0x1C00B5F60 (LinkWindow.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00B7028 (zzzEndDeferWinEventNotify.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C0138954 (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C013897C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage @ 0x1C0139A10 (Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x1C0139FC4 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0139FF4 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CleanupDirtyDesktops@@YAXXZ @ 0x1C01BDDA4 (-CleanupDirtyDesktops@@YAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCreateDesktopEx(union _LARGE_INTEGER *a1, unsigned int a2, int a3, int a4, HANDLE *a5, int a6)
{
  __int64 v10; // r13
  int v11; // r12d
  __int64 v12; // r8
  NTSTATUS v13; // eax
  int v14; // ebx
  ULONG v15; // eax
  ULONG v16; // eax
  int v17; // eax
  char *v18; // rdi
  ULONG v19; // eax
  __int64 v20; // rbx
  __int64 v21; // r12
  __int64 v22; // rcx
  ULONG v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r15
  __int64 v27; // r9
  __int64 **v28; // rax
  __int64 v29; // rbx
  void *v30; // rax
  int v31; // ecx
  int v32; // r8d
  __int64 v33; // rdx
  unsigned int v34; // ecx
  int v35; // r15d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  int v41; // r15d
  struct tagWND *Window; // r15
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  int v46; // eax
  struct tagWND *v47; // rbx
  int v48; // ecx
  _QWORD *v49; // rdx
  int IsEnabledDeviceUsage; // eax
  int v51; // r15d
  struct tagWINDOWSTATION *v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rax
  unsigned int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // rcx
  void *v58; // rcx
  bool v59; // zf
  struct tagWND *v60; // r12
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // r8
  _BOOL8 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 ThreadWin32Thread; // rax
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // r8
  _BOOL8 v73; // rcx
  __int64 v74; // rax
  int v75; // edx
  _UNKNOWN **v76; // r8
  _QWORD *v77; // rcx
  __int64 v78; // rcx
  unsigned int v79; // eax
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 **v83; // rcx
  __int64 v84; // rbx
  void *v85; // rax
  __int64 v86; // rdx
  __int64 v87; // r8
  __int64 v88; // r9
  _BYTE v89[4]; // [rsp+90h] [rbp-208h] BYREF
  int v90; // [rsp+94h] [rbp-204h]
  char v91; // [rsp+98h] [rbp-200h] BYREF
  char v92; // [rsp+99h] [rbp-1FFh] BYREF
  _BYTE v93[6]; // [rsp+9Ah] [rbp-1FEh] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-1F8h] BYREF
  _BYTE v95[4]; // [rsp+A8h] [rbp-1F0h] BYREF
  unsigned int v96; // [rsp+ACh] [rbp-1ECh]
  int v97; // [rsp+B0h] [rbp-1E8h]
  union _LARGE_INTEGER Timeout; // [rsp+B8h] [rbp-1E0h] BYREF
  int v99; // [rsp+C0h] [rbp-1D8h]
  __int64 v100; // [rsp+C8h] [rbp-1D0h]
  struct tagWND *v101[2]; // [rsp+D0h] [rbp-1C8h]
  struct tagWINDOWSTATION *v102; // [rsp+E8h] [rbp-1B0h]
  _QWORD *v103; // [rsp+F0h] [rbp-1A8h]
  __int64 v104; // [rsp+F8h] [rbp-1A0h]
  _DWORD v105[2]; // [rsp+100h] [rbp-198h] BYREF
  PVOID Object; // [rsp+108h] [rbp-190h] BYREF
  __int64 v107; // [rsp+110h] [rbp-188h]
  __int64 v108; // [rsp+118h] [rbp-180h]
  __int64 v109; // [rsp+120h] [rbp-178h]
  union _LARGE_INTEGER v110; // [rsp+130h] [rbp-168h]
  _QWORD v111[3]; // [rsp+138h] [rbp-160h] BYREF
  int v112; // [rsp+150h] [rbp-148h]
  int v113; // [rsp+154h] [rbp-144h]
  __int128 v114; // [rsp+158h] [rbp-140h] BYREF
  __int64 v115; // [rsp+168h] [rbp-130h]
  _QWORD v116[2]; // [rsp+170h] [rbp-128h] BYREF
  _QWORD v117[2]; // [rsp+180h] [rbp-118h] BYREF
  _QWORD v118[4]; // [rsp+190h] [rbp-108h] BYREF
  __int128 v119; // [rsp+1B0h] [rbp-E8h] BYREF
  __int128 v120; // [rsp+1C0h] [rbp-D8h] BYREF
  _BYTE v121[24]; // [rsp+1D0h] [rbp-C8h] BYREF
  __int128 v122; // [rsp+1E8h] [rbp-B0h] BYREF
  __int64 v123; // [rsp+1F8h] [rbp-A0h]
  _BYTE v124[24]; // [rsp+200h] [rbp-98h] BYREF
  __int128 v125; // [rsp+218h] [rbp-80h] BYREF
  __int64 v126; // [rsp+228h] [rbp-70h]
  _BYTE v127[24]; // [rsp+230h] [rbp-68h] BYREF
  __int128 v128; // [rsp+248h] [rbp-50h] BYREF
  __int64 v129; // [rsp+258h] [rbp-40h]
  _BYTE v130[16]; // [rsp+260h] [rbp-38h] BYREF
  _BYTE v131[16]; // [rsp+270h] [rbp-28h] BYREF

  Handle = 0LL;
  v101[0] = 0LL;
  v100 = 0LL;
  v10 = 0LL;
  v122 = 0LL;
  v123 = 0LL;
  v125 = 0LL;
  v126 = 0LL;
  v128 = 0LL;
  v129 = 0LL;
  v11 = 0;
  v114 = 0LL;
  v115 = 0LL;
  v99 = 0;
  v96 = 0;
  Timeout = a1[1];
  v110 = Timeout;
  v105[0] = *(_DWORD *)SGDGetUserSessionState(0LL);
  v105[1] = a4;
  LOBYTE(v12) = a6 == 0;
  v13 = ObOpenObjectByName(a1, ExDesktopObjectType, v12, 0LL, a3, v105, &Handle);
  v14 = v13;
  if ( v13 < 0 )
  {
    v15 = RtlNtStatusToDosError(v13);
    UserSetLastError(v15);
    CleanupDirtyDesktops();
LABEL_96:
    *a5 = 0LL;
    return (unsigned int)v14;
  }
  if ( v13 == 0x40000000 )
  {
    if ( !(unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
    {
      v16 = RtlNtStatusToDosError(-1073741801);
      UserSetLastError(v16);
      CloseProtectedHandle(Handle);
LABEL_6:
      v14 = -1073741801;
      goto LABEL_96;
    }
    *a5 = Handle;
    v11 = 1;
  }
  Object = 0LL;
  v17 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, 0LL);
  v14 = v17;
  v18 = (char *)Object;
  if ( v17 < 0 )
  {
    v19 = RtlNtStatusToDosError(v17);
    UserSetLastError(v19);
    CloseProtectedHandle(Handle);
    goto LABEL_96;
  }
  if ( v11 )
  {
    v14 = OpenDesktopCompletion(Object, Handle, a2);
    if ( v14 < 0 )
    {
      CloseProtectedHandle(Handle);
      *a5 = 0LL;
    }
    ObfDereferenceObject(v18);
    return (unsigned int)v14;
  }
  v20 = *((_QWORD *)Object + 5);
  v102 = (struct tagWINDOWSTATION *)v20;
  v21 = *(_QWORD *)(v20 + 56);
  v103 = (_QWORD *)*((_QWORD *)Object + 1);
  v103[22] = 0LL;
  if ( !(unsigned int)SetHandleFlag(Handle, 0LL, a2 & 1) )
  {
    CloseProtectedHandle(Handle);
    ObfDereferenceObject(v18);
    goto LABEL_6;
  }
  v22 = gpepCSRSS;
  if ( gpepCSRSS )
  {
    v111[0] = 1LL;
    v111[1] = gpepCSRSS;
    v111[2] = v18;
    v112 = 0;
    v113 = 1;
    v90 = MapDesktop(v111);
    if ( v90 < 0 )
    {
      CloseProtectedHandle(Handle);
      ObfDereferenceObject(v18);
      v23 = RtlNtStatusToDosError(-1073741790);
      UserSetLastError(v23);
      v14 = v90;
      goto LABEL_96;
    }
  }
  v26 = ReferenceDwmApiPort(v22, 0LL);
  v27 = 0LL;
  if ( v26 )
  {
    if ( (*(_DWORD *)(v20 + 64) & 0x200) != 0 )
    {
      v28 = (__int64 **)*((_QWORD *)v18 + 1);
      v29 = **v28;
      v30 = (void *)ReferenceDwmApiPort(*v28, v24);
      DwmAsyncDesktopCreate(v30, v29);
      zzzComposeDesktop((struct tagDESKTOP *)v18);
      v99 = 1;
    }
    DereferenceDwmApiPort(v26, v24, v25, v27);
  }
  v107 = *(_QWORD *)(gptiCurrent + 424LL);
  v31 = *(_DWORD *)(gptiCurrent + 488LL);
  v32 = v31 & 0x20000000;
  v97 = v31 & 0x20000000;
  v33 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 424LL);
  *(_QWORD *)(gptiCurrent + 424LL) = v33;
  if ( (*(_DWORD *)(v33 + 12) & 0x2000000) != 0 )
  {
    v34 = v31 | 0x20000000;
    *(_DWORD *)(gptiCurrent + 488LL) = v34;
    if ( !*(_QWORD *)(v33 + 768) )
    {
      v90 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2200LL);
      v34 = *(_DWORD *)(gptiCurrent + 488LL);
      v33 = *(_QWORD *)(gptiCurrent + 424LL);
      v32 = v97;
    }
  }
  else
  {
    v34 = v31 & 0xDFFFFFFF;
  }
  v97 = v34 & 0x10000000 | v32;
  *(_DWORD *)(gptiCurrent + 488LL) = v34 | 0x10000000;
  v104 = *(_QWORD *)(v33 + 344);
  v109 = *(_QWORD *)(gptiCurrent + 456LL);
  v108 = *(_QWORD *)(gptiCurrent + 592LL);
  PushW32ThreadLock(v18, &v114, UserDereferenceObject);
  ++gdwDeferWinEvent;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v89);
  v35 = zzzSetDesktop(gptiCurrent);
  if ( v35 < 0 )
    goto LABEL_28;
  v96 = W32SetCurrentThreadDpiAwarenessContext(18LL);
  *(_OWORD *)v101 = *(_OWORD *)(*gpDispInfo + 24LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(gpDispInfo);
  v38 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v37 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v38 = v37 & CurrentProcessWin32Process;
  }
  if ( !v38 )
    goto LABEL_35;
  v39 = PsGetCurrentProcessWin32Process(v37);
  v40 = v39;
  if ( v39 )
    v40 = -(__int64)(*(_QWORD *)v39 != 0LL) & v39;
  v41 = 1;
  if ( !(unsigned int)IsImmersiveAppRestricted(v40) )
LABEL_35:
    v41 = 0;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v121, 0LL);
  Window = (struct tagWND *)xxxCreateWindowEx(
                              0,
                              32769,
                              32769,
                              0,
                              -2113929216,
                              v101[0],
                              HIDWORD(v101[0]),
                              LODWORD(v101[1]) - LODWORD(v101[0]),
                              HIDWORD(v101[1]) - HIDWORD(v101[0]),
                              0LL,
                              (__int64)v121,
                              hModuleWin,
                              0LL,
                              1,
                              778,
                              v41,
                              0LL);
  v101[0] = Window;
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v121);
  if ( !Window )
    goto LABEL_37;
  ThreadLock(Window, &v122);
  v44 = PsGetCurrentProcessWin32Process(v43);
  if ( !v44 || (-(__int64)(*(_QWORD *)v44 != 0LL) & v44) == 0 )
    goto LABEL_43;
  v45 = PsGetCurrentProcessWin32Process(-*(_QWORD *)v44);
  if ( v45 )
    v45 &= -(__int64)(*(_QWORD *)v45 != 0LL);
  v46 = IsImmersiveAppRestricted(v45);
  v90 = 1;
  if ( !v46 )
LABEL_43:
    v90 = 0;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v124, 0LL);
  v47 = (struct tagWND *)xxxCreateWindowEx(
                           0,
                           (unsigned __int16)gatomMessage,
                           (unsigned __int16)gatomMessage,
                           0,
                           -2113929216,
                           0,
                           0,
                           100,
                           100,
                           0LL,
                           (__int64)v124,
                           hModuleWin,
                           0LL,
                           1,
                           778,
                           v90,
                           0LL);
  v100 = (__int64)v47;
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v124);
  if ( !v47 )
    goto LABEL_37;
  v48 = *(unsigned __int16 *)(*((_QWORD *)v47 + 5) + 42LL);
  if ( (v48 & 0xFFFF3FFF) != 0 )
  {
    if ( (v48 & 0x1000) != 0 )
    {
      v90 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 2305LL);
    }
    v35 = -1073741790;
    goto LABEL_28;
  }
  ThreadLock(v47, &v125);
  *(_WORD *)(*((_QWORD *)v47 + 5) + 42LL) = *(_WORD *)(*((_QWORD *)v47 + 5) + 42LL) & 0xC000 | 0x29F;
  v49 = v103 + 3;
  *(_QWORD *)(*v103 + 8LL) = *((_QWORD *)Window + 6);
  v116[0] = v49;
  v116[1] = Window;
  HMAssignmentLock(v116, 0LL);
  v119 = *(_OWORD *)LockPointer(v130, (char *)v47 + 104, *(_QWORD *)(v21 + 8));
  HMAssignmentLock(&v119, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v95);
  xxxInheritWindowMonitor(v47);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v95);
  LinkWindow(v47);
  v117[0] = v18 + 104;
  v117[1] = v47;
  HMAssignmentLock(v117, 0LL);
  *(_QWORD *)(*((_QWORD *)v47 + 5) + 64LL) = 0LL;
  HMAssignmentUnlock((char *)v47 + 120);
  v120 = *(_OWORD *)LockPointer(v131, (char *)Window + 104, *(_QWORD *)(v21 + 8));
  HMAssignmentLock(&v120, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v91);
  xxxInheritWindowMonitor(Window);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v91);
  LinkWindow(Window);
  *(_QWORD *)(*((_QWORD *)Window + 5) + 64LL) = 0LL;
  HMAssignmentUnlock((char *)Window + 120);
  if ( (*(_DWORD *)(gpDispInfo + 132LL) & 1) == 0 )
    *(_QWORD *)(*((_QWORD *)Window + 5) + 168LL) = *(_QWORD *)(gpDispInfo + 120LL);
  IsEnabledDeviceUsage = Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage();
  v51 = 0;
  v52 = v102;
  if ( !IsEnabledDeviceUsage && (*((_DWORD *)v102 + 16) & 4) == 0 )
  {
    v53 = PsGetCurrentProcessWin32Process(IsEnabledDeviceUsage != 0);
    if ( v53 && (-(__int64)(*(_QWORD *)v53 != 0LL) & v53) != 0 )
    {
      v54 = PsGetCurrentProcessWin32Process(-*(_QWORD *)v53);
      if ( v54 )
        v54 &= -(__int64)(*(_QWORD *)v54 != 0LL);
      if ( (unsigned int)IsImmersiveAppRestricted(v54) )
        v51 = 1;
    }
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v127, 0LL);
    v10 = xxxCreateWindowEx(
            136,
            32774,
            32774,
            0,
            -2139095040,
            0,
            0,
            100,
            100,
            *((_QWORD *)v18 + 13),
            (__int64)v127,
            hModuleWin,
            0LL,
            1,
            778,
            v51,
            0LL);
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v127);
    if ( v10 )
    {
      v118[0] = v18 + 112;
      v118[1] = v10;
      HMAssignmentLock(v118, 0LL);
      ThreadLock(v10, &v128);
      v52 = v102;
      goto LABEL_61;
    }
LABEL_37:
    v35 = -1073741801;
LABEL_28:
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v89);
    goto LABEL_116;
  }
LABEL_61:
  HMChangeOwnerThread(v103[3], *(_QWORD *)(v21 + 16));
  HMChangeOwnerThread(v100, *(_QWORD *)(v21 + 16));
  if ( !(unsigned int)Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage()
    && (*((_DWORD *)v52 + 16) & 4) == 0 )
  {
    HMChangeOwnerThread(v10, *(_QWORD *)(v21 + 16));
  }
  W32SetCurrentThreadDpiAwarenessContext(v96);
  v96 = 0;
  *(_QWORD *)(gptiCurrent + 424LL) = v107;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x10000000) == 0 )
  {
    v90 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2411LL);
  }
  v55 = v97 | *(_DWORD *)(gptiCurrent + 488LL) & 0xCFFFFFFF;
  *(_DWORD *)(gptiCurrent + 488LL) = v55;
  if ( (v55 & 0x20000000) != 0 && !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 768LL) )
  {
    v90 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2413LL);
  }
  v35 = zzzSetDesktop(gptiCurrent);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v89);
  if ( v35 >= 0 )
  {
    zzzEndDeferWinEventNotify(v56);
    if ( !*(_QWORD *)(v21 + 56) )
    {
LABEL_85:
      v59 = v21 == gTermIO[0];
      v60 = v101[0];
      if ( v59 )
        xxxSetWindowPos(v101[0], 0, 0, 1115);
      if ( !v104 )
        UnlockObjectAssignment(*(_QWORD *)(gptiCurrent + 424LL) + 344LL);
      if ( gspdeskDisconnect || v18 != grpdeskLogon )
        goto LABEL_99;
      if ( xxxCreateDisconnectDesktop((HWINSTA)Timeout.QuadPart, v52) )
      {
        KeSetEvent(gpEventDiconnectDesktop, 1, 0);
        gdwHydraHint |= 0x40000u;
        goto LABEL_99;
      }
      v61 = Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage();
      v64 = v61 != 0;
      if ( !v61 && v10 )
        ThreadUnlock1(v64, v62, v63);
      ThreadUnlock1(v64, v62, v63);
      ThreadUnlock1(v66, v65, v67);
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)(ThreadWin32Thread + 16) = v114;
      ObfDereferenceObject(v18);
      CloseDesktop((unsigned __int64)Handle, 0);
      v14 = -1073741823;
      goto LABEL_96;
    }
    if ( (*(_DWORD *)v21 & 2) == 0 )
    {
      *(_QWORD *)(gptiRit + 616LL) = v52;
      *(_QWORD *)(*(_QWORD *)(v21 + 16) + 616LL) = v52;
LABEL_75:
      KeSetEvent(*(PRKEVENT *)(v21 + 56), 1, 0);
      if ( (*(_DWORD *)v21 & 2) == 0 )
      {
        LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v92);
        while ( !grpdeskRitInput )
        {
          if ( gpEventSwitchDesktop )
          {
            Timeout.QuadPart = -200000LL;
            KeWaitForSingleObject(gpEventSwitchDesktop, Executive, 0, 0, &Timeout);
          }
          else
          {
            UserSleep(20LL);
          }
        }
        LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v92);
      }
      v58 = *(void **)(v21 + 56);
      if ( v58 )
      {
        ObfDereferenceObject(v58);
        *(_QWORD *)(v21 + 56) = 0LL;
      }
      _InterlockedOr(gpsi, 0x800u);
      Timeout = v110;
      goto LABEL_85;
    }
    ++gdwDeferWinEvent;
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v93);
    v35 = zzzSetDesktop(*(struct tagTHREADINFO **)(v21 + 16));
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v93);
    if ( v35 >= 0 )
    {
      zzzEndDeferWinEventNotify(v57);
      goto LABEL_75;
    }
  }
  while ( 1 )
  {
LABEL_116:
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v92);
    if ( v96 )
      W32SetCurrentThreadDpiAwarenessContext(v96);
    if ( !(unsigned int)Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage() && v10 )
    {
      xxxDestroyWindow(v10);
      HMAssignmentUnlock(v18 + 112);
    }
    if ( v100 )
    {
      xxxDestroyWindow(v100);
      HMAssignmentUnlock(v18 + 104);
    }
    v60 = v101[0];
    if ( v101[0] )
    {
      xxxDestroyWindow(v101[0]);
      v77 = v103 + 3;
      *(_QWORD *)(*v103 + 8LL) = 0LL;
      HMAssignmentUnlock(v77);
    }
    v78 = v107;
    *(_QWORD *)(gptiCurrent + 424LL) = v107;
    v79 = v97 | *(_DWORD *)(gptiCurrent + 488LL) & 0xCFFFFFFF;
    *(_DWORD *)(gptiCurrent + 488LL) = v79;
    if ( (v79 & 0x20000000) != 0 && !*(_QWORD *)(v78 + 768) )
    {
      v90 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2631LL);
    }
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v92);
    zzzEndDeferWinEventNotify(v80);
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v91);
    zzzSetDesktop(gptiCurrent);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v91);
    if ( v99 )
    {
      Timeout.QuadPart = ReferenceDwmApiPort(v82, v81);
      if ( Timeout.QuadPart )
      {
        zzzDecomposeDesktop((struct tagDESKTOP *)v18);
        v83 = (__int64 **)*((_QWORD *)v18 + 1);
        v84 = **v83;
        v85 = (void *)ReferenceDwmApiPort(v83, *v83);
        DwmAsyncDesktopFree(v85, v84);
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))DereferenceDwmApiPort)(
          (union _LARGE_INTEGER)Timeout.QuadPart,
          v86,
          v87,
          v88);
      }
    }
    CloseProtectedHandle(Handle);
    Handle = 0LL;
    if ( !v104 )
      UnlockObjectAssignment(*(_QWORD *)(gptiCurrent + 424LL) + 344LL);
LABEL_99:
    v70 = Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage();
    v73 = v70 != 0;
    if ( !v70 && v10 )
      v10 = ThreadUnlock1(v73, v71, v72);
    if ( v100 )
      v100 = ThreadUnlock1(v73, v71, v72);
    if ( v60 )
      v101[0] = (struct tagWND *)ThreadUnlock1(v73, v71, v72);
    v74 = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)(v74 + 16) = v114;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
      || (LOBYTE(v75) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v75) = 0;
    }
    v76 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v75 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v76) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v75,
        (_DWORD)v76,
        22,
        4,
        3,
        22,
        (__int64)&WPP_580b03b5f0a135a81a235548571d0f77_Traceguids);
    }
    if ( !Handle || (unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
      break;
    v35 = -1073741801;
  }
  if ( v35 >= 0 )
    *((_DWORD *)v18 + 12) |= 0x10u;
  ObfDereferenceObject(v18);
  *a5 = Handle;
  return (unsigned int)v35;
}
