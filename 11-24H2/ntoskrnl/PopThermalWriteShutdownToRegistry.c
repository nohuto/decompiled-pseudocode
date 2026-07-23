/*
 * XREFs of PopThermalWriteShutdownToRegistry @ 0x1404BD1AC
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140499AC0 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalProcessUsermodeEvent @ 0x140A9C104 (PopThermalProcessUsermodeEvent.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     PopOpenThermalLoggingKey @ 0x1404BD33C (PopOpenThermalLoggingKey.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwSetValueKey @ 0x1406A7FB0 (ZwSetValueKey.c)
 */

int __fastcall PopThermalWriteShutdownToRegistry(__int64 a1, void *a2)
{
  int result; // eax
  unsigned __int64 v5; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-38h] BYREF
  UNICODE_STRING v8; // [rsp+58h] [rbp-28h] BYREF
  UNICODE_STRING v9; // [rsp+68h] [rbp-18h] BYREF
  int Data; // [rsp+A0h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+28h] BYREF

  KeyHandle = 0LL;
  DestinationString = 0LL;
  ValueName = 0LL;
  v9 = 0LL;
  v8 = 0LL;
  result = PopOpenThermalLoggingKey(0LL, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"ShutdownOccurred");
    RtlInitUnicodeString(&ValueName, L"ShutdownSource");
    RtlInitUnicodeString(&v9, L"ShutdownTemperature");
    RtlInitUnicodeString(&v8, L"ShutdownTotalUpTime");
    v5 = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
    Data = 1;
    result = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
    if ( !PopThermalCriticalShutdownReported )
    {
      if ( a1 )
        ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, *(PVOID *)(a1 + 8), *(unsigned __int16 *)(a1 + 2));
      result = ZwSetValueKey(KeyHandle, &v8, 0, 0xBu, &v5, 8u);
      if ( a2 )
        result = ZwSetValueKey(KeyHandle, &v9, 0, 4u, a2, 4u);
    }
    PopThermalCriticalShutdownReported = 1;
    if ( KeyHandle )
      return ZwClose(KeyHandle);
  }
  return result;
}
