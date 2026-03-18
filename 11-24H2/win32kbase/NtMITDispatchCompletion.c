/*
 * XREFs of NtMITDispatchCompletion @ 0x140060480
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x140060938 (-HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
 *     CreateKernelIocpWcp @ 0x140060AF0 (CreateKernelIocpWcp.c)
 *     AssociateKernelIocpWcp @ 0x140060B50 (AssociateKernelIocpWcp.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140060B94 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1400626B8 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtMITDispatchCompletion(__int64 a1, unsigned int a2)
{
  int v3; // r14d
  __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned int CurrentThreadId; // eax
  unsigned int v7; // esi
  int v8; // edx
  int v9; // r8d
  CTouchProcessor *v10; // rcx
  char v11; // si
  __int64 UserSessionState; // rax
  int v13; // edx
  int v14; // r8d
  __int64 v15; // rbx
  __int64 v17; // rdi
  __int64 KernelIocpWcp; // rax
  __int64 v19; // r14
  void (__fastcall *v20)(_QWORD); // rax
  __int64 v21; // rbx
  __int64 v22; // [rsp+90h] [rbp+18h] BYREF

  v3 = a1;
  v4 = *(_QWORD *)(W32GetUserSessionState(a1) + 18808);
  v5 = v4 + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4 + 8, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  LODWORD(v4) = *(_DWORD *)(v4 + 40);
  v7 = CurrentThreadId;
  ExReleasePushLockSharedEx(v5, 0LL);
  KeLeaveCriticalRegion();
  if ( v7 == (_DWORD)v4 )
  {
    v10 = WPP_GLOBAL_Control;
    v11 = 1;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (LOBYTE(v8) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v8) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v9) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      LOBYTE(v9) = 0;
    }
    if ( (_BYTE)v8 || (_BYTE)v9 )
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v8,
        v9,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        2,
        13,
        (__int64)&WPP_4c37d3b938813951dcfe59f4edab31d1_Traceguids);
    UserSessionState = W32GetUserSessionState(v10);
    v15 = *(_QWORD *)(UserSessionState + 19272);
    if ( v3 == 0x80000000 )
    {
      IOCPDispatcher::HandleSensorDispatcherSignal(*(IOCPDispatcher **)(UserSessionState + 19272), a2);
    }
    else if ( v3 == -2147483647 )
    {
      if ( a2 < *(_DWORD *)(v15 + 2896) )
      {
        v17 = 32LL * a2;
        if ( *(_QWORD *)(v17 + v15 + 2584) )
        {
          InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
            (InputTraceLogging::ThreadLockedPerfRegion *)&v22,
            "HandleInputThreadSignal",
            0LL);
          KernelIocpWcp = *(_QWORD *)(v17 + v15 + 2584);
          v19 = *(_QWORD *)(v17 + v15 + 2576);
          if ( !KernelIocpWcp && (KernelIocpWcp = CreateKernelIocpWcp()) == 0
            || (int)AssociateKernelIocpWcp(KernelIocpWcp, *(_QWORD *)(v15 + 2904), v19, a2, -2147483647LL, 0, 0LL) < 0 )
          {
            KeBugCheck(0x164u);
          }
          v20 = *(void (__fastcall **)(_QWORD))(v17 + v15 + 2592);
          if ( v20 )
            v20(*(_QWORD *)(v17 + v15 + 2600));
          v21 = v22;
          if ( v22 )
          {
            *((_QWORD *)PtiCurrent() + 48) = *(_QWORD *)(v21 + 48);
            InputTraceLogging::ThreadLockedPerfRegion::Cleanup((InputTraceLogging::ThreadLockedPerfRegion *)&v22);
          }
        }
      }
    }
    else
    {
      DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 400LL, v3, a2, 0LL, 0LL, 0LL, 0LL, 0);
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (LOBYTE(v13) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v11 = 0;
    if ( (_BYTE)v13 || v11 )
    {
      LOBYTE(v14) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v14,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        2,
        14,
        (__int64)&WPP_4c37d3b938813951dcfe59f4edab31d1_Traceguids);
    }
  }
  else
  {
    UserSetLastError(5);
  }
  return 0LL;
}
