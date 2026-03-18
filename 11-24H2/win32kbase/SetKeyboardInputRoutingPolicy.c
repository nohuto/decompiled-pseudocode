/*
 * XREFs of SetKeyboardInputRoutingPolicy @ 0x140213370
 * Callers:
 *     NtMITSetKeyboardInputRoutingPolicy @ 0x1400BB2A0 (NtMITSetKeyboardInputRoutingPolicy.c)
 * Callees:
 *     IsInputProcessingActivated @ 0x140048E30 (IsInputProcessingActivated.c)
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x140108298 (_anonymous_namespace_--GetKeyboardProcessor.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall SetKeyboardInputRoutingPolicy(__int64 a1)
{
  __int32 v1; // edi
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 KeyboardProcessor; // rbx
  __int64 v5; // rcx

  v1 = a1;
  if ( !IsInputThread(a1) || !IsInputProcessingActivated(v2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2210);
  KeyboardProcessor = anonymous_namespace_::GetKeyboardProcessor(v3);
  if ( !IsInputThread(v5) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 485);
  _InterlockedExchange((volatile __int32 *)(KeyboardProcessor + 16), v1);
  return 0LL;
}
