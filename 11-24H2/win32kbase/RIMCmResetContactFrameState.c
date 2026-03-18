/*
 * XREFs of RIMCmResetContactFrameState @ 0x140182558
 * Callers:
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1401807E4 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     rimProcessPointerDeviceContact @ 0x140181B78 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void *__fastcall RIMCmResetContactFrameState(_DWORD *a1)
{
  if ( (a1[8] & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 536LL);
  a1[591] &= 0xFFFFFFF8;
  return memset(a1 + 592, 0, 0xF0uLL);
}
