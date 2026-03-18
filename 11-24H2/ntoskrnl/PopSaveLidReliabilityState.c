/*
 * XREFs of PopSaveLidReliabilityState @ 0x1407540A8
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwSetValueKey @ 0x1406A7010 (ZwSetValueKey.c)
 *     PopOpenPersistedRegistryKey @ 0x140749570 (PopOpenPersistedRegistryKey.c)
 */

NTSTATUS __fastcall PopSaveLidReliabilityState(__int64 a1)
{
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp+8h] BYREF

  KeyHandle = 0LL;
  DestinationString = 0LL;
  result = PopOpenPersistedRegistryKey(a1, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"LidReliabilityState");
    result = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &PopLidStateIsReliable, 4u);
    if ( KeyHandle )
      return ZwClose(KeyHandle);
  }
  return result;
}
