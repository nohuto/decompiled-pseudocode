/*
 * XREFs of RtlpGetTimeZoneInfoHandle @ 0x1409DBBB4
 * Callers:
 *     RtlSetActiveTimeBias @ 0x1407821AC (RtlSetActiveTimeBias.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x140782648 (RtlpSetTimeZoneInformationWorker.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x1409DB994 (RtlpQueryTimeZoneInformationWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlGetPersistedStateLocation @ 0x1409CC0E0 (RtlGetPersistedStateLocation.c)
 *     RtlpGetRegistryHandle @ 0x1409CC85C (RtlpGetRegistryHandle.c)
 */

__int64 __fastcall RtlpGetTimeZoneInfoHandle(char a1, HANDLE *a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp-238h] BYREF
  WCHAR v6[264]; // [rsp+50h] [rbp-228h] BYREF

  if ( dword_140E6787C == 2 )
    return RtlpGetRegistryHandle(2, L"TimeZoneInformation", a1, a2);
  result = RtlGetPersistedStateLocation(
             L"TimeZoneInformationSettings",
             L"TargetNtPath",
             0LL,
             0,
             v6,
             0x208u,
             (unsigned int *)&v5);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741772 )
    {
      dword_140E6787C = 2;
      return RtlpGetRegistryHandle(2, L"TimeZoneInformation", a1, a2);
    }
  }
  else
  {
    dword_140E6787C = 1;
    result = RtlpGetRegistryHandle(0, v6, a1, a2);
    if ( (_DWORD)result == -1073741772 )
      return RtlpGetRegistryHandle(2, L"TimeZoneInformation", a1, a2);
  }
  return result;
}
