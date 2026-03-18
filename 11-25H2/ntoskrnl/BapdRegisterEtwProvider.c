/*
 * XREFs of BapdRegisterEtwProvider @ 0x1404A47C8
 * Callers:
 *     BapdWriteEtwEvents @ 0x1404A4354 (BapdWriteEtwEvents.c)
 *     BapdRecordFirmwareBootStats @ 0x140B50B80 (BapdRecordFirmwareBootStats.c)
 *     BapdpRecordIumStatus @ 0x140C2E644 (BapdpRecordIumStatus.c)
 * Callees:
 *     EtwRegister @ 0x1408B7480 (EtwRegister.c)
 *     EtwSetInformation @ 0x140A9F290 (EtwSetInformation.c)
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
