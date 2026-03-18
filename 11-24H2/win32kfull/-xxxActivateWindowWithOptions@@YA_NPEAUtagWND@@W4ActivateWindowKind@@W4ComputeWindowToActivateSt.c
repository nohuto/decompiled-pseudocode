/*
 * XREFs of ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x1401AF538
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x140087B20 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     xxxMNEndMenuStateInternal @ 0x14009AEB0 (xxxMNEndMenuStateInternal.c)
 *     xxxMNCloseHierarchy @ 0x14009E0A0 (xxxMNCloseHierarchy.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x14014F0F0 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x14017C3F8 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     xxxHandleNCMouseGuys @ 0x1401AF278 (xxxHandleNCMouseGuys.c)
 *     ?xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1401E7F60 (-xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x14021985C (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@W4SwpActivateOptions@@@Z @ 0x14022C590 (-xxxSwpActivate@@YAHPEAUtagWND@@W4SwpActivateOptions@@@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x140237020 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14024FA00 (-xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x140061700 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _anonymous_namespace_::ComputeWindowToActivate @ 0x1400F6818 (_anonymous_namespace_--ComputeWindowToActivate.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x140189B00 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDdD @ 0x14018A20C (WPP_RECORDER_AND_TRACE_SF_DDdD.c)
 *     WPP_RECORDER_AND_TRACE_SF_dq @ 0x1401C696C (WPP_RECORDER_AND_TRACE_SF_dq.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140232BF0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x140275A1C (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140276AB0 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 */

char __fastcall xxxActivateWindowWithOptions(__int64 a1, __int64 a2, int a3, int a4, __int16 a5)
{
  int v6; // r12d
  unsigned int *v7; // rdx
  char v8; // si
  char v9; // r14
  bool v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  char v16; // bl
  bool v17; // di
  __int64 v18; // rax
  int v19; // r8d
  int v20; // r15d
  int v21; // edx
  __int64 v22; // rdi
  bool v23; // bl
  __int64 v24; // rax
  int v25; // edx
  int v26; // r8d
  bool v27; // bl
  int v28; // r14d
  struct tagWND *v29; // rax
  bool v30; // zf
  __int16 v31; // r12
  struct tagTHREADINFO *v32; // rcx
  bool v33; // r14
  bool v34; // r15
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  __int64 v40; // rdx
  __int64 v41; // rcx
  char v42; // r15
  char v43; // bl
  bool v44; // di
  __int64 v45; // rax
  int v46; // r8d
  int v47; // edx
  char v48; // di
  bool v49; // r14
  char v50; // bl
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  int v54; // r8d
  int v55; // edx
  char v56; // di
  int v57; // r14d
  char v58; // bl
  bool v59; // di
  __int64 v60; // rax
  int v61; // r8d
  int v62; // edx
  bool v63; // r15
  unsigned int *v64; // rdx
  bool v65; // r12
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rax
  int v69; // r8d
  int v70; // edx
  __int64 v71; // rcx
  char v72; // bl
  bool v73; // di
  __int64 v74; // rax
  int v75; // r8d
  int v76; // edx
  __int64 v77; // rdx
  char v78; // bl
  bool v79; // di
  __int64 v80; // rax
  int v81; // r8d
  int v82; // edx
  char v83; // di
  bool v84; // r15
  char ThreadId; // bl
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rax
  int v89; // r8d
  int v90; // edx
  int v91; // r14d
  __int64 v92; // rcx
  char v93; // bl
  bool v94; // di
  __int64 v95; // rax
  int v96; // r8d
  int v97; // edx
  unsigned int v98; // r14d
  __int64 v99; // rdx
  __int64 v100; // rcx
  char v101; // bl
  bool v102; // di
  __int64 v103; // rax
  int v104; // edx
  int v105; // r8d
  __int64 v106; // r8
  bool v107; // bl
  __int64 v108; // rax
  int v109; // r8d
  int v110; // edx
  __int64 v111; // r9
  const char *v112; // rax
  __int16 v114; // [rsp+38h] [rbp-51h]
  __int16 v115; // [rsp+38h] [rbp-51h]
  bool v116; // [rsp+69h] [rbp-20h]
  unsigned int ForegroundActivate; // [rsp+74h] [rbp-15h]
  struct tagTHREADINFO *v118; // [rsp+80h] [rbp-9h]
  __int128 v119; // [rsp+88h] [rbp-1h] BYREF
  ULONG_PTR BugCheckParameter3[8]; // [rsp+98h] [rbp+Fh] BYREF
  struct tagWND *v121; // [rsp+E8h] [rbp+5Fh]

  v121 = (struct tagWND *)a1;
  v6 = a2;
  v118 = PtiCurrent(a1, a2);
  BugCheckParameter3[0] = -1LL;
  v7 = (unsigned int *)v118;
  BugCheckParameter3[1] = 0LL;
  v116 = 0;
  ForegroundActivate = 0;
  v8 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
    || (v9 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v9 = 0;
  }
  v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    PsGetThreadId(*(PETHREAD *)v118);
    UserSessionState = W32GetUserSessionState(v12, v11);
    LOBYTE(v14) = v10;
    LOBYTE(v15) = v9;
    WPP_RECORDER_AND_TRACE_SF_dq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v15,
      v14,
      *(_QWORD *)(UserSessionState + 69416));
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
    || (v16 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v16 = 0;
  }
  v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( !v16 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
  {
    v20 = a4;
  }
  else
  {
    v18 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v7);
    LOBYTE(v19) = v17;
    v20 = a4;
    LOBYTE(v21) = v16;
    WPP_RECORDER_AND_TRACE_SF_DDdD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v21,
      v19,
      *(_QWORD *)(v18 + 69416));
  }
  v22 = (__int64)v121;
  if ( (*(_BYTE *)(*((_QWORD *)v121 + 5) + 31LL) & 0xC0) == 0x40 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v8 = 0;
    }
    v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_174;
    v24 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v7);
    v114 = 97;
