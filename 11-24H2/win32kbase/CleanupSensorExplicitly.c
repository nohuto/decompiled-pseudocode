/*
 * XREFs of CleanupSensorExplicitly @ 0x140212570
 * Callers:
 *     UninitializeInputSensorsOnSharedThread @ 0x1402136DC (UninitializeInputSensorsOnSharedThread.c)
 *     DeactivateKSTInputProcessingHelper @ 0x140215790 (DeactivateKSTInputProcessingHelper.c)
 * Callees:
 *     ?UninitializeSensor@CBaseInput@@QEAAXXZ @ 0x140187818 (-UninitializeSensor@CBaseInput@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CleanupSensorExplicitly(__int64 a1)
{
  __int64 v1; // rbx
  __int64 UserSessionState; // rdi
  __int64 v3; // rbx

  v1 = (int)a1;
  UserSessionState = W32GetUserSessionState(a1);
  v3 = 6 * v1;
  if ( !*(_QWORD *)(UserSessionState + 8 * v3 + 3144) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1047);
  CBaseInput::UninitializeSensor(*(CBaseInput **)(UserSessionState + 8 * v3 + 3144));
}
