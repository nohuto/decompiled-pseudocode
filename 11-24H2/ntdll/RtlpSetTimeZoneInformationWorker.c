/*
 * XREFs of RtlpSetTimeZoneInformationWorker @ 0x18013EBE8
 * Callers:
 *     RtlSetDynamicTimeZoneInformation @ 0x18013EB40 (RtlSetDynamicTimeZoneInformation.c)
 *     RtlSetTimeZoneInformation @ 0x18013EB50 (RtlSetTimeZoneInformation.c)
 * Callees:
 *     RtlpGetTimeZoneInfoHandle @ 0x1800B5AFC (RtlpGetTimeZoneInfoHandle.c)
 *     RtlWriteRegistryValue @ 0x1800B71F0 (RtlWriteRegistryValue.c)
 *     wcsnlen @ 0x180127A20 (wcsnlen.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 */

__int64 __fastcall RtlpSetTimeZoneInformationWorker(__int64 a1, unsigned int a2)
{
  __int64 v2; // r14
  size_t v5; // rax
  int v6; // r15d
  size_t v7; // rax
  __int64 v8; // r8
  int v9; // r13d
  size_t v10; // rax
  int v11; // edi
  __int64 result; // rax
  int v13; // edi
  int *v14; // rax
  int v15; // [rsp+70h] [rbp+40h] BYREF
  int v16; // [rsp+80h] [rbp+50h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+58h] BYREF

  Handle = 0LL;
  v2 = a1 + 4;
  v5 = wcsnlen((const wchar_t *)(a1 + 4), 0x20uLL);
  v6 = v5;
  if ( v5 >= 0x20 )
    return 3221225485LL;
  v7 = wcsnlen((const wchar_t *)(a1 + 88), 0x20uLL);
  v9 = v7;
  if ( v7 >= 0x20 )
    return 3221225485LL;
  if ( a2 < 0x1B0 )
  {
    v11 = 0;
  }
  else
  {
    v10 = wcsnlen((const wchar_t *)(a1 + 172), 0x80uLL);
    v11 = v10;
    if ( v10 >= 0x80 )
      return 3221225485LL;
  }
  result = RtlpGetTimeZoneInfoHandle(1, (__int64)&Handle, v8);
  if ( (int)result >= 0 )
  {
    if ( (int)RtlWriteRegistryValue(0x40000000, (const wchar_t *)Handle, L"Bias", 4, a1, 4) < 0
      || (int)RtlWriteRegistryValue(0x40000000, (const wchar_t *)Handle, L"StandardName", 1, v2, 2 * v6 + 2) < 0
      || (int)RtlWriteRegistryValue(0x40000000, (const wchar_t *)Handle, L"StandardBias", 4, a1 + 84, 4) < 0
      || (int)RtlWriteRegistryValue(0x40000000, (const wchar_t *)Handle, L"StandardStart", 3, a1 + 68, 16) < 0
      || (int)RtlWriteRegistryValue(0x40000000, (const wchar_t *)Handle, L"DaylightName", 1, a1 + 88, 2 * v9 + 2) < 0
      || (int)RtlWriteRegistryValue(0x40000000, (const wchar_t *)Handle, L"DaylightBias", 4, a1 + 168, 4) < 0
      || (int)RtlWriteRegistryValue(0x40000000, (const wchar_t *)Handle, L"DaylightStart", 3, a1 + 152, 16) < 0
      || a2 < 0x1B0 )
    {
      LOWORD(v15) = 0;
      v13 = RtlWriteRegistryValue(0x40000000, (const wchar_t *)Handle, L"TimeZoneKeyName", 1, (__int64)&v15, 2);
      if ( v13 >= 0 )
      {
        v16 = *(unsigned __int8 *)(a1 + 428);
        v14 = &v16;
        goto LABEL_21;
      }
    }
    else
    {
      v13 = RtlWriteRegistryValue(0x40000000, (const wchar_t *)Handle, L"TimeZoneKeyName", 1, a1 + 172, 2 * v11 + 2);
      if ( v13 >= 0 )
      {
        v15 = *(unsigned __int8 *)(a1 + 428);
        v14 = &v15;
LABEL_21:
        v13 = RtlWriteRegistryValue(
                0x40000000,
                (const wchar_t *)Handle,
                L"DynamicDaylightTimeDisabled",
                4,
                (__int64)v14,
                4);
      }
    }
    NtClose(Handle);
    return (unsigned int)v13;
  }
  return result;
}