LABEL_173:
    LOBYTE(v26) = v23;
    LOBYTE(v25) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v25,
      v26,
      *(_QWORD *)(v24 + 69416),
      4,
      2,
      v114,
      (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids);
LABEL_174:
    v56 = 0;
    goto LABEL_175;
  }
  if ( v6 )
  {
    v119 = 0LL;
    if ( !anonymous_namespace_::ComputeWindowToActivate(v121, v6, a3, &v119) )
      goto LABEL_166;
    v29 = (struct tagWND *)v119;
    if ( !(_QWORD)v119 || (v28 = DWORD2(v119)) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3835LL);
      v29 = (struct tagWND *)v119;
      v28 = DWORD2(v119);
    }
    v30 = v121 == v29;
    v121 = v29;
    v22 = (__int64)v29;
    v27 = !v30;
  }
  else
  {
    if ( a3 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3823LL);
    v27 = 0;
    v28 = 1;
    v116 = v20 == 1;
  }
  if ( !v22 )
  {
LABEL_166:
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v8 = 0;
    }
    v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_174;
    v24 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v7);
    v114 = 98;
    goto LABEL_173;
  }
  if ( !v28 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3854LL);
  if ( v27 )
    Win32HM_LockIntoThread<0>((__int64)v118, v22, BugCheckParameter3);
  v31 = a5;
  if ( (a5 & 0x100) != 0 && *(struct tagTHREADINFO **)(v22 + 16) != v118 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3863LL);
  v32 = *(struct tagTHREADINFO **)(v22 + 16);
  if ( *((_QWORD *)v32 + 59) != *((_QWORD *)v118 + 59) )
  {
    if ( v32 == v118 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3917LL);
    v63 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v64 = &WPP_RECORDER_INITIALIZED;
    v65 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v63 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      PsGetThreadId(*(PETHREAD *)v118);
      v68 = W32GetUserSessionState(v67, v66);
      LOBYTE(v69) = v65;
      LOBYTE(v70) = v63;
      WPP_RECORDER_AND_TRACE_SF_dq(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v70,
        v69,
        *(_QWORD *)(v68 + 69416));
      v64 = &WPP_RECORDER_INITIALIZED;
    }
    if ( v28 == 5 )
    {
      v57 = 31;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || (v101 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v101 = 0;
      }
      v102 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v101 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v103 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
        v115 = 104;
        goto LABEL_142;
      }
    }
    else
    {
      if ( v28 != 6 )
      {
        v71 = *(_QWORD *)(W32GetUserSessionState((unsigned int)(v28 - 5), &WPP_RECORDER_INITIALIZED) + 18944);
        if ( v71 != *((_QWORD *)v118 + 59) && *(_QWORD *)(W32GetUserSessionState(v71, v7) + 18944) )
        {
          v56 = 0;
          goto LABEL_175;
        }
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
          || (v72 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v72 = 0;
        }
        v73 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v72 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v74 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v7);
          LOBYTE(v75) = v73;
          LOBYTE(v76) = v72;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v76,
            v75,
            *(_QWORD *)(v74 + 69416),
            4,
            2,
            106,
            (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids);
        }
        if ( tagTHREADINFO::ComputeAndTestForegroundActivate(v118) )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
            || (v78 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
          {
            v78 = 0;
          }
          v79 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v78 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v80 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v77);
            LOBYTE(v81) = v79;
            LOBYTE(v82) = v78;
            WPP_RECORDER_AND_TRACE_SF_(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v82,
              v81,
              *(_QWORD *)(v80 + 69416),
              4,
              2,
              107,
              (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids);
          }
          ForegroundActivate = tagTHREADINFO::GetForegroundActivate(v118);
        }
        else if ( *((_DWORD *)v118 + 237) || v116 )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
            || (v83 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
          {
            v83 = 0;
          }
          v84 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v83 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            ThreadId = (unsigned __int8)PsGetThreadId(*(PETHREAD *)v118);
            v88 = W32GetUserSessionState(v87, v86);
            LOBYTE(v89) = v84;
            LOBYTE(v90) = v83;
            WPP_RECORDER_AND_TRACE_SF_d(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v90,
              v89,
              *(_QWORD *)(v88 + 69416),
              4,
              2,
              108,
              (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids,
              ThreadId);
          }
          ForegroundActivate = 64;
        }
        v64 = &WPP_RECORDER_INITIALIZED;
        v91 = v28 - 3;
        if ( v91 )
        {
          v31 = a5;
          if ( v91 == 1 )
            v57 = 3;
          else
            v57 = 2;
          goto LABEL_125;
        }
        v57 = 3;
        goto LABEL_124;
      }
      v57 = 31;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || (v101 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v101 = 0;
      }
      v102 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v101 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v103 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
        v115 = 105;
