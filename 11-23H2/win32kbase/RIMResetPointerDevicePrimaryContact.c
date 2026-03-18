/*
 * XREFs of RIMResetPointerDevicePrimaryContact @ 0x1C01A7354
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C017C920 (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01A7560 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMResetPointerDevicePrimaryContact(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 1016);
  if ( result )
  {
    if ( (*(_DWORD *)(result + 32) & 2) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1534);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1016) + 32LL) & 8) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1535);
    *(_DWORD *)(*(_QWORD *)(a1 + 1016) + 2444LL) &= ~0x4000000u;
    result = *(_QWORD *)(a1 + 1016);
    *(_DWORD *)(result + 32) &= ~8u;
    *(_QWORD *)(a1 + 1016) = 0LL;
  }
  return result;
}
