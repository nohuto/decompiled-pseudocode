/*
 * XREFs of xxxCreateThreadInfo @ 0x1C004D550
 * Callers:
 *     UserThreadCallout @ 0x1C0050B50 (UserThreadCallout.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C00AE3AC (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FB14 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0045E80 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C00462E4 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ @ 0x1C004A030 (-EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C004C624 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     AllocQueue @ 0x1C004FB20 (AllocQueue.c)
 *     HMAssignmentLock @ 0x1C004FF50 (HMAssignmentLock.c)
 *     ?AssignQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z @ 0x1C004FFD0 (-AssignQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z.c)
 *     InitClientInfo @ 0x1C0050060 (InitClientInfo.c)
 *     ?InitializeThreadInfoIocp@@YAJPEAU_EPROCESS@@PEAUtagTHREADINFO@@@Z @ 0x1C0050250 (-InitializeThreadInfoIocp@@YAJPEAU_EPROCESS@@PEAUtagTHREADINFO@@@Z.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x1C0050440 (ApiSetEditionUpdateRawMouseMode.c)
 *     ?Initialize@tagTHREADINFO@@QEAAXXZ @ 0x1C0050484 (-Initialize@tagTHREADINFO@@QEAAXXZ.c)
 *     RtlGetExpWinVer @ 0x1C0050F34 (RtlGetExpWinVer.c)
 *     xxxDestroyThreadInfo @ 0x1C0051264 (xxxDestroyThreadInfo.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00591BC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C005CCDC (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C005CD00 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     HMValidateSharedHandle @ 0x1C005E0B0 (HMValidateSharedHandle.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0065068 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@@Z @ 0x1C0065CC0 (-SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@@Z.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C00850DC (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     CloseProtectedHandle @ 0x1C0096518 (CloseProtectedHandle.c)
 *     LockObjectAssignment @ 0x1C0099630 (LockObjectAssignment.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009A170 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009CB48 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C009E0F0 (-GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     IsDestroyThreadsMessagesSupported @ 0x1C00A7D38 (IsDestroyThreadsMessagesSupported.c)
 *     DestroyThreadsMessages @ 0x1C00AA0D8 (DestroyThreadsMessages.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00AA2B0 (PopAndFreeW32ThreadLock.c)
 *     IszzzCalcStartCursorHideSupported @ 0x1C00AB9E4 (IszzzCalcStartCursorHideSupported.c)
 *     zzzCalcStartCursorHide @ 0x1C00B58E0 (zzzCalcStartCursorHide.c)
 *     IsEditionSetThreadDesktopAtThreadInitSupported @ 0x1C00B8914 (IsEditionSetThreadDesktopAtThreadInitSupported.c)
 *     IsEditionSetProcessWindowStationAtProcessInitSupported @ 0x1C00B8940 (IsEditionSetProcessWindowStationAtProcessInitSupported.c)
 *     ?ParseReserved@@YAKPEBG0@Z @ 0x1C00C3560 (-ParseReserved@@YAKPEBG0@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D6F00 (memmove.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00DF238 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1C00DF7A4 (McTemplateK0dq_EtwWriteTransfer.c)
 *     zzzDestroyQueue @ 0x1C012DDA0 (zzzDestroyQueue.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C013B01C (EtwTraceScreenSaverProcessEvent.c)
 *     ApiSetEditionSetProcessWindowStationAtProcessInit @ 0x1C0207930 (ApiSetEditionSetProcessWindowStationAtProcessInit.c)
 */

