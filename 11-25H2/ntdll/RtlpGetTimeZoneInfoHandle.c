/*
 * XREFs of RtlpGetTimeZoneInfoHandle @ 0x180085124
 * Callers:
 *     RtlpQueryTimeZoneInformationWorker @ 0x180084E9C (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x180140318 (RtlpSetTimeZoneInformationWorker.c)
 * Callees:
 *     RtlGetPersistedStateLocation @ 0x180080A00 (RtlGetPersistedStateLocation.c)
 *     RtlpGetRegistryHandle @ 0x180085E98 (RtlpGetRegistryHandle.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlpGetTimeZoneInfoHandle(char a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax
  ULONG BufferLengthOut[4]; // [rsp+40h] [rbp-238h] BYREF
  WCHAR TargetPath[264]; // [rsp+50h] [rbp-228h] BYREF

  if ( dword_1801D06C4 == 2 )
    goto LABEL_2;
  result = RtlGetPersistedStateLocation(
             L"TimeZoneInformationSettings",
             L"TargetNtPath",
             0LL,
             LocationTypeRegistry,
             TargetPath,
             0x208u,
             BufferLengthOut);
  if ( result >= 0 )
  {
    dword_1801D06C4 = 1;
    LOBYTE(a3) = a1;
    result = RtlpGetRegistryHandle(0LL, TargetPath, a3, a2);
    if ( result == -1073741772 )
      goto LABEL_2;
  }
  else if ( result == -1073741772 )
  {
    dword_1801D06C4 = 2;
LABEL_2:
    LOBYTE(a3) = a1;
    return RtlpGetRegistryHandle(2LL, L"TimeZoneInformation", a3, a2);
  }
  return result;
}
