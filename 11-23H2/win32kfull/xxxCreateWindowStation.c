/*
 * XREFs of xxxCreateWindowStation @ 0x1C002BE34
 * Callers:
 *     xxxConnectService @ 0x1C0137AE0 (xxxConnectService.c)
 *     EditionCreateWindowStationEntryPointEx @ 0x1C013B780 (EditionCreateWindowStationEntryPointEx.c)
 * Callees:
 *     zzzSetDesktop @ 0x1C002B850 (zzzSetDesktop.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C007BA50 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x1C008DFB0 (-xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z.c)
 *     ?CreateDesktopNotificationEvent@@YAJPEAX@Z @ 0x1C008FE88 (-CreateDesktopNotificationEvent@@YAJPEAX@Z.c)
 *     xxxInitWindowStation @ 0x1C0096B94 (xxxInitWindowStation.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C00A0C70 (xxxCleanupMotherDesktopWindow.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00B7028 (zzzEndDeferWinEventNotify.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00E4714 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     SetVisible @ 0x1C00EDEE8 (SetVisible.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCreateWindowStation(
        __int64 a1,
        char a2,
        ACCESS_MASK a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        int a9,
        HANDLE *a10)
{
  __int64 v10; // r14
  void *v11; // r15
  void *SecurityDescriptor; // r12
  int v13; // edi
  int *v14; // r13
  NTSTATUS v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rcx
  _DWORD *v18; // rax
  int GlobalAtomTable; // eax
  NTSTATUS DesktopNotificationEvent; // esi
  NTSTATUS inserted; // eax
  _QWORD *i; // rcx
  __int64 v24; // rbx
  void *v25; // rdi
  int v26; // esi
  int v27; // esi
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // edi
  __int64 Window; // rdi
  void *v34; // r8
  __int64 v35; // rcx
  ULONG v36; // esi
  ULONG v37; // edi
  _WORD *v38; // rbx
  __int64 v39; // rbx
  __int64 ThreadWin32Thread; // rax
  ULONG v41; // eax
  NTSTATUS v42; // ecx
  ULONG v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rcx
  void *v46; // r8
  __int64 v47; // rcx
  ULONG v48; // eax
  int v49; // edi
  __int64 v50; // rbx
  int v51; // edi
  int v52; // [rsp+98h] [rbp-49h]
  PVOID Object; // [rsp+A0h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp-39h] BYREF
  __int64 v55; // [rsp+B0h] [rbp-31h]
  void *v56; // [rsp+B8h] [rbp-29h]
  __int64 v57; // [rsp+C0h] [rbp-21h]
  __int128 v58; // [rsp+C8h] [rbp-19h] BYREF
  __int64 v59; // [rsp+D8h] [rbp-9h]
  int v60; // [rsp+128h] [rbp+47h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+138h] [rbp+57h]
  __int64 v62; // [rsp+140h] [rbp+5Fh]

  v62 = a4;
  DesiredAccess = a3;
  v57 = *(_QWORD *)(a1 + 32);
  v10 = 0LL;
  v11 = 0LL;
  Object = 0LL;
  SecurityDescriptor = 0LL;
  Handle = 0LL;
  v13 = 0;
  v52 = 0;
  if ( grpWinStaList )
  {
    gTermNOIO |= 2u;
    v14 = &gTermNOIO;
  }
  else
  {
    v14 = (int *)gTermIO[0];
  }
  LOBYTE(a4) = a2;
  v15 = ObCreateObject(0LL, ExWindowStationObjectType, a1, a4, 0LL, 216, 0, 0, &Object);
  v16 = v15;
  if ( v15 < 0 )
  {
    v41 = RtlNtStatusToDosError(v15);
    UserSetLastError(v41);
    return v16;
  }
  if ( ExAcquireRundownProtection(gWinstaRunRef) )
  {
    memset_0(Object, 0, 0xD8uLL);
    v18 = (_DWORD *)SGDGetUserSessionState(v17);
    *(_DWORD *)Object = *v18;
    *((_QWORD *)Object + 7) = v14;
    if ( (*v14 & 2) != 0 )
      *((_DWORD *)Object + 16) = 4;
    GlobalAtomTable = CreateGlobalAtomTable((char *)Object + 168);
    DesktopNotificationEvent = GlobalAtomTable;
    if ( GlobalAtomTable < 0
      || (*v14 & 1) == 0
      && (GlobalAtomTable = xxxInitTerminal((struct tagTERMINAL *)v14),
          DesktopNotificationEvent = GlobalAtomTable,
          GlobalAtomTable < 0) )
    {
      v42 = GlobalAtomTable;
      goto LABEL_52;
    }
    if ( (*((_DWORD *)Object + 16) & 4) == 0 && !(unsigned int)xxxInitWindowStation() )
    {
      DesktopNotificationEvent = -1073741801;
      v42 = -1073741801;
LABEL_52:
      v43 = RtlNtStatusToDosError(v42);
      UserSetLastError(v43);
      goto LABEL_63;
    }
    if ( *((_QWORD *)v14 + 1) )
    {
LABEL_11:
      if ( (*((_DWORD *)Object + 16) & 4) != 0 )
        goto LABEL_12;
      v36 = RtlLengthSid(SeExports->SeWorldSid);
      v37 = v36 + 8;
      v38 = (_WORD *)Win32AllocPoolWithQuotaZInit(v36 + 8, 1702064981LL);
      if ( v38
        && (*v38 = 0,
            v38[1] = v37,
            *((_DWORD *)v38 + 1) = 0x100000,
            RtlCopySid(v36, v38 + 4, SeExports->SeWorldSid),
            SecurityDescriptor = (void *)CreateSecurityDescriptor(v38, v37, 0LL),
            Win32FreePool(v38),
            SecurityDescriptor) )
      {
        DesktopNotificationEvent = CreateDesktopNotificationEvent(SecurityDescriptor);
        if ( DesktopNotificationEvent >= 0 )
        {
          Win32FreePool(SecurityDescriptor);
LABEL_12:
          inserted = ObInsertObject(Object, 0LL, DesiredAccess, 1u, &Object, &Handle);
          DesktopNotificationEvent = inserted;
          if ( inserted < 0 )
          {
            Object = 0LL;
            SecurityDescriptor = 0LL;
          }
          else
          {
            if ( inserted == 0x40000000 )
              goto LABEL_20;
            DesktopNotificationEvent = ApplySecurityAttributesToWinsta(Object, v57);
            if ( DesktopNotificationEvent >= 0 )
            {
              for ( i = (_QWORD *)grpWinStaList; *i; i = (_QWORD *)(*i + 8LL) )
                ;
              LockObjectAssignment(i, Object);
              if ( (*((_DWORD *)Object + 16) & 4) == 0 )
              {
                v39 = a8;
                if ( a8 )
                {
                  v58 = 0LL;
                  v59 = 0LL;
                  PushW32ThreadLock(Object, &v58, UserDereferenceObject);
                  if ( !xxxSafeLoadKeyboardLayoutEx(Object, v62, 0LL, a5, a6, a7, v39, a9, -2147483647) )
                    DesktopNotificationEvent = -1073741823;
                  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
                  *(_QWORD *)(ThreadWin32Thread + 16) = v58;
                }
              }
            }
            SecurityDescriptor = 0LL;
            if ( DesktopNotificationEvent >= 0 )
            {
LABEL_20:
              ObfDereferenceObject(Object);
              *a10 = Handle;
              return 0LL;
            }
          }
        }
      }
      else
      {
        DesktopNotificationEvent = -1073741801;
      }
      v13 = v52;
      goto LABEL_63;
    }
    v10 = gptiCurrent;
    v24 = *(_QWORD *)(gptiCurrent + 424LL);
    v11 = *(void **)(gptiCurrent + 456LL);
    v25 = *(void **)(gptiCurrent + 592LL);
    *(_QWORD *)(gptiCurrent + 424LL) = *(_QWORD *)(*((_QWORD *)v14 + 2) + 424LL);
    v55 = v24;
    v56 = v25;
    if ( v11 )
    {
      ObfReferenceObject(v11);
    }
    else if ( *(_QWORD *)(gptiCurrent + 744LL) != gptiCurrent + 744LL )
    {
      v60 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 536LL);
    }
    ++gdwDeferWinEvent;
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v60);
    DesktopNotificationEvent = zzzSetDesktop(gptiCurrent, 0LL, 0LL);
    if ( DesktopNotificationEvent < 0 )
    {
      if ( !*(_QWORD *)(gptiCurrent + 456LL) && v11 )
        zzzSetDesktop(gptiCurrent, (__int64)v11, v25);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v60);
      zzzEndDeferWinEventNotify(v44);
      *(_QWORD *)(gptiCurrent + 424LL) = v24;
    }
    else
    {
      v26 = *(_DWORD *)(gptiCurrent + 488LL);
      *(_DWORD *)(gptiCurrent + 488LL) = v26 | 0x10000000;
      v27 = v26 & 0x10000000;
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(0x10000000LL);
      if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
        goto LABEL_31;
      v30 = PsGetCurrentProcessWin32Process(v29);
      v31 = v30;
      if ( v30 )
        v31 = -(__int64)(*(_QWORD *)v30 != 0LL) & v30;
      v32 = 1;
      if ( !(unsigned int)IsImmersiveAppRestricted(v31) )
LABEL_31:
        v32 = 0;
      SmartObjStackRefBase<tagMENU>::Init(&v58, 0LL);
      v59 = 0LL;
      Window = xxxCreateWindowEx(
                 0,
                 32769,
                 32769,
                 0,
                 -2113929216,
                 -32768,
                 -32768,
                 0xFFFF,
                 0xFFFF,
                 0LL,
                 (__int64)&v58,
                 hModuleWin,
                 0LL,
                 1,
                 778,
                 v32,
                 0LL);
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v58);
      if ( Window )
      {
        *((_QWORD *)&v58 + 1) = Window;
        *(_QWORD *)&v58 = v14 + 2;
        HMAssignmentLock(&v58, 0LL);
        *(_DWORD *)(gptiCurrent + 488LL) = v27 | *(_DWORD *)(gptiCurrent + 488LL) & 0xEFFFFFFF;
        SetVisible(*((struct tagWND **)v14 + 1));
        HMChangeOwnerThread(*((_QWORD *)v14 + 1), *((_QWORD *)v14 + 2));
        v13 = 1;
        v34 = v56;
        *(_QWORD *)(gptiCurrent + 424LL) = v55;
        v52 = 1;
        DesktopNotificationEvent = zzzSetDesktop(gptiCurrent, (__int64)v11, v34);
        if ( DesktopNotificationEvent < 0 )
        {
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v60);
          zzzEndDeferWinEventNotify(v47);
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v60);
          goto LABEL_63;
        }
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v60);
        zzzEndDeferWinEventNotify(v35);
        if ( v11 )
        {
          ObfDereferenceObject(v11);
          v11 = 0LL;
        }
        goto LABEL_11;
      }
      DesktopNotificationEvent = -1073741801;
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v60);
      zzzEndDeferWinEventNotify(v45);
      v46 = v56;
      *(_QWORD *)(gptiCurrent + 424LL) = v55;
      zzzSetDesktop(gptiCurrent, (__int64)v11, v46);
    }
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v60);
    v13 = 0;
    goto LABEL_63;
  }
  DesktopNotificationEvent = -1073741790;
LABEL_63:
  v48 = RtlNtStatusToDosError(DesktopNotificationEvent);
  UserSetLastError(v48);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v13 )
  {
    ++gdwDeferWinEvent;
    v49 = *(_DWORD *)(v10 + 488);
    v50 = *(_QWORD *)(v10 + 424);
    *(_DWORD *)(v10 + 488) = v49 | 0x10000000;
    *(_QWORD *)(v10 + 424) = *(_QWORD *)(*((_QWORD *)v14 + 2) + 424LL);
    HMChangeOwnerThread(*((_QWORD *)v14 + 1), v10);
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v60);
    xxxCleanupMotherDesktopWindow(v14);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v60);
    v51 = (*(_DWORD *)(v10 + 488) ^ v49) & 0x10000000;
    *(_QWORD *)(v10 + 424) = v50;
    *(_DWORD *)(v10 + 488) ^= v51;
    zzzEndDeferWinEventNotify(0x10000000LL);
  }
  if ( Handle )
    ObCloseHandle(Handle, 1);
  if ( SecurityDescriptor )
    Win32FreePool(SecurityDescriptor);
  if ( v11 )
    ObfDereferenceObject(v11);
  return (unsigned int)DesktopNotificationEvent;
}
