/*
 * XREFs of xxxCreateThreadInfo @ 0x14015DFD8
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x14013264C (-UserInitialize@@YAJXZ.c)
 *     UserThreadCallout @ 0x140166CD0 (UserThreadCallout.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     _HMPheFromObject @ 0x140042A90 (_HMPheFromObject.c)
 *     HMValidateSharedHandle @ 0x140042DB0 (HMValidateSharedHandle.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     AllocQueue @ 0x140052060 (AllocQueue.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140060DA0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x14006C430 (-SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4Fore.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140091E28 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x140092790 (McTemplateK0_EtwWriteTransfer.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x140097A5C (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@UtagDESKTOP@@$1?UserDereferenceObject@@YAXPEAX@Z$00$00$00@@AEAAX_N0@Z @ 0x140099114 (-UnlockWorker@-$Win32RawLockedItemBase@UtagDESKTOP@@$1-UserDereferenceObject@@YAXPEAX@Z$00$00$00.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@UDISPLAYCONFIG_DEVICE_INFO_HEADER@@$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@AEAAX_N0@Z @ 0x140099168 (-UnlockWorker@-$Win32RawLockedItemBase@UDISPLAYCONFIG_DEVICE_INFO_HEADER@@$1-Win32FreePool@@YAXP.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetUnavailableInputSource @ 0x1400C2850 (SetUnavailableInputSource.c)
 *     ?InitializeThreadInfoIocp@@YAJPEAU_EPROCESS@@PEAUtagTHREADINFO@@@Z @ 0x1400DD50C (-InitializeThreadInfoIocp@@YAJPEAU_EPROCESS@@PEAUtagTHREADINFO@@@Z.c)
 *     ProtectHandle @ 0x1400DD798 (ProtectHandle.c)
 *     CloseProtectedHandle @ 0x1400DDCE8 (CloseProtectedHandle.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1400E0740 (McTemplateK0dq_EtwWriteTransfer.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400E5170 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     LockObjectAssignment @ 0x1400EC2C0 (LockObjectAssignment.c)
 *     HMAssignmentLock @ 0x1400F47B0 (HMAssignmentLock.c)
 *     ?Test@LastWokenThread@@YA?AW4LastWokenThreadTestResult@@PEBUtagPROCESSINFO@@_N@Z @ 0x1400FE920 (-Test@LastWokenThread@@YA-AW4LastWokenThreadTestResult@@PEBUtagPROCESSINFO@@_N@Z.c)
 *     RtlGetExpWinVer @ 0x1400FF4A0 (RtlGetExpWinVer.c)
 *     ApiSetEditionInitInputHangInfo @ 0x1401057A0 (ApiSetEditionInitInputHangInfo.c)
 *     zzzSetDesktop @ 0x140106120 (zzzSetDesktop.c)
 *     xxxResolveDesktop @ 0x1401061FC (xxxResolveDesktop.c)
 *     ?ManualLock@?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAAXPEAUtagDESKTOP@@@Z @ 0x140106488 (-ManualLock@-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAAXPEAUtagDESKTOP@@@Z.c)
 *     xxxSetProcessWindowStation @ 0x140106C40 (xxxSetProcessWindowStation.c)
 *     zzzCalcStartCursorHide @ 0x14011C59C (zzzCalcStartCursorHide.c)
 *     IszzzCalcStartCursorHideSupported @ 0x14011FE0C (IszzzCalcStartCursorHideSupported.c)
 *     IsEditionSetProcessWindowStationAtProcessInitSupported @ 0x1401320A0 (IsEditionSetProcessWindowStationAtProcessInitSupported.c)
 *     IsEditionSetThreadDesktopAtThreadInitSupported @ 0x140135CD4 (IsEditionSetThreadDesktopAtThreadInitSupported.c)
 *     ?AssignQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z @ 0x14015CA90 (-AssignQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z.c)
 *     ?SetForegroundActivate@tagTHREADINFO@@QEAAXW4AllowForegroundActivateReason@@@Z @ 0x14015D080 (-SetForegroundActivate@tagTHREADINFO@@QEAAXW4AllowForegroundActivateReason@@@Z.c)
 *     InitClientInfo @ 0x14015DD28 (InitClientInfo.c)
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x140193728 (ApiSetEditionUpdateRawMouseMode.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A2B00 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ?ParseReserved@@YAKREBGPEBG@Z @ 0x1401A3528 (-ParseReserved@@YAKREBGPEBG@Z.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1401B4D6C (EtwTraceScreenSaverProcessEvent.c)
 *     EditionSetProcessWindowStationAtProcessInit @ 0x14023B194 (EditionSetProcessWindowStationAtProcessInit.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memset @ 0x14023F500 (memset.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall xxxCreateThreadInfo(PETHREAD Thread)
{
  PEPROCESS ThreadProcess; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 UserSessionState; // rax
  __int64 v7; // rcx
  int v8; // r12d
  __int64 v9; // r14
  __int64 *ThreadWin32Thread; // rax
  unsigned int *v11; // rdx
  __int64 v12; // rcx
  const void *v13; // rdi
  ULONG64 v14; // r8
  __int64 v15; // rcx
  ULONG_PTR v16; // rbx
  struct tagTHREADINFO *v17; // rax
  struct tagTHREADINFO *v18; // rax
  unsigned int *v19; // rdx
  __int64 v20; // rcx
  ULONG64 v21; // r8
  ULONG64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r15
  int v25; // edi
  HANDLE ThreadProcessId; // rbx
  __int64 v27; // rcx
  HANDLE v28; // rcx
  unsigned int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rcx
  int v39; // edx
  _QWORD *v40; // rcx
  __int64 v41; // rbx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 ProcessSectionBaseAddress; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 (*v51)(void); // rax
  int v52; // eax
  int v53; // r12d
  void (*v54)(void); // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 (*v57)(void); // rax
  int v58; // eax
  __int64 (__fastcall *v59)(__int64); // rax
  HANDLE *v61; // rbx
  int Event; // edi
  HANDLE v63; // rcx
  int v64; // edx
  int v65; // eax
  unsigned int v66; // eax
  __int64 v67; // rbx
  struct tagQ *v68; // rax
  struct tagQ *v69; // rbx
  __int64 v70; // rcx
  __int64 UserGdiSessionState; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 (*v75)(void); // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  int CurrentProcessId; // eax
  __int64 v79; // r8
  __int64 (*v80)(void); // rax
  __int64 v81; // rdx
  PVOID v82; // rax
  PVOID v83; // rdi
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 (*v92)(void); // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 (__fastcall *v97)(__int128 *); // rax
  HANDLE v98; // rbx
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rcx
  __int64 v102; // rcx
  void (*v103)(void); // rax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 (*v106)(void); // rax
  __int64 v107; // rcx
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // rbx
  __int64 v111; // rcx
  __int64 v112; // rbx
  __int64 v113; // rcx
  char v114; // al
  int v115; // ebx
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // rcx
  __int64 ProcessWin32Process; // rax
  __int64 v121; // rcx
  __int64 v122; // rax
  __int64 v123; // rcx
  __int64 v124; // rcx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 (*v129)(void); // rax
  int v130; // eax
  void (__fastcall *v131)(_QWORD); // rax
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 (*v134)(void); // rax
  __int64 (*v135)(void); // rax
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 (*v138)(void); // rax
  void (__fastcall *v139)(__int64); // rax
  __int64 v140; // rax
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-1E8h]
  _DWORD *v143; // [rsp+40h] [rbp-1C8h]
  _QWORD *v144; // [rsp+48h] [rbp-1C0h]
  struct _EPROCESS *Process; // [rsp+50h] [rbp-1B8h]
  HANDLE Handle; // [rsp+58h] [rbp-1B0h] BYREF
  struct _NT_TIB *Self; // [rsp+60h] [rbp-1A8h]
  _QWORD *v148; // [rsp+68h] [rbp-1A0h]
  HANDLE v149[2]; // [rsp+70h] [rbp-198h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+80h] [rbp-188h] BYREF
  void (__fastcall *v151)(char *); // [rsp+90h] [rbp-178h]
  char v152[8]; // [rsp+98h] [rbp-170h] BYREF
  __int64 v153; // [rsp+A0h] [rbp-168h]
  _QWORD v154[10]; // [rsp+B0h] [rbp-158h] BYREF
  PVOID Object; // [rsp+100h] [rbp-108h] BYREF
  PVOID v156; // [rsp+108h] [rbp-100h] BYREF
  ULONG_PTR v157; // [rsp+110h] [rbp-F8h]
  ULONG_PTR v158[3]; // [rsp+118h] [rbp-F0h] BYREF
  _QWORD v159[2]; // [rsp+130h] [rbp-D8h] BYREF
  _QWORD v160[2]; // [rsp+140h] [rbp-C8h] BYREF
  _QWORD v161[2]; // [rsp+150h] [rbp-B8h] BYREF
  _QWORD v162[2]; // [rsp+160h] [rbp-A8h] BYREF
  char v163[8]; // [rsp+170h] [rbp-98h] BYREF
  __int64 v164; // [rsp+178h] [rbp-90h]
  __int128 v165; // [rsp+180h] [rbp-88h] BYREF
  __int128 v166; // [rsp+190h] [rbp-78h]
  __int128 v167; // [rsp+1A0h] [rbp-68h]
  int v168; // [rsp+218h] [rbp+10h] BYREF
  _QWORD *ProcessPeb; // [rsp+220h] [rbp+18h]
  unsigned int v170; // [rsp+228h] [rbp+20h]

  ThreadProcess = PsGetThreadProcess(Thread);
  Process = ThreadProcess;
  memset(v154, 0, 0x48uLL);
  v143 = 0LL;
  Handle = 0LL;
  v149[0] = 0LL;
  Self = KeGetPcr()->NtTib.Self;
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>((__int64)v158);
  v157 = 0LL;
  v165 = 0LL;
  v166 = 0LL;
  v167 = 0LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    McTemplateK0_EtwWriteTransfer(v3, &InitiateGuiThreadExecution, &W32kControlGuid);
  if ( !*(_DWORD *)(W32GetUserSessionState(v3) + 36456) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    if ( CurrentProcessWin32Process )
    {
      if ( (-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process) != 0 )
      {
        UserSessionState = W32GetUserSessionState(-*(_QWORD *)CurrentProcessWin32Process);
        ++*(_DWORD *)(UserSessionState + 36464);
        v8 = 33554504;
        if ( ThreadProcess != *(PEPROCESS *)(W32GetUserGdiSessionState(v7) + 40) )
          v8 = 0;
        v9 = 0LL;
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(Thread);
        if ( ThreadWin32Thread )
          v9 = *ThreadWin32Thread;
        ProcessPeb = (_QWORD *)PsGetProcessPeb(ThreadProcess);
        v144 = (_QWORD *)ProcessPeb[4];
        v148 = v154;
        v154[0] = v144[4];
        v154[1] = v144[5];
        v154[2] = v144[17];
        v154[3] = v144[18];
        v154[4] = *(_QWORD *)((char *)v144 + 164);
        v11 = (unsigned int *)(v144 + 24);
        if ( (unsigned __int64)(v144 + 24) >= MmUserProbeAddress )
          v11 = (unsigned int *)MmUserProbeAddress;
        v12 = *v11;
        LODWORD(ProcessPeb) = v12;
        LODWORD(v154[5]) = v12;
        v13 = (const void *)*((_QWORD *)v11 + 1);
        v154[6] = v13;
        if ( !(_WORD)v12 )
        {
          v154[6] = 0LL;
          goto LABEL_29;
        }
        if ( ((unsigned __int8)v13 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v14 = (ULONG64)v13 + (unsigned __int16)v12 + 2;
        if ( v14 <= (unsigned __int64)v13 || v14 >= MmUserProbeAddress )
          ExRaiseAccessViolation();
        if ( (unsigned __int16)v12 > WORD1(ProcessPeb) )
        {
          if ( (v12 & 1) == 0 )
            goto LABEL_26;
        }
        else if ( (v12 & 1) == 0 )
        {
          v16 = Win32AllocPoolWithQuotaZInitImpl(v12, (unsigned __int16)v12, 0x79747355u);
          v157 = v16;
          v154[6] = v16;
          if ( !v16 )
            ExRaiseStatus(-1073741801);
          if ( v151 != (void (__fastcall *)(char *))-1LL )
          {
            v17 = PtiCurrent(v15);
            KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, v16, (ULONG_PTR)v17);
          }
          v18 = PtiCurrent(v15);
          BugCheckParameter2[0] = *((_QWORD *)v18 + 48);
          *((_QWORD *)v18 + 48) = BugCheckParameter2;
          BugCheckParameter2[1] = v16;
          v151 = GreDeleteFastMutex;
          memmove((void *)v154[6], v13, LOWORD(v154[5]));
LABEL_29:
          v19 = (unsigned int *)(v144 + 26);
          if ( (unsigned __int64)(v144 + 26) >= MmUserProbeAddress )
            v19 = (unsigned int *)MmUserProbeAddress;
          v20 = *v19;
          LODWORD(ProcessPeb) = v20;
          LODWORD(v154[7]) = v20;
          v21 = *((_QWORD *)v19 + 1);
          v154[8] = v21;
          if ( (v21 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v22 = v21 + (unsigned __int16)v20 + 2LL;
          if ( v22 <= v21 || v22 >= MmUserProbeAddress )
            ExRaiseAccessViolation();
          if ( (unsigned __int16)v20 > WORD1(ProcessPeb) )
          {
            if ( (v20 & 1) == 0 )
              goto LABEL_223;
          }
          else if ( (v20 & 1) == 0 )
          {
            v23 = PsGetCurrentProcessWin32Process(v20);
            v24 = v23;
            if ( v23 )
              v24 = -(__int64)(*(_QWORD *)v23 != 0LL) & v23;
            v25 = v8 | 0x100;
            if ( *(char *)(v24 + 12) >= 0 )
              v25 = v8;
            ThreadProcessId = PsGetThreadProcessId(Thread);
            v28 = *(HANDLE *)(W32GetUserSessionState(v27) + 63584);
            v29 = v25 | 0x2000000;
            if ( v28 != ThreadProcessId )
              v29 = v25;
            v170 = v29;
            _InterlockedOr((volatile signed __int32 *)(v9 + 528), v29);
            v30 = *(unsigned int *)(W32GetUserSessionState(v28) + 67064);
            if ( (v30 & 0x80u) != 0LL )
            {
              if ( *(_QWORD *)(W32GetUserSessionState(v30) + 14272) )
              {
                v32 = W32GetUserSessionState(v31);
                if ( (*(_BYTE *)(HMPheFromObject(*(int **)(v32 + 14272)) + 25) & 1) != 0 )
                {
                  LODWORD(ProcessPeb) = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1338LL);
                }
              }
              v33 = *(_QWORD *)(W32GetUserSessionState(v31) + 14272);
              v159[0] = v9 + 480;
              v159[1] = v33;
              v34 = v159;
              goto LABEL_58;
            }
            if ( !*(_QWORD *)(W32GetUserSessionState(v30) + 14240) )
            {
              if ( *(_QWORD *)(W32GetUserSessionState(v35) + 14272) )
              {
                v37 = *(_QWORD *)(W32GetUserSessionState(v36) + 14272);
                v160[0] = W32GetUserSessionState(v38) + 14240;
                v160[1] = v37;
                v39 = 1;
                v40 = v160;
              }
              else
              {
                if ( !*(_QWORD *)(W32GetUserSessionState(v36) + 14712) )
                  goto LABEL_54;
                v41 = *(_QWORD *)(W32GetUserSessionState(v35) + 14712);
                v161[0] = W32GetUserSessionState(v42) + 14240;
                v161[1] = v41;
                v39 = 0;
                v40 = v161;
              }
              HMAssignmentLock((__int64)v40, v39);
            }
LABEL_54:
            if ( *(_QWORD *)(W32GetUserSessionState(v35) + 14240) )
            {
              v44 = W32GetUserSessionState(v43);
              if ( (*(_BYTE *)(HMPheFromObject(*(int **)(v44 + 14240)) + 25) & 1) != 0 )
              {
                LODWORD(ProcessPeb) = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1356LL);
              }
            }
            v45 = *(_QWORD *)(W32GetUserSessionState(v43) + 14240);
            v162[0] = v9 + 480;
            v162[1] = v45;
            v34 = v162;
LABEL_58:
            HMAssignmentLock((__int64)v34, 0);
            *(_QWORD *)(v9 + 488) = v9 + 1096;
            if ( (*(_DWORD *)(v24 + 12) & 0x800000) != 0 )
              _InterlockedOr((volatile signed __int32 *)(v9 + 528), 0x2000000u);
            *(_QWORD *)(v9 + 464) = v24;
            *(_QWORD *)(v9 + 704) = *(_QWORD *)(v24 + 328);
            *(_QWORD *)(v24 + 328) = v9;
            ++*(_DWORD *)(v24 + 376);
            if ( Self )
              Self[2].StackBase = PsGetThreadId(*(PETHREAD *)v9);
            *(_QWORD *)(v9 + 520) = (char *)Self + 2048;
            *(_DWORD *)(*(_QWORD *)(v9 + 520) + 232LL) = *(_DWORD *)(v9 + 400);
            *(_DWORD *)(*(_QWORD *)(v9 + 520) + 236LL) = 0;
            *(_QWORD *)(v9 + 408) = *(_QWORD *)(v9 + 520) + 232LL;
            v47 = *(unsigned int *)(v9 + 404);
            *(_QWORD *)(*(_QWORD *)(v9 + 520) + 240LL) = (unsigned int)v47;
            *(_QWORD *)(v9 + 416) = *(_QWORD *)(v9 + 520) + 240LL;
            if ( (*(_DWORD *)(v24 + 12) & 0x2000000) != 0 )
              _InterlockedOr((volatile signed __int32 *)(v9 + 528), 0x20000000u);
            if ( !*(_DWORD *)(v9 + 672) )
            {
              if ( PsGetProcessPeb(Process) )
              {
                ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(Process);
                *(_DWORD *)(v9 + 672) = RtlGetExpWinVer(ProcessSectionBaseAddress);
              }
              else
              {
                *(_DWORD *)(v9 + 672) = 1536;
              }
            }
            v50 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v47, v46) + 48);
            v51 = *(__int64 (**)(void))(v50 + 1104);
            if ( v51 )
            {
              v52 = v51();
              v53 = -1073741637;
            }
            else
            {
              v53 = -1073741637;
              v52 = -1073741637;
            }
            if ( v52 >= 0 )
            {
              v50 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v50, v49) + 48);
              v54 = *(void (**)(void))(v50 + 1112);
              if ( v54 )
                v54();
            }
            v170 &= 0xCu;
            if ( !v170 )
            {
              v56 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v50, v49) + 48);
              v57 = *(__int64 (**)(void))(v56 + 1120);
              v58 = v57 ? v57() : -1073741637;
              if ( v58 >= 0 )
              {
                v59 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v56, v55) + 48)
                                                        + 1128LL);
                if ( v59 ? v59(v9) : 0 )
                  *(_DWORD *)(v24 + 12) |= 0x1000000u;
              }
            }
            v61 = (HANDLE *)(v9 + 760);
            Event = ZwCreateEvent((PHANDLE)(v9 + 760), 0x1F0003u, 0LL, SynchronizationEvent, 0);
            if ( Event >= 0 )
            {
              v63 = *v61;
              Object = 0LL;
              Event = ObReferenceObjectByHandle(v63, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
              *(_QWORD *)(v9 + 768) = Object;
              if ( Event < 0 )
              {
                if ( Event != -1073741816 )
                  ObCloseHandle(*v61, 1);
              }
              else
              {
                Event = ProtectHandle(*v61, v64, (struct _OBJECT_TYPE *)ExEventObjectType, 1);
              }
            }
            if ( Event < 0 )
            {
              *v61 = 0LL;
LABEL_225:
              v82 = 0LL;
              goto LABEL_226;
            }
            ProcessPeb = (_QWORD *)(v9 + 1632);
            Event = ObDuplicateObject(Process, *v61, Process, v9 + 1632, 0, 512, 2, 0);
            if ( Event < 0 )
            {
              *ProcessPeb = 0LL;
              goto LABEL_225;
            }
            Event = InitializeThreadInfoIocp(Process, (void **)v9);
            if ( Event < 0 )
              goto LABEL_225;
            v65 = *(_DWORD *)(v24 + 12);
            LODWORD(ProcessPeb) = v65 & 0x4000;
            *(_DWORD *)(v24 + 12) = v65 | 0x4000;
            if ( !*(_DWORD *)(v24 + 780) && LODWORD(v154[4]) )
            {
              *(_DWORD *)(v24 + 780) = 28;
              *(_QWORD *)(v24 + 784) = v154[2];
              *(_QWORD *)(v24 + 792) = v154[3];
              *(_DWORD *)(v24 + 800) = v154[4];
              *(_WORD *)(v24 + 804) = WORD2(v154[4]);
            }
            if ( (v65 & 0x4000) == 0 )
            {
              if ( (v154[4] & 0x200) != 0 )
                v66 = v154[0];
              else
                v66 = LOWORD(v154[7])
                    ? ParseReserved((const unsigned __int16 *volatile)v154[8], (const unsigned __int16 *)0x4000)
                    : 0;
              *(_DWORD *)(v24 + 684) = v66;
              if ( (v148[4] & 0x400) != 0 )
              {
                v67 = v148[1];
                if ( HMValidateSharedHandle(v67) )
                  *(_QWORD *)(v24 + 688) = v67;
              }
            }
            v68 = (struct tagQ *)AllocQueue(0LL, 0LL);
            v69 = v68;
            if ( !v68 )
            {
              Event = -1073741801;
              goto LABEL_225;
            }
            tagTHREADINFO::AssignQueue((tagTHREADINFO *)v9, v68);
            *((_QWORD *)v69 + 13) = v9;
            *((_QWORD *)v69 + 12) = v9;
            ApiSetEditionUpdateRawMouseMode(v69);
            UserGdiSessionState = W32GetUserGdiSessionState(v70);
            v73 = (__int64)Process;
            if ( Process == *(struct _EPROCESS **)(UserGdiSessionState + 40) )
            {
              *((_QWORD *)v69 + 59) = 0x2000LL;
            }
            else
            {
              *((_DWORD *)v69 + 118) = *(_DWORD *)(*(_QWORD *)(v9 + 464) + 872LL);
              *((_DWORD *)v69 + 119) = *(_DWORD *)(*(_QWORD *)(v9 + 464) + 876LL);
              v73 = *(unsigned int *)(*(_QWORD *)(v9 + 464) + 880LL);
              *((_DWORD *)v69 + 120) = v73;
            }
            if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v9 + 528), 0, 0) & 0xC) != 0
              || !*(_QWORD *)(W32GetUserSessionState(v73) + 63560) )
            {
              *(_QWORD *)(v9 + 1360) |= 0x10uLL;
              if ( (int)IsEditionSetProcessWindowStationAtProcessInitSupported(v73, v72) >= 0 )
              {
                LODWORD(Self) = v148[4] & 0x40000000;
                Event = 0;
                if ( (int)IsEditionSetProcessWindowStationAtProcessInitSupported(v100, v99) >= 0 )
                  Event = EditionSetProcessWindowStationAtProcessInit(v148 + 5, (unsigned int)Self);
                if ( Event < 0 )
                  goto LABEL_225;
                *(_DWORD *)(v24 + 12) |= 0x40010u;
              }
              if ( (int)IsEditionSetThreadDesktopAtThreadInitSupported(v100, v99) >= 0
                && (int)IsEditionSetThreadDesktopAtThreadInitSupported(v101, v93) >= 0 )
              {
                v103 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v102, v93) + 48) + 1032LL);
                if ( v103 )
                  v103();
              }
            }
            else
            {
              v74 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v73, v72) + 48);
              v75 = *(__int64 (**)(void))(v74 + 1152);
              if ( v75 )
                Event = v75();
              else
                Event = -1073741637;
              if ( Event < 0
                || (Event = xxxResolveDesktop(
                              v74,
                              (__int64)(v148 + 5),
                              (__int64)v149,
                              v148[4] & 0x40000000,
                              (__int64)&Handle),
                    Event < 0) )
              {
                if ( Event == -1073741205 )
                {
                  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v168, 1);
                  ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741205);
                  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v168);
                }
                else
                {
                  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
                  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
                  {
                    LODWORD(BugCheckParameter4) = Event;
                    McTemplateK0dq_EtwWriteTransfer(
                      Microsoft_Windows_Win32kEnableBits,
                      &DesktopResolutionFailure,
                      v79,
                      CurrentProcessId,
                      BugCheckParameter4);
                  }
                  Event = -1073741502;
                }
                goto LABEL_225;
              }
              v80 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v77, v76) + 48) + 1168LL);
              if ( v80 )
                Event = v80();
              else
                Event = -1073741637;
              if ( Event < 0 )
                goto LABEL_130;
              AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v163);
              Event = xxxSetProcessWindowStation((__int64)v149[0], v81);
              if ( v163[0] )
                --*(_DWORD *)(v164 + 28);
              if ( Event < 0 )
              {
LABEL_130:
                CloseProtectedHandle(Handle);
                CloseProtectedHandle(v149[0]);
                Handle = 0LL;
                v149[0] = 0LL;
                goto LABEL_225;
              }
              v156 = 0LL;
              Event = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &v156, 0LL);
              v82 = v156;
              v143 = v156;
              if ( Event < 0 )
              {
LABEL_226:
                if ( v82 )
                  Win32RawLockedItemBase<tagDESKTOP,&void UserDereferenceObject(void *),1,1,1>::UnlockWorker(
                    (ULONG_PTR)v158,
                    0);
                if ( v157 )
                  Win32RawLockedItemBase<DISPLAYCONFIG_DEVICE_INFO_HEADER,&void Win32FreePool(void *),1,1,1>::UnlockWorker(
                    (ULONG_PTR)BugCheckParameter2,
                    0);
                xxxDestroyThreadInfo();
LABEL_220:
                Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)v158);
                Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
                return (unsigned int)Event;
              }
              v83 = v156;
              Win32RawLockedNtObject<tagDESKTOP>::ManualLock(v158, (ULONG_PTR)v156);
              ObfDereferenceObject(v83);
              LODWORD(v166) = 1;
              *((_QWORD *)&v166 + 1) = PsGetCurrentProcess(v85, v84, v86, v87);
              *(_QWORD *)&v167 = v83;
              *((_QWORD *)&v167 + 1) = 0x100000000LL;
              v91 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v89, v88) + 48);
              v92 = *(__int64 (**)(void))(v91 + 1184);
              if ( v92 )
                Event = v92();
              else
                Event = -1073741637;
              if ( Event < 0 )
                goto LABEL_160;
              v94 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v91, v90) + 48);
              v97 = *(__int64 (__fastcall **)(__int128 *))(v94 + 1192);
              Event = v97 ? v97(&v165) : -1073741637;
              if ( Event < 0 )
                goto LABEL_160;
              if ( !*(_QWORD *)(v24 + 384) )
              {
                v98 = *(HANDLE *)(W32GetUserSessionState(v94) + 63584);
                if ( PsGetProcessId(Process) != v98 )
                {
                  LockObjectAssignment((void **)(v24 + 344), v143);
                  *(_QWORD *)(v24 + 384) = Handle;
                }
              }
            }
            if ( (unsigned int)InitClientInfo(v9, v93, v95, v96) )
            {
              AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v152);
              v106 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v105, v104) + 48) + 1200LL);
              if ( v106 )
                Event = v106();
              else
                Event = -1073741637;
              if ( Event < 0 || (Event = zzzSetDesktop(v9, (__int64)v143, (__int64)Handle), Event < 0) )
              {
                if ( v152[0] )
                {
                  --*(_DWORD *)(v153 + 28);
                  v153 = 0LL;
                }
                goto LABEL_160;
              }
              if ( v152[0] )
                --*(_DWORD *)(v153 + 28);
              W32GetUserSessionState(v107);
              if ( *((int *)v148 + 8) < 0 )
              {
                if ( (_DWORD)ProcessPeb )
                {
LABEL_168:
                  _InterlockedOr((volatile signed __int32 *)(v9 + 528), 0x2000000u);
                  goto LABEL_169;
                }
                if ( *(_QWORD *)(W32GetUserSessionState(v109) + 63584) )
                {
                  v110 = *(_QWORD *)(W32GetUserSessionState(v109) + 63584);
                  if ( PsGetProcessInheritedFromUniqueProcessId(Process) == v110 )
                  {
                    *(_QWORD *)(W32GetUserSessionState(v109) + 62864) = v24;
                    v112 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v111) + 19928) + 4960LL);
                    *(_QWORD *)(W32GetUserSessionState(v113) + 36280) = v112;
                    *(_DWORD *)(v24 + 12) |= 0x200000u;
                    EtwTraceScreenSaverProcessEvent(1LL);
                    ForegroundBoost::SetForegroundPriority(v9, 1u, 8u);
                    *(_DWORD *)(v24 + 12) |= 0x400000u;
                    goto LABEL_168;
                  }
                }
                *((_DWORD *)v148 + 8) &= ~0x80000000;
              }
LABEL_169:
              v114 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 528), 0, 0);
              v115 = (int)ProcessPeb;
              if ( (v114 & 0xC) == 0 && !(_DWORD)ProcessPeb )
              {
                v116 = W32GetUserSessionState(v109);
                ++*(_DWORD *)(v116 + 70856);
                if ( (int)IszzzCalcStartCursorHideSupported(v118, v117) >= 0 )
                {
                  ProcessWin32Process = PsGetProcessWin32Process(Process);
                  if ( ProcessWin32Process )
                    ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
                  zzzCalcStartCursorHide(ProcessWin32Process, 5000LL);
                }
                if ( !*(_DWORD *)(W32GetUserSessionState(v119) + 70856) )
                {
                  LODWORD(ProcessPeb) = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1798LL);
                }
                v122 = W32GetUserSessionState(v121);
                --*(_DWORD *)(v122 + 70856);
                if ( *(_QWORD *)(W32GetUserSessionState(v123) + 63560) )
                {
                  if ( !*(_QWORD *)(v24 + 656) )
                  {
                    UserSetLastError(1003);
LABEL_180:
                    Event = -1073741823;
                    goto LABEL_160;
                  }
                }
              }
              ApiSetEditionInitInputHangInfo(v109, v108);
              v124 = *(_QWORD *)(v9 + 472);
              if ( v124 )
                SetUnavailableInputSource((_DWORD *)(v124 + 460));
              if ( (*(_DWORD *)(v24 + 12) & 0x20000) != 0 )
                _InterlockedOr((volatile signed __int32 *)(v9 + 528), 0x4000u);
              _InterlockedOr((volatile signed __int32 *)(v9 + 528), 0x1000000u);
              if ( (*(_DWORD *)(v24 + 12) & 0x140) == 0
                && (*(_BYTE *)(v24 + 816) & 0x30) != 0x10
                && ((v125 = *(_QWORD *)(W32GetUserSessionState(v124) + 18960)) != 0 && *(_QWORD *)(v125 + 464) == v24
                 || (unsigned int)LastWokenThread::Test(v24, 0, v126) == 3) )
              {
                tagTHREADINFO::SetForegroundActivate(v9, 1);
              }
              v128 = *(_QWORD *)(W32GetUserSessionState(v124) + 19928);
              if ( (*(_DWORD *)v128 & 4) != 0 )
              {
                v128 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v128, v127) + 48);
                v129 = *(__int64 (**)(void))(v128 + 1256);
                v130 = v129 ? v129() : -1073741637;
                if ( v130 >= 0 )
                {
                  v128 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v128, v127) + 48);
                  v131 = *(void (__fastcall **)(_QWORD))(v128 + 1264);
                  if ( v131 )
                    v131(0LL);
                }
              }
              if ( !v170 )
              {
                v133 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v128, v127) + 48);
                v134 = *(__int64 (**)(void))(v133 + 1272);
                Event = v134 ? v134() : -1073741637;
                if ( Event < 0 )
                  goto LABEL_160;
                v128 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v133, v132) + 48);
                v135 = *(__int64 (**)(void))(v128 + 1280);
                Event = v135 ? v135() : -1073741637;
                if ( Event < 0 )
                  goto LABEL_160;
              }
              if ( !v115 && (*(_DWORD *)(v24 + 12) & 1) == 0 )
              {
                v137 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v128, v127) + 48);
                v138 = *(__int64 (**)(void))(v137 + 1288);
                if ( v138 )
                  v53 = v138();
                if ( v53 >= 0 )
                {
                  v139 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v137, v136) + 48)
                                                        + 1296LL);
                  if ( v139 )
                    v139(7LL);
                }
              }
              if ( v143 )
              {
                if ( (v143[12] & 8) != 0 )
                  goto LABEL_180;
                Win32RawLockedItemBase<tagDESKTOP,&void UserDereferenceObject(void *),1,1,1>::UnlockWorker(
                  (ULONG_PTR)v158,
                  0);
              }
              v140 = *(_QWORD *)(v9 + 1360);
              if ( (v140 & 1) != 0 )
                *(_QWORD *)(v9 + 1360) = v140 & 0xFFFFFFFFFFFFFFFEuLL;
              goto LABEL_220;
            }
LABEL_160:
            v82 = v143;
            goto LABEL_226;
          }
          LODWORD(ProcessPeb) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1297LL);
LABEL_223:
          ExRaiseAccessViolation();
        }
        v168 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1274LL);
LABEL_26:
        ExRaiseAccessViolation();
      }
    }
  }
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)v158);
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  return 3221225738LL;
}
