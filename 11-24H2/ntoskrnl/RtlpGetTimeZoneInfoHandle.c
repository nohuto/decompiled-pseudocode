/*
 * XREFs of RtlpGetTimeZoneInfoHandle @ 0x1409B6330
 * Callers:
 *     RtlSetActiveTimeBias @ 0x1407820DC (RtlSetActiveTimeBias.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x140782578 (RtlpSetTimeZoneInformationWorker.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x1409B66B0 (RtlpQueryTimeZoneInformationWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlGetPersistedStateLocation @ 0x1409B4B60 (RtlGetPersistedStateLocation.c)
 *     RtlpGetRegistryHandle @ 0x1409B52DC (RtlpGetRegistryHandle.c)
 */

int __fastcall RtlpGetTimeZoneInfoHandle(char a1, HANDLE *a2)
{
  int result; // eax
  ULONG BufferLengthOut[4]; // [rsp+40h] [rbp-238h] BYREF
  WCHAR TargetPath[264]; // [rsp+50h] [rbp-228h] BYREF

  if ( dword_140E67A34 == 2 )
    return RtlpGetRegistryHandle(2, L"TimeZoneInformation", a1, a2);
  result = RtlGetPersistedStateLocation(
             L"TimeZoneInformationSettings",
             L"TargetNtPath",
             0LL,
             LocationTypeRegistry,
             TargetPath,
             0x208u,
             BufferLengthOut);
  if ( result < 0 )
  {
    if ( result == -1073741772 )
    {
      dword_140E67A34 = 2;
      return RtlpGetRegistryHandle(2, L"TimeZoneInformation", a1, a2);
    }
  }
  else
  {
    dword_140E67A34 = 1;
    result = RtlpGetRegistryHandle(0, TargetPath, a1, a2);
    if ( result == -1073741772 )
      return RtlpGetRegistryHandle(2, L"TimeZoneInformation", a1, a2);
  }
  return result;
}
