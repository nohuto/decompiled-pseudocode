/*
 * XREFs of HvlpEtwRegister @ 0x14058B1A4
 * Callers:
 *     HvlPhase2Initialize @ 0x140582B80 (HvlPhase2Initialize.c)
 * Callees:
 *     EtwRegister @ 0x140A574E0 (EtwRegister.c)
 *     EtwSetInformation @ 0x140AA4AB0 (EtwSetInformation.c)
 */

NTSTATUS HvlpEtwRegister()
{
  EtwRegister(&HvlGlobalSystemEventsGuid, 0LL, 0LL, &HvlGlobalSystemEventsHandle);
  return EtwSetInformation(
           HvlGlobalSystemEventsHandle,
           EventProviderSetTraits,
           &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
           (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
}
