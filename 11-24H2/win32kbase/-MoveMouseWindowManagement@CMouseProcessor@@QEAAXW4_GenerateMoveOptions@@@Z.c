/*
 * XREFs of ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x140060FA8
 * Callers:
 *     GenerateMouseMove @ 0x140060F40 (GenerateMouseMove.c)
 * Callees:
 *     IsInputProcessingActivated @ 0x140048E30 (IsInputProcessingActivated.c)
 *     ?ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ @ 0x14005025C (-ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     _anonymous_namespace_::PhysicalCursorPointAsLogicalPoint @ 0x1400951D0 (_anonymous_namespace_--PhysicalCursorPointAsLogicalPoint.c)
 *     ?GetExecutionEnvironment@CBaseProcessor@@SA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x140104354 (-GetExecutionEnvironment@CBaseProcessor@@SA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 *     ?WindowManagementInitiate@Mouse@InputTraceLogging@@SAXK@Z @ 0x14010E854 (-WindowManagementInitiate@Mouse@InputTraceLogging@@SAXK@Z.c)
 *     ApiSetEditionUpdateCursorAsync @ 0x1401935C8 (ApiSetEditionUpdateCursorAsync.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CMouseProcessor::MoveMouseWindowManagement(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  char v6; // bp
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned int)CBaseProcessor::GetExecutionEnvironment() != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1581LL);
  v6 = IsInputProcessingActivated(v4);
  if ( (a2 & 1) != 0 )
  {
    v7 = anonymous_namespace_::PhysicalCursorPointAsLogicalPoint(v10);
    v8 = *(unsigned int *)(v7 + 8);
    *(_QWORD *)(a1 + 44) = *(_QWORD *)v7;
    *(_DWORD *)(a1 + 52) = v8;
    v9 = *(_QWORD *)(W32GetUserSessionState(v8) + 19928);
    *(_QWORD *)(v9 + 4952) = 0LL;
    v5 = *(_QWORD *)(W32GetUserSessionState(v9) + 19240);
    *(_QWORD *)(a1 + 3668) = v5;
    *(_QWORD *)(a1 + 3676) = 0LL;
  }
  if ( (a2 & 2) != 0 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v5) + 19232) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1614LL);
    W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(a1 + 4024), 0);
    *(_BYTE *)(a1 + 4032) = 1;
    W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(a1 + 4024), 0);
  }
  InputTraceLogging::Mouse::WindowManagementInitiate(a2);
  if ( v6 )
    ApiSetEditionUpdateCursorAsync();
  else
    CMouseProcessor::ExecuteMoveMouseWindowManagement((CMouseProcessor *)a1);
}
