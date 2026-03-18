/*
 * XREFs of SetUMInputObservationState @ 0x140213468
 * Callers:
 *     NtMITSetInputObservationState @ 0x1401B8BB0 (NtMITSetInputObservationState.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140060F70 (_anonymous_namespace_--GetMouseProcessor.c)
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall SetUMInputObservationState(__int64 a1, int a2, __int32 a3)
{
  int v5; // ebx
  __int64 v6; // rcx
  __int64 MouseProcessor; // rbx
  __int64 v9; // rcx

  v5 = a1;
  if ( !IsInputThread(a1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2177);
  if ( v5 != 1 || a2 != 4 )
    return 3221225506LL;
  MouseProcessor = anonymous_namespace_::GetMouseProcessor(v6);
  if ( !IsInputThread(v9) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 72);
  _InterlockedExchange((volatile __int32 *)(MouseProcessor + 8), a3);
  return 0LL;
}
