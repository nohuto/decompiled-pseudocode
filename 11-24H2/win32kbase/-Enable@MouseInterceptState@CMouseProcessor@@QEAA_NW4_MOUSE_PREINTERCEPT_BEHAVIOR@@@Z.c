/*
 * XREFs of ?Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x14021C968
 * Callers:
 *     NtMITEnableMouseIntercept @ 0x1401B81D0 (NtMITEnableMouseIntercept.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetEdtionGetInputDesktopId @ 0x140222234 (ApiSetEdtionGetInputDesktopId.c)
 */

char __fastcall CMouseProcessor::MouseInterceptState::Enable(__int64 a1, int a2)
{
  __int64 v4; // rcx
  char v5; // bl

  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1, 0);
  if ( !IsInputThread(v4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8350);
  if ( !*(_BYTE *)(a1 + 8) )
  {
    if ( *(_DWORD *)(a1 + 24) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8354);
    *(_BYTE *)(a1 + 8) = 1;
    *(_DWORD *)(a1 + 12) = a2;
    *(_QWORD *)(a1 + 16) = ApiSetEdtionGetInputDesktopId();
    *(_DWORD *)(a1 + 24) = (unsigned int)PsGetCurrentThreadId();
  }
  v5 = *(_BYTE *)(a1 + 8);
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1, 0LL);
  return v5;
}
