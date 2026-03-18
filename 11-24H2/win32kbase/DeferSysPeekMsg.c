/*
 * XREFs of DeferSysPeekMsg @ 0x1400C11E0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1400C1418 (-UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x1400C14F8 (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 *     ?_BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@AEAAXI@Z @ 0x1400C1664 (-_BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@AEAAXI@Z.c)
 */

void __fastcall DeferSysPeekMsg(__int64 a1, int a2)
{
  char v2; // r12
  __int64 v4; // r14
  unsigned int v5; // eax
  bool v6; // bl
  CTouchProcessor *v7; // rcx
  bool v8; // r13
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  unsigned int ThreadId; // ebx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  int v17; // ecx
  bool v18; // [rsp+A8h] [rbp+10h]

  v2 = 1;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 472) + 88LL);
  v5 = *(_DWORD *)(v4 + 24) - 256;
  v6 = v5 <= 9;
  v18 = v5 <= 9;
  switch ( a2 )
  {
    case 1:
LABEL_5:
      *(_QWORD *)(a1 + 1360) |= 0x20000000uLL;
      if ( a2 == 1 )
      {
        *(_DWORD *)(v4 + 100) |= 0x2000u;
        goto LABEL_7;
      }
LABEL_26:
      *(_DWORD *)(v4 + 100) |= 0x10000u;
      break;
    case 3:
      if ( v5 > 9 )
        goto LABEL_26;
      goto LABEL_5;
    case 2:
      *(_DWORD *)(v4 + 100) |= 0x4000u;
LABEL_7:
      *(_QWORD *)(*(_QWORD *)(a1 + 472) + 56LL) = v4;
      break;
  }
  InputTraceLogging::Delivery::UpdateISODState((const struct tagQMSG *)v4);
  *(_QWORD *)(v4 + 104) = a1;
  --*(_DWORD *)(*(_QWORD *)(a1 + 472) + 40LL);
  v7 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v2 = 0;
  }
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v2;
    WPP_RECORDER_AND_TRACE_SF_qiqdd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 69400));
    v6 = v18;
  }
  if ( (*(_DWORD *)(a1 + 1360) & 0x1000000) == 0 && v6 )
  {
    if ( !*(_QWORD *)(v4 + 144) )
    {
      *(LARGE_INTEGER *)(v4 + 144) = KeQueryPerformanceCounter(0LL);
      ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)a1);
      v14 = W32GetUserSessionState(v13);
      KeyboardInputTelemetry::_BeginKeyboardEventProcessingByInputService(
        (KeyboardInputTelemetry *)(v14 + 14512),
        ThreadId);
    }
    if ( (*(_DWORD *)(v4 + 100) & 0x10000) == 0 )
    {
      v15 = *(_QWORD *)(v4 + 144);
      v16 = W32GetUserSessionState(v7);
      if ( *(_DWORD *)(v16 + 14700) )
      {
        v17 = *(_DWORD *)(v16 + 14520);
        if ( !v17 )
          *(_QWORD *)(v16 + 14512) = v15;
        *(_DWORD *)(v16 + 14520) = v17 + 1;
      }
    }
  }
}
