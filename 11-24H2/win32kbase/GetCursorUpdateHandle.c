/*
 * XREFs of GetCursorUpdateHandle @ 0x140212734
 * Callers:
 *     NtMITGetCursorUpdateHandle @ 0x1400BB240 (NtMITGetCursorUpdateHandle.c)
 * Callees:
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x140210BA4 (-GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ.c)
 */

void *__fastcall GetCursorUpdateHandle(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rax
  CMouseSensor *v4; // rcx

  v1 = -1LL;
  if ( !IsInputThread(a1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1057);
  v3 = W32GetUserSessionState(v2) + 3120;
  if ( v3 )
  {
    v4 = *(CMouseSensor **)(v3 + 24);
    if ( v4 )
      return CMouseSensor::GetCursorUpdateHandle(v4);
  }
  return (void *)v1;
}
