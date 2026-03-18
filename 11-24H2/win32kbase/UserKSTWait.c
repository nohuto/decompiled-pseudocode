/*
 * XREFs of UserKSTWait @ 0x1400BB4AC
 * Callers:
 *     NtKSTWait @ 0x1400BB2E0 (NtKSTWait.c)
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x1400607D0 (-Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140060B94 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x140062674 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?Wait@IOCPDispatcher@@QEAAJPEAT_LARGE_INTEGER@@EPEAU_FILE_IO_COMPLETION_INFORMATION@@@Z @ 0x1400D8340 (-Wait@IOCPDispatcher@@QEAAJPEAT_LARGE_INTEGER@@EPEAU_FILE_IO_COMPLETION_INFORMATION@@@Z.c)
 *     ?WakeKST@KST@InputTraceLogging@@SAXJW4WaitCompletionPacketPurpose@@@Z @ 0x1400E74E0 (-WakeKST@KST@InputTraceLogging@@SAXJW4WaitCompletionPacketPurpose@@@Z.c)
 *     ?UserKSTWait@KST@InputTraceLogging@@SAXXZ @ 0x14014E15C (-UserKSTWait@KST@InputTraceLogging@@SAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 UserKSTWait()
{
  char v0; // bl
  char v1; // dl
  char v2; // r8
  __int64 v3; // rcx
  unsigned int v4; // edi
  char v5; // bp
  __int64 UserSessionState; // rax
  unsigned int v7; // eax
  int ApcContext; // r14d
  int v9; // esi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rcx
  char v17; // di
  bool v18; // bp
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  ULONG v22; // eax
  char v23; // dl
  _FILE_IO_COMPLETION_INFORMATION v25; // [rsp+50h] [rbp-58h] BYREF
  __int64 *v26; // [rsp+B8h] [rbp+10h] BYREF

  v0 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v1 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v1 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v2 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v2 = 0;
  }
  if ( v1 || v2 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v1,
      v2,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      15,
      (__int64)&WPP_f0b946dda9d5374ecc6b238217c99e48_Traceguids);
  InputTraceLogging::KST::UserKSTWait();
  v4 = 0;
  memset(&v25, 0, sizeof(v25));
  v5 = 1;
  while ( 1 )
  {
    UserSessionState = W32GetUserSessionState(v3);
    v7 = IOCPDispatcher::Wait(*(IOCPDispatcher **)(UserSessionState + 19280), 0LL, 1u, &v25);
    ApcContext = (int)v25.ApcContext;
    v9 = v7;
    InputTraceLogging::KST::WakeKST(v7, LODWORD(v25.ApcContext));
    if ( v9 < 0 )
      break;
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v26, "HandleKSTThreadSignal", 0LL);
    if ( v9 == 257 )
      goto LABEL_26;
    if ( SLODWORD(v25.ApcContext) >= 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 188LL);
    v11 = W32GetUserSessionState(v10);
    IOCPDispatcher::Dispatch(*(_QWORD *)(v11 + 19280), ApcContext, (unsigned int)v25.KeyContext);
    if ( ApcContext != -2147483647 )
      goto LABEL_26;
    v13 = *(_QWORD *)(W32GetUserSessionState(v12) + 19280);
    if ( LODWORD(v25.KeyContext) < *(_DWORD *)(v13 + 2896)
      && (v15 = 32LL * LODWORD(v25.KeyContext), *(_QWORD *)(v15 + v13 + 2584)) )
    {
      v14 = *(_QWORD *)(v15 + v13 + 2576);
    }
    else
    {
      v14 = 0LL;
    }
    v16 = *(_QWORD *)(W32GetUserSessionState(v13) + 3112);
    if ( v14 == *(_QWORD *)(v16 + 48) )
    {
      v4 = 0;
LABEL_25:
      v5 = 0;
      goto LABEL_26;
    }
    if ( v14 == *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v16) + 3112) + 56LL) )
    {
      v4 = 2;
      goto LABEL_25;
    }
LABEL_26:
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v26);
    if ( !v5 )
      goto LABEL_39;
  }
  if ( v9 == -1073741749 )
  {
    v4 = 0;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v17 = 0;
    }
    v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v20) = v18;
      LOBYTE(v21) = v17;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v21,
        v20,
        *(_QWORD *)(v19 + 69400),
        2,
        2,
        16,
        (__int64)&WPP_f0b946dda9d5374ecc6b238217c99e48_Traceguids,
        v9);
    }
    v4 = 1;
  }
  v22 = RtlNtStatusToDosError(v9);
  UserSetLastError(v22);
LABEL_39:
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v23 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v0 = 0;
  if ( v23 || v0 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v23,
      v0,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      17,
      (__int64)&WPP_f0b946dda9d5374ecc6b238217c99e48_Traceguids);
  return v4;
}
