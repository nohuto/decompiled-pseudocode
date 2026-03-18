/*
 * XREFs of RIMCmIsContactSuppressed @ 0x1400D975C
 * Callers:
 *     rimProcessPointerDeviceButtonContact @ 0x1400571D4 (rimProcessPointerDeviceButtonContact.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x140057F58 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     RIMCmIsButtonContactActiveAndNotSuppressed @ 0x1400D971C (RIMCmIsButtonContactActiveAndNotSuppressed.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1400EFB70 (RIMCmRemoveContactSuppressionReasons.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1400F2C6C (RIMCmAddContactSuppressionReasons.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x140180B5C (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimApplyPointerDevicePolicies @ 0x140180E58 (rimApplyPointerDevicePolicies.c)
 *     rimFinalizePointerFlags @ 0x1401815FC (rimFinalizePointerFlags.c)
 *     rimProcessPointerDeviceContact @ 0x140181B78 (rimProcessPointerDeviceContact.c)
 *     RIMCmDeactivateContact @ 0x1401822F4 (RIMCmDeactivateContact.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1401D96B0 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x1401F1BA0 (RIMCmIsContactDeliveringAnyData.c)
 *     RIMCmMarkSuppressedContactForDelivery @ 0x1401F1C68 (RIMCmMarkSuppressedContactForDelivery.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMCmIsContactSuppressed(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 585LL);
  LOBYTE(v1) = *(_DWORD *)(a1 + 8) != 0;
  return v1;
}
