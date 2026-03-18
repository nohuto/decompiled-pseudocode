/*
 * XREFs of BapdRegisterEtwProvider @ 0x1404A4CF8
 * Callers:
 *     BapdWriteEtwEvents @ 0x1404A4884 (BapdWriteEtwEvents.c)
 *     BapdRecordFirmwareBootStats @ 0x140B60CB0 (BapdRecordFirmwareBootStats.c)
 *     BapdpRecordIumStatus @ 0x140C3F920 (BapdpRecordIumStatus.c)
 * Callees:
 *     EtwRegister @ 0x140A574E0 (EtwRegister.c)
 *     EtwSetInformation @ 0x140AA4AB0 (EtwSetInformation.c)
 */

NTSTATUS __fastcall BapdRegisterEtwProvider(const GUID *a1, char a2, ULONGLONG *a3)
{
  NTSTATUS result; // eax

  result = EtwRegister(a1, 0LL, 0LL, a3);
  if ( result >= 0 )
  {
    if ( a2 )
      EtwSetInformation(
        *a3,
        EventProviderSetTraits,
        &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
        (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
    return 0;
  }
  else
  {
    *a3 = 0LL;
  }
  return result;
}