LABEL_142:
        LOBYTE(v105) = v102;
        LOBYTE(v104) = v101;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v104,
          v105,
          *(_QWORD *)(v103 + 69416),
          4,
          2,
          v115,
          (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids);
        v31 = a5;
LABEL_143:
        v64 = &WPP_RECORDER_INITIALIZED;
LABEL_125:
        v92 = *(_QWORD *)&WPP_GLOBAL_Control;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
          || (v93 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v93 = 0;
        }
        v94 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v93 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v95 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
          LOBYTE(v96) = v94;
          LOBYTE(v97) = v93;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v97,
            v96,
            *(_QWORD *)(v95 + 69416),
            4,
            2,
            109,
            (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids);
        }
        v98 = v57 | 4;
        v100 = *(_QWORD *)(W32GetUserSessionState(v92, v64) + 18944);
        if ( *(_QWORD *)(*((_QWORD *)v121 + 2) + 472LL) == v100
          && *(_QWORD *)(W32GetUserSessionState(v100, v99) + 18944) == *((_QWORD *)v118 + 59) )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4045LL);
        }
        v106 = v31 & 0x100 | 4u;
        if ( (v31 & 2) == 0 )
          v106 = v31 & 0x100;
        v56 = xxxSetForegroundWindowWithOptions(v121, v98, v106, v116);
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
        {
          v8 = 0;
        }
        v107 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v108 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v7);
          LOBYTE(v109) = v107;
          LOBYTE(v110) = v8;
          v111 = *(_QWORD *)(v108 + 69416);
          v112 = "Success";
          if ( !v56 )
            v112 = "Failure";
          WPP_RECORDER_AND_TRACE_SF_s(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v110,
            v109,
            v111,
            4,
            2,
            110,
            (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids,
            (__int64)v112);
        }
        if ( v56 && ForegroundActivate )
          tagTHREADINFO::SetForegroundActivate(v118, ForegroundActivate);
        goto LABEL_175;
      }
    }
LABEL_124:
    v31 = a5;
    goto LABEL_125;
  }
  v33 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v33 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    PsGetThreadId(*(PETHREAD *)v118);
    v37 = W32GetUserSessionState(v36, v35);
    LOBYTE(v38) = v34;
    LOBYTE(v39) = v33;
    WPP_RECORDER_AND_TRACE_SF_dq(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL), v39, v38, *(_QWORD *)(v37 + 69416));
    v22 = (__int64)v121;
  }
  v42 = anonymous_namespace_::FAllowForegroundActivate(v22);
  if ( v42 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (v41 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (v41 & 2) == 0)
      || (v43 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v43 = 0;
    }
    v7 = &WPP_RECORDER_INITIALIZED;
    v44 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v43 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v45 = W32GetUserSessionState(v41, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v46) = v44;
      LOBYTE(v47) = v43;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v47,
        v46,
        *(_QWORD *)(v45 + 69416),
        4,
        2,
        100,
        (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids);
      v7 = &WPP_RECORDER_INITIALIZED;
    }
    if ( !*((_DWORD *)v118 + 237) )
    {
      ForegroundActivate = 32;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || (v48 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v48 = 0;
      }
      v49 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v48 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v50 = (unsigned __int8)PsGetThreadId(*(PETHREAD *)v118);
        v53 = W32GetUserSessionState(v52, v51);
        LOBYTE(v54) = v49;
        LOBYTE(v55) = v48;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v55,
          v54,
          *(_QWORD *)(v53 + 69416),
          4,
          2,
          101,
          (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids,
          v50);
      }
    }
    v56 = 0;
  }
  else
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v58 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v58 = 0;
    }
    v59 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v58 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v60 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v40);
      LOBYTE(v61) = v59;
      LOBYTE(v62) = v58;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v62,
        v61,
        *(_QWORD *)(v60 + 69416),
        4,
        2,
        102,
        (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids);
    }
    v31 = a5 | 0x80;
    if ( !a4 )
      v31 = a5 | 0x81;
    v56 = anonymous_namespace_::xxxLocalActivateWindow(v121);
  }
  v57 = 2;
  if ( v42 )
    goto LABEL_143;
LABEL_175:
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3, (__int64)v7);
  return v56;
}
