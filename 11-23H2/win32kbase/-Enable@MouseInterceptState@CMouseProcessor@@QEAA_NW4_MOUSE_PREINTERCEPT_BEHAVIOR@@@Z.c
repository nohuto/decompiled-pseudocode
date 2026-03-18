/*
 * XREFs of ?Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x1C01F69FC
 * Callers:
 *     NtMITEnableMouseIntercept @ 0x1C01414B0 (NtMITEnableMouseIntercept.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0057EC8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetEdtionGetInputDesktopId @ 0x1C0207B64 (ApiSetEdtionGetInputDesktopId.c)
 */

char __fastcall CMouseProcessor::MouseInterceptState::Enable(__int64 a1, int a2)
{
  char v4; // bl

  RIMLockExclusive(a1);
  if ( !CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7898);
  if ( !*(_BYTE *)(a1 + 16) )
  {
    if ( *(_DWORD *)(a1 + 32) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7902);
    *(_BYTE *)(a1 + 16) = 1;
    *(_DWORD *)(a1 + 20) = a2;
    *(_QWORD *)(a1 + 24) = ApiSetEdtionGetInputDesktopId();
    *(_DWORD *)(a1 + 32) = (unsigned int)PsGetCurrentThreadId();
  }
  v4 = *(_BYTE *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