__int64 __fastcall xxxCreateThreadInfo(PETHREAD Thread)
{
  struct _KPROCESS *ThreadProcess; // rbx
  struct tagDESKTOP *v3; // r13
  struct _NT_TIB *Self; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  int v6; // r14d
  __int64 v7; // rdi
  __int64 *ThreadWin32Thread; // rax
  unsigned int *v9; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v10; // rcx
  void *v11; // rbx
  ULONG64 v12; // rdx
  void *QuotaZInit; // rax
  unsigned int *v14; // rdx
  __int64 v15; // rcx
  unsigned __int16 *v16; // r8
  ULONG64 v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // rsi
  int v20; // r12d
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 CurrentProcess; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  _BOOL8 v28; // rcx
  _DWORD *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  bool IsLockedShared; // al
  __int64 *v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rcx
  _DWORD *v48; // rbx
  __int64 v49; // rcx
  bool v50; // al
  __int64 v51; // rcx
  _QWORD *v52; // rbx
  __int64 v53; // rcx
  __int64 ProcessSectionBaseAddress; // rax
  HANDLE *v55; // r15
  NTSTATUS Event; // ebx
  HANDLE v57; // rcx
  HANDLE v58; // r12
  __int64 v59; // r8
  struct _EPROCESS *v60; // r14
  const unsigned __int16 *v61; // rdx
  int v62; // r12d
  unsigned int v63; // eax
  int *v64; // r15
  __int64 v65; // r14
  struct tagQ *v66; // rax
  struct tagQ *v67; // r14
  int v68; // eax
  __int64 v69; // rdx
  AtomicExecutionCheck *v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v74; // rax
  struct tagQ *v75; // r14
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r8
  __int64 v80; // r9
  unsigned int CurrentProcessId; // eax
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // rdx
  __int64 v85; // r8
  __int64 v86; // r9
  int v87; // edx
  int v88; // r8d
  _QWORD *ProcessWin32Process; // rax
  __int64 v90; // rax
  _QWORD *v91; // rax
  int v92; // eax
  PVOID Object; // [rsp+50h] [rbp-168h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-160h] BYREF
  PEPROCESS Process; // [rsp+60h] [rbp-158h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+68h] [rbp-150h] BYREF
  HANDLE v98[2]; // [rsp+70h] [rbp-148h] BYREF
  __int64 v99; // [rsp+80h] [rbp-138h] BYREF
  __int64 v100; // [rsp+88h] [rbp-130h]
  void *v101; // [rsp+90h] [rbp-128h]
  PVOID v102; // [rsp+98h] [rbp-120h]
  __int64 v103; // [rsp+A0h] [rbp-118h] BYREF
  __int64 v104; // [rsp+A8h] [rbp-110h]
  __int128 v105; // [rsp+B0h] [rbp-108h]
  __int128 v106; // [rsp+C0h] [rbp-F8h]
  void *v107; // [rsp+D0h] [rbp-E8h]
  __int64 v108; // [rsp+D8h] [rbp-E0h]
  unsigned __int16 *v109; // [rsp+E0h] [rbp-D8h]
  int *v110; // [rsp+F0h] [rbp-C8h]
  PVOID v111; // [rsp+F8h] [rbp-C0h] BYREF
  __int128 v112; // [rsp+100h] [rbp-B8h] BYREF
  __int128 v113; // [rsp+110h] [rbp-A8h]
  __int128 v114; // [rsp+120h] [rbp-98h] BYREF
  __int64 v115; // [rsp+130h] [rbp-88h]
  __int128 v116; // [rsp+138h] [rbp-80h] BYREF
  __int64 v117; // [rsp+148h] [rbp-70h]
  _QWORD v118[13]; // [rsp+150h] [rbp-68h] BYREF
  int v119; // [rsp+1C8h] [rbp+10h] BYREF
  int v120; // [rsp+1D0h] [rbp+18h] BYREF
  int v121; // [rsp+1D8h] [rbp+20h]

  ThreadProcess = PsGetThreadProcess(Thread);
  Process = ThreadProcess;
  v103 = 0LL;
  v104 = 0LL;
  v105 = 0LL;
  v106 = 0LL;
  v108 = 0LL;
  v109 = 0LL;
  v3 = 0LL;
  HandleInformation = 0LL;
  Handle = 0LL;
  v98[0] = 0LL;
  Self = KeGetPcr()->NtTib.Self;
  v102 = Self;
  v114 = 0LL;
  v115 = 0LL;
  v116 = 0LL;
  v117 = 0LL;
  v101 = 0LL;
  v112 = 0LL;
  v113 = 0LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    McTemplateK0_EtwWriteTransfer(Self, &InitiateGuiThreadExecution, &W32kControlGuid);
  if ( gbCleanedUpResources )
    return 3221225738LL;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(Self);
  if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
    return 3221225738LL;
  ++gdwGuiThreads;
  v6 = 0;
  if ( ThreadProcess == gpepCSRSS )
    v6 = 33554504;
  v7 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(Thread);
  if ( ThreadWin32Thread )
    v7 = *ThreadWin32Thread;
  tagTHREADINFO::Initialize((tagTHREADINFO *)v7);
  v107 = 0LL;
  Object = *(PVOID *)(PsGetProcessPeb(ThreadProcess) + 32);
  v110 = (int *)&v103;
  v103 = *((_QWORD *)Object + 4);
  v104 = *((_QWORD *)Object + 5);
  v105 = *(_OWORD *)((char *)Object + 136);
  *(_QWORD *)&v106 = *(_QWORD *)((char *)Object + 164);
  v9 = (unsigned int *)((char *)Object + 192);
  if ( (unsigned __int64)Object + 192 >= MmUserProbeAddress )
    v9 = (unsigned int *)MmUserProbeAddress;
  v10 = (NSInstrumentation::CLeakTrackingAllocator *)*v9;
  v121 = (int)v10;
  DWORD2(v106) = (_DWORD)v10;
  v11 = (void *)*((_QWORD *)v9 + 1);
  v107 = v11;
  if ( !(_WORD)v10 )
  {
    v107 = 0LL;
    goto LABEL_29;
  }
  if ( ((unsigned __int8)v11 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v12 = (ULONG64)v11 + (unsigned __int16)v10 + 2;
  if ( v12 <= (unsigned __int64)v11 || v12 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v10 > HIWORD(v121) )
  {
    if ( ((unsigned __int8)v10 & 1) == 0 )
      goto LABEL_26;
    goto LABEL_25;
  }
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
LABEL_25:
    v119 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 900LL);
LABEL_26:
    ExRaiseAccessViolation();
  }
  QuotaZInit = (void *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                         v10,
                         v12,
                         (unsigned __int16)v10,
                         0x79747355u);
  v101 = QuotaZInit;
  v107 = QuotaZInit;
  if ( !QuotaZInit )
    ExRaiseStatus(-1073741801);
  if ( qword_1C0295450 )
  {
    qword_1C0295450(QuotaZInit, &v116, Win32FreePool);
    QuotaZInit = v107;
  }
  memmove(QuotaZInit, v11, WORD4(v106));
LABEL_29:
  v14 = (unsigned int *)((char *)Object + 208);
  if ( (unsigned __int64)Object + 208 >= MmUserProbeAddress )
    v14 = (unsigned int *)MmUserProbeAddress;
  v15 = *v14;
  v121 = v15;
  LODWORD(v108) = v15;
  v16 = (unsigned __int16 *)*((_QWORD *)v14 + 1);
  v109 = v16;
  if ( ((unsigned __int8)v16 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v17 = (ULONG64)v16 + (unsigned __int16)v15 + 2;
  if ( v17 <= (unsigned __int64)v16 || v17 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v15 > HIWORD(v121) )
  {
    if ( (v15 & 1) == 0 )
      goto LABEL_265;
    goto LABEL_264;
  }
  if ( (v15 & 1) != 0 )
  {
LABEL_264:
    v120 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 923LL);
LABEL_265:
    ExRaiseAccessViolation();
  }
  v18 = (_QWORD *)PsGetCurrentProcessWin32Process(v15);
  v19 = (__int64)v18;
  if ( v18 && !*v18 )
    v19 = 0LL;
  v20 = v6 | 0x100;
  if ( (*(_DWORD *)(v19 + 12) & 0x80u) == 0 )
    v20 = v6;
  if ( (HANDLE)gpidLogon == PsGetThreadProcessId(Thread) )
    v20 |= 0x2000000u;
  *(_DWORD *)(v7 + 488) = v20;
  CurrentProcess = PsGetCurrentProcess(v22, v21, v23);
  v28 = 0LL;
  if ( CurrentProcess )
    v28 = CurrentProcess == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  if ( v28 )
    *(_DWORD *)(v7 + 1272) |= 4u;
  if ( (dword_1C028DE6C & 0x80u) != 0 )
  {
    v29 = (_DWORD *)gspklBaseLayout;
    if ( gspklBaseLayout )
    {
      if ( !gbInDestroyHandleTableObjects && !IS_USERCRIT_OWNED_EXCLUSIVE(v28, v25, v26, v27) )
      {
        if ( !IS_USERCRIT_OWNED_AT_ALL(v31, v30, v32, v33) )
          goto LABEL_57;
        if ( tagDomLock::IsLockedExclusive((tagDomLock *)&gDomainHandleManagerLock)
          || (IsLockedShared = tagDomLock::IsLockedShared((tagDomLock *)&gDomainHandleManagerLock)) )
        {
          IsLockedShared = 1;
        }
        if ( !IsLockedShared )
LABEL_57:
          __int2c();
      }
      if ( (*((_BYTE *)qword_1C028FE68 + dword_1C028FE70 * (unsigned int)(unsigned __int16)*v29 + 25) & 1) != 0 )
      {
        v121 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 968LL);
      }
    }
    v99 = v7 + 440;
    v100 = gspklBaseLayout;
    v35 = &v99;
    goto LABEL_79;
  }
  if ( !*(_QWORD *)(SGDGetUserSessionState(v28, v25, v26, v27) + 13912) )
  {
    v40 = gspklBaseLayout;
    if ( gspklBaseLayout )
    {
      v41 = SGDGetUserSessionState(v37, v36, v38, v39);
      v42 = 1LL;
LABEL_66:
      v99 = v41 + 13912;
      v100 = v40;
      HMAssignmentLock(&v99, v42);
      goto LABEL_67;
    }
    v40 = gspklWinstaLessSessionLayouts;
    if ( gspklWinstaLessSessionLayouts )
    {
      v41 = SGDGetUserSessionState(v37, v36, v38, v39);
      v42 = 0LL;
      goto LABEL_66;
    }
  }
LABEL_67:
  if ( *(_QWORD *)(SGDGetUserSessionState(v37, v36, v38, v39) + 13912) )
  {
    v48 = *(_DWORD **)(SGDGetUserSessionState(v44, v43, v45, v46) + 13912);
    if ( !gbInDestroyHandleTableObjects && !IS_USERCRIT_OWNED_EXCLUSIVE(v47, v43, v45, v46) )
    {
      if ( !IS_USERCRIT_OWNED_AT_ALL(v49, v43, v45, v46) )
        goto LABEL_75;
      if ( tagDomLock::IsLockedExclusive((tagDomLock *)&gDomainHandleManagerLock)
        || (v50 = tagDomLock::IsLockedShared((tagDomLock *)&gDomainHandleManagerLock)) )
      {
        v50 = 1;
      }
      if ( !v50 )
LABEL_75:
        __int2c();
    }
    v44 = dword_1C028FE70 * (unsigned int)(unsigned __int16)*v48;
    if ( (*((_BYTE *)qword_1C028FE68 + v44 + 25) & 1) != 0 )
    {
      v121 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 986LL);
    }
  }
  v51 = *(_QWORD *)(SGDGetUserSessionState(v44, v43, v45, v46) + 13912);
  v118[0] = v7 + 440;
  v118[1] = v51;
  v35 = v118;
