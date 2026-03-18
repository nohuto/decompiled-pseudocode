/*
 * XREFs of ?xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGIW4tagWINDOWSTATIONFLAGS@@KPEAPEAUHWINSTA__@@@Z @ 0x14028A884
 * Callers:
 *     xxxConnectService @ 0x140164060 (xxxConnectService.c)
 *     EditionCreateWindowStationEntryPointEx @ 0x140291DE0 (EditionCreateWindowStationEntryPointEx.c)
 * Callees:
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14002F994 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x1400733C8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x140092FE8 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     IsCurrentSessionServiceSession @ 0x1400A4078 (IsCurrentSessionServiceSession.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     xxxInitWindowStation @ 0x140112ADC (xxxInitWindowStation.c)
 *     ?CreateDesktopNotificationEvent@@YAJPEAX@Z @ 0x14020F144 (-CreateDesktopNotificationEvent@@YAJPEAX@Z.c)
 *     ?xxxCleanupMotherDesktopWindow@@YAXPEAUtagTERMINAL@@@Z @ 0x14021B070 (-xxxCleanupMotherDesktopWindow@@YAXPEAUtagTERMINAL@@@Z.c)
 *     zzzSetDesktop @ 0x14023D170 (zzzSetDesktop.c)
 *     ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x14023F770 (-xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14026F748 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline @ 0x140274BD8 (Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline @ 0x140274C2C (Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall xxxCreateWindowStation(
        __int64 a1,
        __int64 a2,
        ACCESS_MASK a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        int a9,
        __int16 a10,
        int a11,
        HANDLE *a12)
{
  __int64 v12; // rax
  __int64 v13; // rsi
  void *v14; // r15
  void *SecurityDescriptor; // r12
  int v16; // r13d
  char v17; // di
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 *v22; // r14
  NTSTATUS v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // ebx
  struct _EX_RUNDOWN_REF *UserSessionState; // rax
  NTSTATUS DesktopNotificationEvent; // edi
  _QWORD *v30; // rax
  NTSTATUS GlobalAtomTable; // eax
  __int64 v32; // rdx
  NTSTATUS v33; // ecx
  __int64 v34; // rcx
  __int64 *v35; // r13
  struct tagTHREADINFO *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  char v45; // di
  __int64 Window; // rbx
  __int64 v47; // rdx
  void *v48; // r8
  void *v49; // r8
  ULONG v50; // r13d
  ULONG v51; // edi
  _WORD *v52; // rbx
  __int64 v53; // rdx
  NTSTATUS inserted; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  _QWORD *i; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  PVOID v60; // r13
  struct tagTHREADINFO *v61; // rax
  __int64 v62; // rdx
  struct tagTHREADINFO *v63; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v65; // edi
  BOOL v66; // ebx
  __int64 v67; // rdx
  PVOID v68; // rcx
  __int64 v69; // rax
  char v70; // r13
  __int64 v71; // rbx
  __int64 v72; // rdx
  PVOID Object; // [rsp+98h] [rbp-80h] BYREF
  int v74; // [rsp+A0h] [rbp-78h]
  char v75[8]; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v76; // [rsp+B0h] [rbp-68h]
  void *v77; // [rsp+B8h] [rbp-60h]
  HANDLE Handle; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v79; // [rsp+C8h] [rbp-50h]
  _QWORD v80[2]; // [rsp+D0h] [rbp-48h] BYREF
  _QWORD v81[3]; // [rsp+E0h] [rbp-38h] BYREF
  _QWORD v82[2]; // [rsp+F8h] [rbp-20h] BYREF
  __int64 v83[10]; // [rsp+108h] [rbp-10h] BYREF
  char v84; // [rsp+168h] [rbp+50h]

  v12 = *(_QWORD *)(a1 + 32);
  Object = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  Handle = 0LL;
  SecurityDescriptor = 0LL;
  v74 = 0;
  v16 = 0;
  v80[0] = v12;
  v17 = a2;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 63560) )
  {
    v22 = (__int64 *)(W32GetUserSessionState(v20, v19) + 68792);
    *(_DWORD *)v22 |= 2u;
  }
  else
  {
    v22 = (__int64 *)(W32GetUserSessionState(v20, v19) + 68720);
  }
  LOBYTE(v21) = v17;
  v23 = ObCreateObject(0LL, ExWindowStationObjectType, a1, v21, 0LL, 264, 0, 0, &Object);
  v26 = v23;
  if ( v23 < 0 )
  {
    SetLastNtError(v23);
    return v26;
  }
  UserSessionState = (struct _EX_RUNDOWN_REF *)W32GetUserSessionState(v25, v24);
  if ( !ExAcquireRundownProtection(UserSessionState + 7946) )
  {
    DesktopNotificationEvent = -1073741790;
LABEL_75:
    SetLastNtError(DesktopNotificationEvent);
    v68 = Object;
    if ( Object )
      ObfDereferenceObject(Object);
    if ( v16 )
    {
      v69 = W32GetUserSessionState(v68, v67);
      ++*(_DWORD *)(v69 + 70856);
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v13 + 528), 0, 0) & 0x10000000) != 0 )
      {
        v70 = 0;
      }
      else
      {
        v70 = 1;
        _InterlockedOr((volatile signed __int32 *)(v13 + 528), 0x10000000u);
      }
      v71 = *(_QWORD *)(v13 + 464);
      *(_QWORD *)(v13 + 464) = *(_QWORD *)(v22[2] + 464);
      HMChangeOwnerThread(v22[1], v13);
      LOBYTE(v80[0]) = 0;
      v80[1] = 0LL;
      AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v80, v72);
      xxxCleanupMotherDesktopWindow((struct tagTERMINAL *)v22);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v80);
      *(_QWORD *)(v13 + 464) = v71;
      if ( v70 )
        _InterlockedAnd((volatile signed __int32 *)(v13 + 528), 0xEFFFFFFF);
      zzzEndDeferWinEventNotify();
    }
    if ( Handle )
      ObCloseHandle(Handle, 1);
    if ( SecurityDescriptor )
      Win32FreePool(SecurityDescriptor);
    if ( v14 )
      ObfDereferenceObject(v14);
    return (unsigned int)DesktopNotificationEvent;
  }
  memset_0(Object, 0, 0x108uLL);
  v30 = (char *)Object + 232;
  *((_QWORD *)Object + 30) = (char *)Object + 232;
  *v30 = v30;
  *(_DWORD *)Object = W32GetCurrentWin32kSessionId();
  *((_DWORD *)Object + 54) = a11;
  *((_QWORD *)Object + 7) = v22;
  if ( (*(_DWORD *)v22 & 2) != 0 )
  {
    *((_DWORD *)Object + 16) = 4;
  }
  else if ( (a10 & 0x800) != 0 )
  {
    *((_DWORD *)Object + 16) |= 0x800u;
  }
  GlobalAtomTable = CreateGlobalAtomTable((char *)Object + 168);
  DesktopNotificationEvent = GlobalAtomTable;
  if ( GlobalAtomTable < 0
    || (*(_DWORD *)v22 & 1) == 0
    && (GlobalAtomTable = xxxInitTerminal((struct tagTERMINAL *)v22),
        DesktopNotificationEvent = GlobalAtomTable,
        GlobalAtomTable < 0) )
  {
    v33 = GlobalAtomTable;
LABEL_14:
    SetLastNtError(v33);
    goto LABEL_75;
  }
  v34 = *((unsigned int *)Object + 16);
  if ( (v34 & 4) == 0 && !(unsigned int)xxxInitWindowStation() )
  {
    DesktopNotificationEvent = -1073741801;
    v33 = -1073741801;
    goto LABEL_14;
  }
  v35 = v22 + 1;
  if ( !v22[1] )
  {
    v36 = PtiCurrent(v34, v32);
    v37 = v22[2];
    v13 = (__int64)v36;
    v38 = *((_QWORD *)v36 + 58);
    v14 = (void *)*((_QWORD *)v36 + 62);
    v39 = *(_QWORD *)(v37 + 464);
    *((_QWORD *)v36 + 58) = v39;
    v77 = (void *)*((_QWORD *)v36 + 79);
    v79 = v38;
    if ( v14 )
    {
      ObfReferenceObject(v14);
    }
    else if ( *((struct tagTHREADINFO **)v36 + 97) != (struct tagTHREADINFO *)((char *)v36 + 776) )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 561);
    }
    v40 = W32GetUserSessionState(v37, v39);
    v75[0] = 0;
    v76 = 0LL;
    ++*(_DWORD *)(v40 + 70856);
    AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v75, v41);
    DesktopNotificationEvent = zzzSetDesktop(v13, 0LL, 0LL);
    if ( DesktopNotificationEvent < 0 )
    {
      if ( !*(_QWORD *)(v13 + 496) && v14 )
        zzzSetDesktop(v13, (unsigned int *)v14, v77);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v75);
      zzzEndDeferWinEventNotify();
      *(_QWORD *)(v13 + 464) = v38;
      goto LABEL_30;
    }
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v13 + 528), 0, 0) & 0x10000000) != 0 )
    {
      v84 = 0;
    }
    else
    {
      v84 = 1;
      _InterlockedOr((volatile signed __int32 *)(v13 + 528), 0x10000000u);
    }
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(0x10000000LL);
    if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
      goto LABEL_39;
    v44 = PsGetCurrentProcessWin32Process(v43);
    if ( v44 )
      v44 &= -(__int64)(*(_QWORD *)v44 != 0LL);
    v45 = 1;
    if ( !(unsigned int)IsImmersiveAppRestricted(v44) )
LABEL_39:
      v45 = 0;
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v83, 0LL);
    Window = xxxCreateWindowEx(
               0,
               (wchar_t *)0x8001,
               32769LL,
               0LL,
               -2113929216,
               -32768,
               -32768,
               0xFFFF,
               0xFFFF,
               0LL,
               (__int64)v83,
               hModuleWin,
               0LL,
               1u,
               0x30Au,
               v45,
               0LL);
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v83, v47);
    if ( !Window )
    {
      DesktopNotificationEvent = -1073741801;
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v75);
      zzzEndDeferWinEventNotify();
      v48 = v77;
      *(_QWORD *)(v13 + 464) = v79;
      zzzSetDesktop(v13, (unsigned int *)v14, v48);
LABEL_30:
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v75);
      v16 = 0;
      goto LABEL_75;
    }
    v82[0] = v22 + 1;
    v82[1] = Window;
    HMAssignmentLock(v82, 0LL);
    if ( v84 )
      _InterlockedAnd((volatile signed __int32 *)(v13 + 528), 0xEFFFFFFF);
    SetVisible(*v35, 1u);
    HMChangeOwnerThread(*v35, v22[2]);
    v16 = 1;
    v49 = v77;
    *(_QWORD *)(v13 + 464) = v79;
    v74 = 1;
    DesktopNotificationEvent = zzzSetDesktop(v13, (unsigned int *)v14, v49);
    if ( DesktopNotificationEvent < 0 )
    {
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v75);
      zzzEndDeferWinEventNotify();
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v75);
      goto LABEL_75;
    }
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v75);
    zzzEndDeferWinEventNotify();
    if ( v14 )
    {
      ObfDereferenceObject(v14);
      v14 = 0LL;
    }
  }
  if ( (*((_DWORD *)Object + 16) & 4) == 0 )
  {
    v50 = RtlLengthSid(SeExports->SeWorldSid);
    v51 = v50 + 8;
    v52 = (_WORD *)Win32AllocPoolWithQuotaZInit(v50 + 8, 1702064981LL);
    if ( v52
      && (*v52 = 0,
          v52[1] = v51,
          *((_DWORD *)v52 + 1) = 0x100000,
          RtlCopySid(v50, v52 + 4, SeExports->SeWorldSid),
          SecurityDescriptor = (void *)CreateSecurityDescriptor(v52, v51, 0LL),
          Win32FreePool(v52),
          SecurityDescriptor) )
    {
      DesktopNotificationEvent = CreateDesktopNotificationEvent(SecurityDescriptor, v53);
      if ( DesktopNotificationEvent >= 0 )
      {
        Win32FreePool(SecurityDescriptor);
        goto LABEL_54;
      }
    }
    else
    {
      DesktopNotificationEvent = -1073741801;
    }
LABEL_74:
    v16 = v74;
    goto LABEL_75;
  }
LABEL_54:
  inserted = ObInsertObject(Object, 0LL, a3, 1u, &Object, &Handle);
  SecurityDescriptor = 0LL;
  DesktopNotificationEvent = inserted;
  if ( inserted < 0 )
  {
    Object = 0LL;
    goto LABEL_74;
  }
  if ( inserted != 0x40000000 )
  {
    DesktopNotificationEvent = ApplySecurityAttributesToWinsta(Object, v80[0]);
    if ( DesktopNotificationEvent >= 0 )
    {
      for ( i = (_QWORD *)(W32GetUserSessionState(v56, v55) + 63560); *i; i = (_QWORD *)(*i + 8LL) )
        ;
      LockObjectAssignment(i, Object);
      v60 = Object;
      if ( (*((_DWORD *)Object + 16) & 4) == 0 )
      {
        if ( a8 )
        {
          v61 = PtiCurrent(v59, v58);
          v81[0] = *((_QWORD *)v61 + 48);
          *((_QWORD *)v61 + 48) = v81;
          v81[2] = UserDereferenceObject;
          v81[1] = v60;
          if ( !xxxSafeLoadKeyboardLayoutEx(Object, a4, 0LL, a5, a6, a7, a8, a9, -2147483647) )
            DesktopNotificationEvent = -1073741823;
          v63 = PtiCurrent(3221225473LL, v62);
          *((_QWORD *)v63 + 48) = v81[0];
        }
      }
    }
    if ( DesktopNotificationEvent < 0 )
      goto LABEL_74;
  }
  if ( !IsCurrentSessionServiceSession() && (*((_DWORD *)Object + 16) & 0x804) == 0 )
  {
    IsEnabledDeviceUsageNoInline = Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline();
    v65 = (IsEnabledDeviceUsageNoInline != 0) + 2;
    v66 = IsEnabledDeviceUsageNoInline != 0;
    if ( !(unsigned int)Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline() )
      v65 = v66;
    if ( v65 )
      tagWINDOWSTATION::SetPolicy(Object, v65);
  }
  ObfDereferenceObject(Object);
  *a12 = Handle;
  return 0LL;
}
