/*
 * XREFs of RaidUnitSavePowerCycleCount @ 0x140038334
 * Callers:
 *     RaidDeleteUnit @ 0x1400381B0 (RaidDeleteUnit.c)
 *     RaidUnitSavePowerCycleCountWorker @ 0x1400382A0 (RaidUnitSavePowerCycleCountWorker.c)
 * Callees:
 *     PortRegistryWriteDeviceKey @ 0x1401BB6D4 (PortRegistryWriteDeviceKey.c)
 */

__int64 __fastcall RaidUnitSavePowerCycleCount(__int64 a1)
{
  struct _UNICODE_STRING v3; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  DestinationString = 0LL;
  v3 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Storport");
  RtlInitUnicodeString(&v3, L"PowerCycleCount");
  return PortRegistryWriteDeviceKey(
           *(_QWORD *)(a1 + 8),
           (unsigned int)&DestinationString,
           (unsigned int)&v3,
           4,
           a1 + 3352,
           4);
}