LABEL_79:
  HMAssignmentLock(v35, 0LL);
  *(_QWORD *)(v7 + 448) = v7 + 1056;
  if ( (*(_DWORD *)(v19 + 12) & 0x800000) != 0 )
    *(_DWORD *)(v7 + 488) |= 0x2000000u;
  if ( (*(_DWORD *)(v19 + 824) & 0x400) != 0 )
    *(_DWORD *)(v7 + 1272) |= 0x20u;
  *(_QWORD *)(v7 + 424) = v19;
  *(_QWORD *)(v7 + 664) = *(_QWORD *)(v19 + 328);
  *(_QWORD *)(v19 + 328) = v7;
  ++*(_DWORD *)(v19 + 384);
  v52 = v102;
  if ( v102 )
    v52[15] = PsGetThreadId(*(PETHREAD *)v7);
  *(_QWORD *)(v7 + 480) = v52 + 256;
  *((_DWORD *)v52 + 570) = *(_DWORD *)(v7 + 340);
  *(_DWORD *)(*(_QWORD *)(v7 + 480) + 236LL) = 0;
  v53 = *(_QWORD *)(v7 + 480);
  *(_QWORD *)(v7 + 360) = v53 + 232;
  *(_DWORD *)(v53 + 240) = *(_DWORD *)(v7 + 344);
  *(_DWORD *)(*(_QWORD *)(v7 + 480) + 244LL) = 0;
  *(_QWORD *)(v7 + 368) = *(_QWORD *)(v7 + 480) + 240LL;
  if ( (*(_DWORD *)(v19 + 12) & 0x2000000) != 0 )
  {
    *(_DWORD *)(v7 + 488) |= 0x20000000u;
    if ( !*(_QWORD *)(v19 + 768) )
    {
      v121 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1066LL);
    }
  }
  if ( !*(_DWORD *)(v7 + 632) )
  {
    if ( PsGetProcessPeb(Process) )
    {
      ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(Process);
      *(_DWORD *)(v7 + 632) = RtlGetExpWinVer(ProcessSectionBaseAddress);
    }
    else
    {
      *(_DWORD *)(v7 + 632) = 1536;
    }
  }
  if ( qword_1C0295468 && (int)qword_1C0295468() >= 0 && qword_1C0295470 )
    qword_1C0295470();
  v121 = v20 & 0xC;
  if ( (v20 & 0xC) == 0
    && qword_1C0295478
    && (int)qword_1C0295478() >= 0
    && qword_1C0295480
    && (unsigned int)qword_1C0295480(v7) )
  {
    *(_DWORD *)(v19 + 12) |= 0x1000000u;
  }
  v55 = (HANDLE *)(v7 + 728);
  Event = ZwCreateEvent((PHANDLE)(v7 + 728), 0x1F0003u, 0LL, SynchronizationEvent, 0);
  if ( Event >= 0 )
  {
    v57 = *v55;
    Object = 0LL;
    Event = ObReferenceObjectByHandle(v57, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    *(_QWORD *)(v7 + 736) = Object;
    if ( Event < 0 )
    {
      if ( Event != -1073741816 )
        ObCloseHandle(*v55, 1);
    }
    else
    {
      v58 = *v55;
      HandleInformation = 0LL;
      Object = 0LL;
      Event = ObReferenceObjectByHandle(v58, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, &HandleInformation);
      v102 = Object;
      if ( Event >= 0 )
      {
        LOBYTE(v120) = (HandleInformation.HandleAttributes & 2) != 0;
        BYTE1(v120) = 1;
        LOBYTE(v59) = 1;
        Event = ObSetHandleAttributes(v58, &v120, v59);
        ObfDereferenceObject(v102);
      }
    }
  }
  if ( Event < 0 )
  {
    *v55 = 0LL;
LABEL_268:
    if ( v3 )
      PopAndFreeW32ThreadLock(&v114);
    if ( v101 )
      PopAndFreeAlwaysW32ThreadLock(&v116);
    xxxDestroyThreadInfo();
    return (unsigned int)Event;
  }
  v60 = Process;
  Event = ObDuplicateObject(Process, *v55, Process, v7 + 1480, 0, 512, 2, 0);
  if ( Event < 0 )
  {
    *(_QWORD *)(v7 + 1480) = 0LL;
    goto LABEL_268;
  }
  Event = InitializeThreadInfoIocp(v60, (struct tagTHREADINFO *)v7);
  if ( Event < 0 )
    goto LABEL_268;
  v62 = *(_DWORD *)(v19 + 12) & 0x4000;
  *(_DWORD *)(v19 + 12) |= 0x4000u;
  if ( !*(_DWORD *)(v19 + 788) && (_DWORD)v106 )
  {
    *(_DWORD *)(v19 + 788) = 28;
    *(_OWORD *)(v19 + 792) = v105;
    *(_DWORD *)(v19 + 808) = v106;
    *(_WORD *)(v19 + 812) = WORD2(v106);
  }
  if ( v62 )
  {
    v64 = v110;
  }
  else
  {
    if ( (v106 & 0x200) != 0 )
    {
      v63 = v103;
    }
    else if ( (_WORD)v108 )
    {
      v63 = ParseReserved(v109, v61);
    }
    else
    {
      v63 = 0;
    }
    *(_DWORD *)(v19 + 692) = v63;
    v64 = v110;
    if ( (v110[8] & 0x400) != 0 )
    {
      v65 = *((_QWORD *)v110 + 1);
      if ( HMValidateSharedHandle(v65) )
        *(_QWORD *)(v19 + 696) = v65;
    }
  }
  v66 = (struct tagQ *)AllocQueue(0LL, 0LL);
  v67 = v66;
  if ( !v66 )
  {
    Event = -1073741801;
    goto LABEL_268;
  }
  tagTHREADINFO::AssignQueue((tagTHREADINFO *)v7, v66);
  *((_QWORD *)v67 + 13) = v7;
  *((_QWORD *)v67 + 12) = v7;
  ApiSetEditionUpdateRawMouseMode(v67);
  if ( Process == gpepCSRSS )
  {
    *((_DWORD *)v67 + 108) = 0x2000;
    v68 = 0;
  }
  else
  {
    *((_DWORD *)v67 + 108) = *(_DWORD *)(*(_QWORD *)(v7 + 424) + 896LL);
    v68 = *(_DWORD *)(*(_QWORD *)(v7 + 424) + 900LL);
  }
  *((_DWORD *)v67 + 109) = v68;
  if ( (*(_DWORD *)(v7 + 488) & 0xC) == 0 && grpWinStaList )
  {
    if ( qword_1C0295498 )
    {
      Event = qword_1C0295498();
      if ( Event < 0 )
        goto LABEL_138;
      if ( qword_1C02954A0 )
      {
        Event = qword_1C02954A0(-1LL, v64 + 10, v98, v64[8] & 0x40000000, &Handle);
LABEL_138:
        if ( Event < 0 )
        {
          if ( Event == -1073741205 )
          {
            LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v119);
            ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741205);
            LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v119);
            goto LABEL_268;
          }
LABEL_165:
          CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
          if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
            McTemplateK0dq_EtwWriteTransfer(v82, &DesktopResolutionFailure, v83, CurrentProcessId, Event);
          Event = -1073741502;
          goto LABEL_268;
        }
        if ( qword_1C02954A8 )
        {
          Event = qword_1C02954A8();
          if ( Event >= 0 )
          {
            AtomicExecutionCheck::EnforceConsistency(v70, v69, v71, v72);
            CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
            ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
            if ( qword_1C02954B0 )
              Event = qword_1C02954B0(v98[0], 1LL);
            else
              Event = -1073741637;
            v74 = PsGetCurrentThreadWin32Thread();
            --*(_DWORD *)(v74 + 48);
          }
          if ( Event >= 0 )
          {
            v75 = 0LL;
            v111 = 0LL;
            Event = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &v111, 0LL);
            v3 = (struct tagDESKTOP *)v111;
            if ( Event < 0 )
              goto LABEL_268;
            if ( qword_1C0295450 )
              qword_1C0295450(v111, &v114, CompositionObject::Release);
            if ( v3 )
              ObfReferenceObject(v3);
            ObfDereferenceObject(v3);
            LODWORD(v112) = 1;
            *((_QWORD *)&v112 + 1) = PsGetCurrentProcess(v77, v76, v78);
            *(_QWORD *)&v113 = v3;
            *((_QWORD *)&v113 + 1) = 0x100000000LL;
            if ( !qword_1C02954B8 )
              goto LABEL_161;
            Event = qword_1C02954B8();
            if ( Event >= 0 )
            {
              if ( !qword_1C02954C0 )
                goto LABEL_161;
              Event = qword_1C02954C0(&v112);
            }
            if ( Event < 0 )
              goto LABEL_268;
            if ( !*(_QWORD *)(v19 + 392) && PsGetProcessId(Process) != (HANDLE)gpidLogon )
            {
              LockObjectAssignment(v19 + 344, v3, v79, v80);
              *(_QWORD *)(v19 + 392) = Handle;
            }
            goto LABEL_176;
          }
        }
        else
        {
          Event = -1073741637;
        }
        CloseProtectedHandle(Handle);
        CloseProtectedHandle(v98[0]);
        Handle = 0LL;
        v98[0] = 0LL;
        goto LABEL_268;
      }
    }
    Event = -1073741637;
    goto LABEL_165;
  }
  *(_DWORD *)(v7 + 1272) |= 0x10u;
  if ( (int)IsEditionSetProcessWindowStationAtProcessInitSupported() >= 0 )
  {
    Event = ApiSetEditionSetProcessWindowStationAtProcessInit(v64 + 10, v64[8] & 0x40000000);
    if ( Event < 0 )
      goto LABEL_268;
    *(_DWORD *)(v19 + 12) |= 0x40010u;
  }
  if ( (int)IsEditionSetThreadDesktopAtThreadInitSupported() >= 0
    && (int)IsEditionSetThreadDesktopAtThreadInitSupported() >= 0
    && qword_1C0295400 )
  {
    qword_1C0295400();
  }
  v75 = 0LL;
