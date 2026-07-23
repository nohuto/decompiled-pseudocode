/*
 * XREFs of RtlpSetTimeZoneInformationWorker @ 0x180140318
 * Callers:
 *     RtlSetDynamicTimeZoneInformation @ 0x180140270 (RtlSetDynamicTimeZoneInformation.c)
 *     RtlSetTimeZoneInformation @ 0x180140280 (RtlSetTimeZoneInformation.c)
 * Callees:
 *     RtlpGetTimeZoneInfoHandle @ 0x180085124 (RtlpGetTimeZoneInfoHandle.c)
 *     RtlWriteRegistryValue @ 0x180086820 (RtlWriteRegistryValue.c)
 *     wcsnlen @ 0x180129500 (wcsnlen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 */

NTSTATUS __fastcall RtlpSetTimeZoneInformationWorker(wchar_t *ValueData, unsigned int a2)
{
  char *v2; // r14
  size_t v5; // rax
  int v6; // r15d
  size_t v7; // rax
  __int64 v8; // r8
  int v9; // r13d
  size_t v10; // rax
  int v11; // edi
  NTSTATUS result; // eax
  NTSTATUS v13; // edi
  int *v14; // rax
  int v15; // [rsp+70h] [rbp+40h] BYREF
  int v16; // [rsp+80h] [rbp+50h] BYREF
  PCWSTR Path; // [rsp+88h] [rbp+58h] BYREF

  Path = 0LL;
  v2 = (char *)(ValueData + 2);
  v5 = wcsnlen(ValueData + 2, 0x20uLL);
  v6 = v5;
  if ( v5 >= 0x20 )
    return -1073741811;
  v7 = wcsnlen(ValueData + 44, 0x20uLL);
  v9 = v7;
  if ( v7 >= 0x20 )
    return -1073741811;
  if ( a2 < 0x1B0 )
  {
    v11 = 0;
  }
  else
  {
    v10 = wcsnlen(ValueData + 86, 0x80uLL);
    v11 = v10;
    if ( v10 >= 0x80 )
      return -1073741811;
  }
  result = RtlpGetTimeZoneInfoHandle(1, (__int64)&Path, v8);
  if ( result >= 0 )
  {
    if ( RtlWriteRegistryValue(0x40000000u, Path, L"Bias", 4u, ValueData, 4u) < 0
      || RtlWriteRegistryValue(0x40000000u, Path, L"StandardName", 1u, v2, 2 * v6 + 2) < 0
      || RtlWriteRegistryValue(0x40000000u, Path, L"StandardBias", 4u, ValueData + 42, 4u) < 0
      || RtlWriteRegistryValue(0x40000000u, Path, L"StandardStart", 3u, ValueData + 34, 0x10u) < 0
      || RtlWriteRegistryValue(0x40000000u, Path, L"DaylightName", 1u, ValueData + 44, 2 * v9 + 2) < 0
      || RtlWriteRegistryValue(0x40000000u, Path, L"DaylightBias", 4u, ValueData + 84, 4u) < 0
      || RtlWriteRegistryValue(0x40000000u, Path, L"DaylightStart", 3u, ValueData + 76, 0x10u) < 0
      || a2 < 0x1B0 )
    {
      LOWORD(v15) = 0;
      v13 = RtlWriteRegistryValue(0x40000000u, Path, L"TimeZoneKeyName", 1u, &v15, 2u);
      if ( v13 >= 0 )
      {
        v16 = *((unsigned __int8 *)ValueData + 428);
        v14 = &v16;
        goto LABEL_21;
      }
    }
    else
    {
      v13 = RtlWriteRegistryValue(0x40000000u, Path, L"TimeZoneKeyName", 1u, ValueData + 86, 2 * v11 + 2);
      if ( v13 >= 0 )
      {
        v15 = *((unsigned __int8 *)ValueData + 428);
        v14 = &v15;
LABEL_21:
        v13 = RtlWriteRegistryValue(0x40000000u, Path, L"DynamicDaylightTimeDisabled", 4u, v14, 4u);
      }
    }
    NtClose((HANDLE)Path);
    return v13;
  }
  return result;
}
