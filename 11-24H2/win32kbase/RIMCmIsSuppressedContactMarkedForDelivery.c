/*
 * XREFs of RIMCmIsSuppressedContactMarkedForDelivery @ 0x1401F1C1C
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x140057F58 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimFinalizePointerFlags @ 0x1401815FC (rimFinalizePointerFlags.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMCmIsSuppressedContactMarkedForDelivery(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 597);
  return (*(_DWORD *)(a1 + 2444) >> 25) & 1;
}
