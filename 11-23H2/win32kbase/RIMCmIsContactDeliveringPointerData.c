/*
 * XREFs of RIMCmIsContactDeliveringPointerData @ 0x1C01B0924
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C00E2CF0 (rimApplyPointerDevicePolicies.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C017CD64 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01A7560 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C01A78EC (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C01A7D00 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimFinalizePointerFlags @ 0x1C01AA358 (rimFinalizePointerFlags.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C01AB8BC (rimProcessPointerDeviceButtonContact.c)
 *     rimProcessPointerDeviceContact @ 0x1C01ABB74 (rimProcessPointerDeviceContact.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x1C01B08A8 (RIMCmIsContactDeliveringAnyData.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMCmIsContactDeliveringPointerData(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 544);
  return (*(_DWORD *)(a1 + 2684) >> 1) & 1;
}