LABEL_176:
  if ( !(unsigned int)InitClientInfo(v7) )
    goto LABEL_268;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v119, v84, v85, v86);
  if ( !qword_1C02954C8 )
    goto LABEL_261;
  Event = qword_1C02954C8();
  if ( Event < 0 )
    goto LABEL_181;
  if ( !qword_1C02954D0 )
  {
LABEL_261:
    Event = -1073741637;
    goto LABEL_262;
  }
  Event = qword_1C02954D0(v7, v3, Handle);
LABEL_181:
  if ( Event < 0 )
  {
LABEL_262:
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v119);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v119);
    goto LABEL_268;
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v119);
  if ( v3 != grpdeskRitInput )
    goto LABEL_192;
  if ( qword_1C02954D8 && (int)qword_1C02954D8() >= 0 )
  {
    if ( !qword_1C02954E0 )
      goto LABEL_192;
    v75 = (struct tagQ *)qword_1C02954E0(v7);
  }
  if ( v75 && v75 != *(struct tagQ **)(v7 + 432) )
  {
    if ( (int)IsDestroyThreadsMessagesSupported() >= 0 )
      DestroyThreadsMessages(*(_QWORD *)(v7 + 432), v7);
    zzzDestroyQueue(*(tagQ **)(v7 + 432), (tagTHREADINFO *)v7);
    tagTHREADINFO::AssignQueue((tagTHREADINFO *)v7, v75);
  }
