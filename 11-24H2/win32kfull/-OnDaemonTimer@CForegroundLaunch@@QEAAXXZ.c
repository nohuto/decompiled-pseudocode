/*
 * XREFs of ?OnDaemonTimer@CForegroundLaunch@@QEAAXXZ @ 0x1401BCC88
 * Callers:
 *     ?OnDaemonTimer@ForegroundLaunch@@YAXXZ @ 0x1401BCC60 (-OnDaemonTimer@ForegroundLaunch@@YAXXZ.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BB10 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BCE8 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Ddd @ 0x140110890 (WPP_RECORDER_AND_TRACE_SF_Ddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x14021EC80 (-GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CForegroundLaunch::OnDaemonTimer(CForegroundLaunch *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v4; // bp
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 UserSessionState; // rax
  __int64 v8; // rdx
  CForegroundLaunch *v9; // rbx
  CForegroundLaunch *v10; // rdi
  __int64 v11; // r13
  __int64 *v12; // r14
  CForegroundLaunch *v13; // rsi
  __int64 v14; // rdx
  bool v15; // r12
  int v16; // ebx
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  CForegroundLaunch *v20; // rdx
  CForegroundLaunch **v21; // rax
  char *v22; // rdi
  __int64 v23; // r14
  char v24; // si
  bool v25; // bp
  int v26; // ebx
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  struct W32_PUSH_LOCK *v30; // r15
  char *v31; // r14
  __int64 v32; // rcx
  struct tagPROCESSINFO *ProcessInfo; // r13
  char v34; // bp
  bool v35; // r12
  int v36; // ebx
  int v37; // edi
  int v38; // esi
  __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  char v42; // di
  bool v43; // si
  int v44; // ebx
  __int64 v45; // rax
  int v46; // r8d
  int v47; // edx
  __int64 v49; // [rsp+B8h] [rbp+10h]
  __int64 v50; // [rsp+C0h] [rbp+18h]

  W32AcquirePushLockExclusiveEx(this, 0);
  v4 = 0;
  if ( *((_BYTE *)this + 440) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 680LL);
  v5 = MEMORY[0xFFFFF78000000014];
  v6 = MEMORY[0xFFFFF78000000014] - 50000000LL;
  v50 = MEMORY[0xFFFFF78000000014] - 50000000LL;
  UserSessionState = W32GetUserSessionState(v3, v2);
  v9 = (CForegroundLaunch *)((char *)this + 424);
  v10 = (CForegroundLaunch *)*((_QWORD *)this + 53);
  v11 = v5 - (unsigned int)(*(_DWORD *)(UserSessionState + 69368) + 300000000);
  if ( v10 != (CForegroundLaunch *)((char *)this + 424) )
  {
    do
    {
      v12 = (__int64 *)((char *)v10 - 16);
      v13 = v10;
      if ( v11 <= *((_QWORD *)v10 - 1) )
        break;
      v14 = *v12;
      v10 = *(CForegroundLaunch **)v10;
      v49 = *v12;
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u )
      {
        v4 = 1;
      }
      v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v16 = *(_DWORD *)(v14 + 56);
        v17 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14);
        LOBYTE(v18) = v15;
        LOBYTE(v19) = v4;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v19,
          v18,
          *(_QWORD *)(v17 + 69416),
          4,
          2,
          39,
          (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
          v16);
        v14 = v49;
        v9 = (CForegroundLaunch *)((char *)this + 424);
      }
      *(_DWORD *)(v14 + 12) &= 0xFFFFFEBF;
      v20 = *(CForegroundLaunch **)v13;
      if ( *(CForegroundLaunch **)(*(_QWORD *)v13 + 8LL) == v13 )
      {
        v21 = (CForegroundLaunch **)*((_QWORD *)v13 + 1);
        if ( *v21 == v13 )
          continue;
      }
      __fastfail(3u);
      *v21 = v20;
      *((_QWORD *)v20 + 1) = v21;
      Win32FreePool(v12);
      v4 = 0;
    }
    while ( v10 != v9 );
    v6 = v50;
  }
  v22 = (char *)this + 8;
  v23 = 5LL;
  do
  {
    if ( *(_QWORD *)v22 && v6 > *((_QWORD *)v22 + 1) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || (v24 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v24 = 0;
      }
      v25 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v24 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v26 = *(_DWORD *)v22;
        v27 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8);
        LOBYTE(v28) = v25;
        LOBYTE(v29) = v24;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v29,
          v28,
          *(_QWORD *)(v27 + 69416),
          4,
          2,
          40,
          (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
          v26);
      }
      *(_OWORD *)v22 = 0LL;
    }
    v22 += 16;
    --v23;
  }
  while ( v23 );
  v30 = this;
  if ( (char *)this + 96 != (char *)this + 416 )
  {
    v31 = (char *)this + 112;
    do
    {
      if ( *(_DWORD *)v31 == 4 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 739LL);
      ProcessInfo = CProcessAsPid::GetProcessInfo((CProcessAsPid *)(v31 - 16));
      if ( ProcessInfo && v6 > *((_QWORD *)v31 + 1) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (v32 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (v32 & 2) == 0)
          || (v34 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v34 = 0;
        }
        v35 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v34 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v36 = *((_DWORD *)v31 + 1);
          v37 = *(_DWORD *)v31;
          v38 = *((_DWORD *)ProcessInfo + 14);
          v39 = W32GetUserSessionState(v32, &WPP_RECORDER_INITIALIZED);
          LOBYTE(v40) = v35;
          LOBYTE(v41) = v34;
          WPP_RECORDER_AND_TRACE_SF_Ddd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v41,
            v40,
            *(_QWORD *)(v39 + 69416),
            4,
            2,
            41,
            (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
            v38,
            v37,
            v36);
        }
        if ( *((_DWORD *)v31 + 1) == 1 )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
            || (v42 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
          {
            v42 = 0;
          }
          v43 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v42 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v44 = *((_DWORD *)ProcessInfo + 14);
            v45 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
            LOBYTE(v46) = v43;
            LOBYTE(v47) = v42;
            WPP_RECORDER_AND_TRACE_SF_d(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v47,
              v46,
              *(_QWORD *)(v45 + 69416),
              4,
              2,
              42,
              (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
              v44);
          }
          ForegroundBoost::SetForegroundPriority(ProcessInfo, 0LL, 1LL);
        }
        *(_QWORD *)v31 = 0LL;
        *((_QWORD *)v31 - 2) = 0LL;
        *((_QWORD *)v31 - 1) = 0LL;
        *((_QWORD *)v31 + 1) = 0LL;
      }
      v6 = v50;
      v31 += 32;
    }
    while ( v31 - 16 != (char *)this + 416 );
    v30 = this;
  }
  W32ReleasePushLockExclusiveEx(v30, 0LL);
}
