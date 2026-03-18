/*
 * XREFs of DestroyProcessInfo @ 0x14015D490
 * Callers:
 *     xxxUserProcessCallout @ 0x140167490 (xxxUserProcessCallout.c)
 *     ?UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z @ 0x1401B2608 (-UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z.c)
 *     ?xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z @ 0x1401B2B40 (-xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x140045BD8 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     ?OnProcessTermination@InputObjectMap@@SAXXZ @ 0x14006AE68 (-OnProcessTermination@InputObjectMap@@SAXXZ.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x140092790 (McTemplateK0_EtwWriteTransfer.c)
 *     ?TraceLoggingDCsInUseOnProcessExit@@YAXKKK@Z @ 0x1400B204C (-TraceLoggingDCsInUseOnProcessExit@@YAXKKK@Z.c)
 *     CitProcessCallout @ 0x1400B5AC4 (CitProcessCallout.c)
 *     CloseProtectedHandle @ 0x1400DDCE8 (CloseProtectedHandle.c)
 *     RIMOnProcessDestroy @ 0x14010F0D0 (RIMOnProcessDestroy.c)
 *     zzzCalcStartCursorHide @ 0x14011C59C (zzzCalcStartCursorHide.c)
 *     IszzzCalcStartCursorHideSupported @ 0x14011FE0C (IszzzCalcStartCursorHideSupported.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z @ 0x140121A30 (--$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z.c)
 *     IsShellProcess @ 0x140126E80 (IsShellProcess.c)
 *     PostPlaySoundMessage @ 0x1401298AC (PostPlaySoundMessage.c)
 *     SynchronizeContext @ 0x140142650 (SynchronizeContext.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x14015C9F4 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     ??1CWinEventNoopDeferral@@QEAA@XZ @ 0x14015CA30 (--1CWinEventNoopDeferral@@QEAA@XZ.c)
 *     ?DwsUnlinkAllWindows@tagPROCESSINFO@@QEAAXXZ @ 0x1401620B8 (-DwsUnlinkAllWindows@tagPROCESSINFO@@QEAAXXZ.c)
 *     CleanupLogonProcess @ 0x140167AA0 (CleanupLogonProcess.c)
 *     PostWinlogonMessage @ 0x140167BB0 (PostWinlogonMessage.c)
 *     DelayedDestroyCacheDC @ 0x1401688B0 (DelayedDestroyCacheDC.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401A2894 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     ??0CWinEventNoopDeferral@@QEAA@XZ @ 0x1401A2A8C (--0CWinEventNoopDeferral@@QEAA@XZ.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1401A2C38 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?OnProcessDestroyed@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401AC7A0 (-OnProcessDestroyed@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1401B4D6C (EtwTraceScreenSaverProcessEvent.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1401C5BB0 (GreCleanDCAndSetOwnerEx.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1401D8B5C (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 *     CleanupIAMAccess @ 0x14023AD9C (CleanupIAMAccess.c)
 *     IsCleanupIAMAccessSupported @ 0x14023B3C4 (IsCleanupIAMAccessSupported.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DestroyProcessInfo(ForegroundBoost *this)
{
  struct _KEVENT *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  __int64 UserSessionState; // rbx
  __int64 v8; // rcx
  __int64 i; // rcx
  __int64 j; // rax
  struct tagPROCESSINFO *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  void (__fastcall *v14)(ForegroundBoost *); // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int (*v18)(void); // rax
  void (__fastcall *v19)(ForegroundBoost *); // rax
  int (*v20)(void); // rax
  __int64 v21; // rcx
  void (__fastcall *v22)(ForegroundBoost *); // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  int (*v25)(void); // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  NTSTATUS ProcessExitStatus; // eax
  unsigned int v29; // ebx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 k; // r14
  __int64 m; // rbx
  __int64 v35; // rax
  __int64 v36; // rdx
  ForegroundBoost **n; // rcx
  ForegroundBoost *v38; // rax
  int v39; // eax
  unsigned int v40; // r15d
  __int64 v41; // rdx
  _QWORD *ii; // rcx
  int (__fastcall *v43)(_QWORD *, __int64); // rax
  __int64 v44; // rdx
  void (__fastcall *v45)(HANDLE *); // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rbx
  int (__fastcall *v54)(__int64, __int64); // rax
  void (__fastcall *v55)(__int64, __int64); // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  int (__fastcall *v58)(__int64, __int64); // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  void (__fastcall *v63)(__int64, __int64); // rax
  __int64 v64; // rdx
  void *v65; // rcx
  char *v66; // rcx
  char *v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // rcx
  int (__fastcall *v70)(__int64, __int64); // rax
  __int64 v71; // rdx
  void (__fastcall *v72)(ForegroundBoost *); // rax
  __int64 v73; // rcx
  __int64 v74; // rcx
  _DWORD *v75; // rbx
  __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rdx
  int (__fastcall *v80)(__int64, __int64); // rax
  __int64 v81; // rdx
  void (__fastcall *v82)(__int64); // rax
  __int64 v83; // r9
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  void (__fastcall *v88)(ForegroundBoost *); // rax
  __int64 v89; // rcx
  _BYTE v90[8]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v91; // [rsp+48h] [rbp-21h]
  _BYTE v92[24]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v93; // [rsp+68h] [rbp-1h]
  HANDLE Handle; // [rsp+D0h] [rbp+67h] BYREF
  HANDLE v95; // [rsp+D8h] [rbp+6Fh] BYREF

  *((_QWORD *)this + 102) |= 0x20000000000uLL;
  CitProcessCallout((__int64)this, 0);
  v2 = (struct _KEVENT *)*((_QWORD *)this + 2);
  if ( v2 == (struct _KEVENT *)-1LL )
    goto LABEL_4;
  if ( v2 )
  {
    KeSetEvent(v2, 1, 0);
    ObfDereferenceObject(*((PVOID *)this + 2));
LABEL_4:
    *((_QWORD *)this + 2) = 0LL;
  }
  v90[0] = 0;
  v91 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v90);
  CWinEventNoopDeferral::CWinEventNoopDeferral((CWinEventNoopDeferral *)&Handle);
  v5 = *((_DWORD *)this + 3);
  if ( (v5 & 4) != 0 )
  {
    *((_DWORD *)this + 3) = v5 & 0xFFFFFFFB;
    if ( (int)IszzzCalcStartCursorHideSupported(v4, v3) >= 0 )
      zzzCalcStartCursorHide(0LL, 0LL);
  }
  CWinEventNoopDeferral::~CWinEventNoopDeferral((CWinEventNoopDeferral *)&Handle);
  UserSessionState = W32GetUserSessionState(v6);
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(UserSessionState + 66104), 0);
  for ( i = *(_QWORD *)(W32GetUserSessionState(v8) + 63560); i; i = *(_QWORD *)(i + 8) )
  {
    for ( j = *(_QWORD *)(i + 16); j; j = *(_QWORD *)(j + 32) )
    {
      if ( *(ForegroundBoost **)(j + 256) == this )
        *(_QWORD *)(j + 256) = 0LL;
    }
  }
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(UserSessionState + 66104), 0LL);
  tagPROCESSINFO::DwsUnlinkAllWindows(this);
  ForegroundBoost::OnProcessDestroyed(this, v11);
  if ( *((_BYTE *)this + 1208) == 1 && (*((_DWORD *)this + 3) & 0x40) == 0 )
    goto LABEL_24;
  v14 = *(void (__fastcall **)(ForegroundBoost *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v13, v12) + 48) + 5232LL);
  if ( v14 )
    v14(this);
  if ( *((_BYTE *)this + 1208) == 1 )
  {
LABEL_24:
    if ( v90[0] )
      --*(_DWORD *)(v91 + 28);
    PsUpdateComponentPower(*(_QWORD *)this, 6LL);
    if ( *((_QWORD *)this + 104) )
    {
      v17 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v17, v16) + 48);
      v18 = *(int (**)(void))(v17 + 1912);
      if ( v18 )
      {
        if ( v18() >= 0 )
        {
          v17 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v17, v16) + 48);
          v19 = *(void (__fastcall **)(ForegroundBoost *))(v17 + 1920);
          if ( v19 )
            v19(this);
        }
      }
    }
    if ( *((_QWORD *)this + 111) )
    {
      v20 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v17, v16) + 48) + 1928LL);
      if ( v20 )
      {
        if ( v20() >= 0 )
        {
          v22 = *(void (__fastcall **)(ForegroundBoost *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v21, v16) + 48)
                                                         + 1936LL);
          if ( v22 )
            v22(this);
        }
      }
    }
    if ( *((_QWORD *)this + 112) != -1LL )
      RIMRemoveMouseOrKeyboardInjectionDevice();
    v23 = *((_QWORD *)this + 113);
    if ( v23 != -1 )
      RIMRemoveMouseOrKeyboardInjectionDevice();
    if ( (*((_DWORD *)this + 3) & 0x40001) == 0x40000 )
    {
      v24 = *((_QWORD *)this + 82);
      if ( !v24 || (*(_DWORD *)(v24 + 64) & 2) == 0 )
      {
        v25 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v23, v16) + 48) + 1944LL);
        if ( v25 )
        {
          if ( v25() >= 0 )
            PostPlaySoundMessage(8LL, v26);
        }
      }
    }
    if ( (unsigned int)IsShellProcess((__int64)this) )
    {
      v27 = *(_QWORD *)(W32GetUserSessionState(v27) + 62880);
      if ( *((_QWORD *)this + 43) == v27 )
      {
        if ( (int)IsCleanupIAMAccessSupported() >= 0 )
          CleanupIAMAccess(*((_QWORD *)this + 43));
        v27 = *(unsigned int *)(*((_QWORD *)this + 82) + 64LL);
        if ( (v27 & 2) == 0 )
        {
          ProcessExitStatus = PsGetProcessExitStatus(*(PEPROCESS *)this);
          if ( ProcessExitStatus != 1 && ProcessExitStatus != 255 )
          {
            v95 = 0LL;
            Handle = 0LL;
            v29 = 0;
            if ( ObOpenObjectByPointer(*(PVOID *)this, 0x200u, 0LL, 0x100000u, (POBJECT_TYPE)PsProcessType, 0, &Handle) >= 0 )
            {
              v31 = W32GetUserSessionState(v30);
              CLockProcessByPid::CLockProcessByPid(v92, *(_QWORD *)(v31 + 63584), 0LL);
              if ( v93 && (int)ObDuplicateObject(*(_QWORD *)this, Handle, v93, &v95, 0x100000, 0, 2, 0) >= 0 )
                v29 = (unsigned int)v95;
              ZwClose(Handle);
              CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v92);
            }
            if ( (int)PostWinlogonMessage(1025LL, v29) < 0 && v29 )
              ObCloseHandle(v95, 1);
          }
        }
      }
    }
    for ( k = *(_QWORD *)(W32GetUserSessionState(v27) + 63560); k; k = *(_QWORD *)(k + 8) )
    {
      for ( m = *(_QWORD *)(k + 16); m; m = *(_QWORD *)(m + 32) )
      {
        v35 = *(_QWORD *)(m + 8);
        if ( *(ForegroundBoost **)(v35 + 176) == this )
        {
          *(_QWORD *)(v35 + 176) = 0LL;
          if ( m == *(_QWORD *)(W32GetUserSessionState(v32) + 19200) )
            SynchronizeContext(v32);
        }
      }
    }
    for ( n = (ForegroundBoost **)(W32GetUserSessionState(v32) + 36424); ; n = (ForegroundBoost **)((char *)v38 + 368) )
    {
      v38 = *n;
      if ( !*n )
        break;
      if ( v38 == this )
      {
        *n = (ForegroundBoost *)*((_QWORD *)this + 46);
        break;
      }
    }
    v39 = *((_DWORD *)this + 3);
    v40 = v39 & 0x4000;
    if ( (v39 & 0x4000) != 0 && (v39 & 0x200) != 0 )
      DelayedDestroyCacheDC(1LL);
    ii = *(_QWORD **)(W32GetWin32kBaseApiSetTable(n, v36) + 48);
    v43 = (int (__fastcall *)(_QWORD *, __int64))ii[245];
    if ( v43 && v43(ii, v41) >= 0 )
    {
      Handle = 0LL;
      v45 = *(void (__fastcall **)(HANDLE *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(ii, v44) + 48) + 1968LL);
      if ( v45 )
        v45(&Handle);
      for ( ii = Handle; ii; ii = (_QWORD *)*ii )
      {
        if ( *((_DWORD *)ii + 5) == *((_DWORD *)this + 14) )
          *((_DWORD *)ii + 5) = 0;
      }
    }
    if ( *(ForegroundBoost **)(W32GetUserSessionState(ii) + 62864) == this )
    {
      *(_QWORD *)(W32GetUserSessionState(v47) + 62864) = 0LL;
      EtwTraceScreenSaverProcessEvent(2LL);
    }
    InputObjectMap::OnProcessTermination(v47, v46, v48, v49);
    v53 = W32GetUserSessionState(v50);
    if ( *(ForegroundBoost **)(v53 + 64248) == this )
    {
      v52 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v52, v51) + 48);
      v54 = *(int (__fastcall **)(__int64, __int64))(v52 + 1976);
      if ( v54 )
      {
        if ( v54(v52, v51) >= 0 )
        {
          v52 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v52, v51) + 48);
          v55 = *(void (__fastcall **)(__int64, __int64))(v52 + 1984);
          if ( v55 )
            v55(v52, v51);
        }
      }
    }
    if ( *(ForegroundBoost **)(v53 + 64224) == this )
    {
      v57 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v52, v51) + 48);
      v58 = *(int (__fastcall **)(__int64, __int64))(v57 + 1992);
      if ( v58 )
      {
        if ( v58(v57, v56) >= 0 )
        {
          v62 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v60, v59) + 48);
          v63 = *(void (__fastcall **)(__int64, __int64))(v62 + 2000);
          if ( v63 )
            v63(v62, v61);
        }
      }
    }
    DeferrableUnlockObjectAssignment<tagWINDOWSTATION>((_QWORD **)this + 82);
    DeferrableUnlockObjectAssignment<tagDESKTOP>((_QWORD **)this + 43);
    v65 = (void *)*((_QWORD *)this + 48);
    if ( v65 )
    {
      CloseProtectedHandle(v65);
      *((_QWORD *)this + 48) = 0LL;
    }
    *((_DWORD *)this + 3) |= 0x1000u;
    v66 = (char *)*((_QWORD *)this + 87);
    if ( v66 )
    {
      do
      {
        v67 = *(char **)v66;
        GreDeleteFastMutex(v66);
        v66 = v67;
      }
      while ( v67 );
    }
    *((_QWORD *)this + 87) = 0LL;
    v69 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v66, v64) + 48);
    v70 = *(int (__fastcall **)(__int64, __int64))(v69 + 2008);
    if ( v70 )
    {
      if ( v70(v69, v68) >= 0 )
      {
        v69 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v69, v71) + 48);
        v72 = *(void (__fastcall **)(ForegroundBoost *))(v69 + 2016);
        if ( v72 )
          v72(this);
      }
    }
    if ( this == *(ForegroundBoost **)(W32GetUserSessionState(v69) + 18888) )
      *(_QWORD *)(W32GetUserSessionState(v73) + 18888) = 0LL;
    if ( this == *(ForegroundBoost **)(W32GetUserSessionState(v73) + 18896) )
      *(_QWORD *)(W32GetUserSessionState(v74) + 18896) = 0LL;
    v75 = (_DWORD *)((char *)this + 56);
    v76 = *(_QWORD *)(W32GetUserSessionState(v74) + 63592);
    if ( *((_DWORD *)this + 14) == v76 )
    {
      *(_QWORD *)(W32GetUserSessionState(v76) + 63592) = 0LL;
      *(_DWORD *)(W32GetUserSessionState(v77) + 66132) = 0;
      if ( (*((_DWORD *)this + 204) & 0x80000) != 0 )
      {
        v76 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v76, v78) + 48);
        v80 = *(int (__fastcall **)(__int64, __int64))(v76 + 2056);
        if ( v80 )
        {
          if ( v80(v76, v79) >= 0 )
          {
            v82 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v76, v81) + 48) + 2064LL);
            if ( v82 )
              v82(2LL);
            *((_QWORD *)this + 102) &= ~0x80000uLL;
            v75 = (_DWORD *)((char *)this + 56);
          }
        }
      }
    }
    if ( *v75 == *(_QWORD *)(W32GetUserSessionState(v76) + 63584) )
      CleanupLogonProcess(0LL);
    v84 = *((unsigned int *)this + 273);
    if ( *((_QWORD *)this + 136) )
      TraceLoggingDCsInUseOnProcessExit(v84, *((_DWORD *)this + 272), (unsigned int)*v75, v83);
    v85 = W32GetUserSessionState(v84);
    GreCleanDCAndSetOwnerEx(*(HDC *)(v85 + 66064));
    v88 = *(void (__fastcall **)(ForegroundBoost *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v87, v86) + 48) + 4360LL);
    if ( v88 )
      v88(this);
    RIMOnProcessDestroy(*(_QWORD *)this);
    LOBYTE(v89) = BYTE1(Microsoft_Windows_Win32kEnableBits);
    if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
      McTemplateK0_EtwWriteTransfer(v89, &CompleteGuiProcessExecution, &W32kControlGuid);
    return v40;
  }
  else
  {
    *((_DWORD *)this + 3) |= 0x1000u;
    if ( v90[0] )
      --*(_DWORD *)(v91 + 28);
    return 0LL;
  }
}
