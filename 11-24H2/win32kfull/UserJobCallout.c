/*
 * XREFs of UserJobCallout @ 0x1400A4480
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400829D0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400A4A5C (--1ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z @ 0x1400A4A80 (-JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400A4BAC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ?CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z @ 0x1400A4CD0 (-CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1400A5C58 (-UpdateJob@@YAXPEAUtagW32JOB@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1401532E0 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     WPP_RECORDER_AND_TRACE_SF_dq @ 0x1401C696C (WPP_RECORDER_AND_TRACE_SF_dq.c)
 *     ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x14024F108 (-JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?W32GetUserJobsGlobals@@YAAEAU_tagJOBSGLOBALS@@XZ @ 0x140291B20 (-W32GetUserJobsGlobals@@YAAEAU_tagJOBSGLOBALS@@XZ.c)
 */

__int64 __fastcall UserJobCallout(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r15d
  unsigned int v4; // ebx
  struct _EJOB *v5; // r12
  struct tagPROCESSINFO *v6; // r14
  __int64 v7; // rbp
  char v8; // si
  __int64 v9; // rdx
  struct tagW32JOB *i; // rdi
  bool v11; // bp
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  struct tagPROCESSINFO *ProcessWin32Process; // rax
  bool v17; // r15
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  bool v21; // di
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  bool v25; // di
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  bool v29; // di
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  _BYTE v33[16]; // [rsp+60h] [rbp-38h] BYREF
  bool v34; // [rsp+A0h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a1 + 24);
  v4 = 0;
  v5 = *(struct _EJOB **)(a1 + 16);
  v6 = 0LL;
  v7 = *(_QWORD *)(a1 + 32);
  v8 = 1;
  if ( v3 != 1
    || (ProcessWin32Process = (struct tagPROCESSINFO *)PsGetProcessWin32Process(*(_QWORD *)(a1 + 32)),
        (v6 = ProcessWin32Process) != 0LL)
    && *(_QWORD *)ProcessWin32Process )
  {
    v34 = IS_USERCRIT_OWNED_EXCLUSIVE(a1, a2, a3);
    if ( !v34 )
      EnterCrit(1LL, 0LL);
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v33);
    for ( i = *(struct tagW32JOB **)W32GetUserJobsGlobals();
          i && *((struct _EJOB **)i + 1) != v5;
          i = *(struct tagW32JOB **)i )
    {
      ;
    }
    if ( v3 )
    {
      if ( v3 != 1 )
      {
        if ( v3 == 2 )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
            || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
          {
            v8 = 0;
          }
          v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v9);
            LOBYTE(v13) = v11;
            LOBYTE(v14) = v8;
            WPP_RECORDER_AND_TRACE_SF_qq(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v14,
              v13,
              *(_QWORD *)(UserSessionState + 69416),
              4,
              8,
              13,
              (__int64)&WPP_64932e88034c3eb3b6e0199d1cf0a73c_Traceguids,
              (char)v5,
              (char)i);
          }
          if ( i )
            JobCalloutTerminate(i);
        }
        else
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
            || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
          {
            v8 = 0;
          }
          v21 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v22 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v9);
            LOBYTE(v23) = v21;
            LOBYTE(v24) = v8;
            WPP_RECORDER_AND_TRACE_SF_dq(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v24,
              v23,
              *(_QWORD *)(v22 + 69416));
          }
          v4 = -1073741822;
        }
        goto LABEL_19;
      }
      if ( i )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
        {
          v8 = 0;
        }
        v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v18 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v9);
          LOBYTE(v19) = v17;
          LOBYTE(v20) = v8;
          WPP_RECORDER_AND_TRACE_SF_qqq(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v20,
            v19,
            *(_QWORD *)(v18 + 69416),
            4,
            8,
            12,
            (__int64)&WPP_64932e88034c3eb3b6e0199d1cf0a73c_Traceguids,
            (char)v5,
            (char)i,
            v7);
        }
        JobCalloutAddProcess(i, v6);
        goto LABEL_19;
      }
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
      {
        v8 = 0;
      }
      v25 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v26 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v9);
        LOBYTE(v27) = v25;
        LOBYTE(v28) = v8;
        WPP_RECORDER_AND_TRACE_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v28,
          v27,
          *(_QWORD *)(v26 + 69416),
          4,
          8,
          11,
          (__int64)&WPP_64932e88034c3eb3b6e0199d1cf0a73c_Traceguids,
          (char)v5);
      }
      goto LABEL_22;
    }
    if ( i )
    {
      if ( (_DWORD)v7 == *((_DWORD *)i + 8) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
        {
          v8 = 0;
        }
        v29 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v30 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v9);
          LOBYTE(v31) = v29;
          LOBYTE(v32) = v8;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v32,
            v31,
            *(_QWORD *)(v30 + 69416),
            4,
            8,
            10,
            (__int64)&WPP_64932e88034c3eb3b6e0199d1cf0a73c_Traceguids);
        }
        goto LABEL_19;
      }
    }
    else
    {
      i = CreateW32Job(v5);
      if ( !i )
      {
LABEL_22:
        v4 = -1073741823;
LABEL_19:
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v33);
        ReEnterLeaveCrit::~ReEnterLeaveCrit((ReEnterLeaveCrit *)&v34);
        return v4;
      }
    }
    *((_DWORD *)i + 8) = v7;
    UpdateJob(i);
    goto LABEL_19;
  }
  return 0LL;
}