LABEL_192:
  if ( v64[8] >= 0 )
    goto LABEL_200;
  if ( !v62 )
  {
    if ( !gpidLogon || PsGetProcessInheritedFromUniqueProcessId(Process) != gpidLogon )
    {
      v64[8] &= ~0x80000000;
      goto LABEL_200;
    }
    gppiScreenSaver = v19;
    gptSSCursor = *((_QWORD *)gpsi + 620);
    *(_DWORD *)(v19 + 12) |= 0x200000u;
    EtwTraceScreenSaverProcessEvent(1LL);
  }
  ForegroundBoost::SetForegroundPriority(v7, 1LL);
  if ( !v62 )
    *(_DWORD *)(v19 + 12) |= 0x400000u;
  *(_DWORD *)(v7 + 488) |= 0x2000000u;
LABEL_200:
  if ( (*(_DWORD *)(v7 + 488) & 0xC) == 0 && !v62 )
  {
    ++gdwDeferWinEvent;
    if ( (int)IszzzCalcStartCursorHideSupported() >= 0 )
    {
      ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(Process);
      if ( ProcessWin32Process && !*ProcessWin32Process )
        ProcessWin32Process = 0LL;
      zzzCalcStartCursorHide(ProcessWin32Process, 5000LL);
    }
    --gdwDeferWinEvent;
    if ( grpWinStaList )
    {
      if ( !*(_QWORD *)(v19 + 664) )
      {
        UserSetLastError(1003LL);
LABEL_267:
        Event = -1073741823;
        goto LABEL_268;
      }
    }
  }
  if ( qword_1C0295CF8 && (int)qword_1C0295CF8() >= 0 && qword_1C0295D00 )
    qword_1C0295D00();
  if ( v7 != -1288 )
    *(_QWORD *)(v7 + 1288) = 0LL;
  v90 = *(_QWORD *)(v7 + 432);
  if ( v90 )
  {
    v91 = (_QWORD *)(v90 + 420);
    if ( v91 )
      *v91 = 0LL;
  }
  if ( (*(_DWORD *)(v19 + 12) & 0x20000) != 0 )
    *(_DWORD *)(v7 + 488) |= 0x4000u;
  *(_DWORD *)(v7 + 488) |= 0x1000000u;
  if ( (*(_DWORD *)(v19 + 12) & 0x140) == 0
    && (gptiForeground && v19 == *((_QWORD *)gptiForeground + 53)
     || CInputGlobals::GetPtiLastWoken(*((CInputGlobals **)&WPP_MAIN_CB.Reserved + 1))
     && v19 == *((_QWORD *)CInputGlobals::GetPtiLastWoken(*((CInputGlobals **)&WPP_MAIN_CB.Reserved + 1)) + 53)
     && (*(_DWORD *)(v19 + 824) & 0x30) != 0x10) )
  {
    *(_DWORD *)(v7 + 488) |= 0x20u;
    LOBYTE(v87) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v87 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v88) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v87,
        v88,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        13,
        10,
        (__int64)&WPP_58e5e48e7cdb3be4103bc9d4c641fa22_Traceguids,
        v7);
    }
  }
  if ( (*(_DWORD *)gpsi & 4) != 0 && qword_1C0295510 && (int)qword_1C0295510() >= 0 && qword_1C0295518 )
    qword_1C0295518(0LL);
  if ( !v121 )
  {
    if ( qword_1C0295520 )
    {
      Event = qword_1C0295520();
      if ( Event < 0 )
        goto LABEL_246;
      if ( qword_1C0295528 )
      {
        Event = qword_1C0295528();
LABEL_246:
        if ( Event < 0 )
          goto LABEL_268;
        goto LABEL_247;
      }
    }
LABEL_161:
    Event = -1073741637;
    goto LABEL_268;
  }
LABEL_247:
  if ( !v62 && (*(_DWORD *)(v19 + 12) & 1) == 0 && qword_1C0295530 && (int)qword_1C0295530() >= 0 && qword_1C0295538 )
    qword_1C0295538(7LL);
  if ( v3 )
  {
    if ( (*((_DWORD *)v3 + 12) & 8) != 0 )
      goto LABEL_267;
    PopAndFreeW32ThreadLock(&v114);
  }
  if ( v101 )
    PopAndFreeAlwaysW32ThreadLock(&v116);
  v92 = *(_DWORD *)(v7 + 1272);
  if ( (v92 & 1) != 0 )
    *(_DWORD *)(v7 + 1272) = v92 & 0xFFFFFFFE;
  return (unsigned int)Event;
}
