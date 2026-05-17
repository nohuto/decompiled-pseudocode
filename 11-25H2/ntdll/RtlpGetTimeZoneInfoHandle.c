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

__int64 __fastcall RtlpGetTimeZoneInfoHandle(char a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // [rsp+40h] [rbp-238h] BYREF
  _BYTE v7[528]; // [rsp+50h] [rbp-228h] BYREF

  if ( dword_1801D06C4 == 2 )
    goto LABEL_2;
  result = RtlGetPersistedStateLocation(
             (wchar_t *)L"TimeZoneInformationSettings",
             L"TargetNtPath",
             0LL,
             0,
             v7,
             0x208u,
             (unsigned int *)&v6);
  if ( (int)result >= 0 )
  {
    dword_1801D06C4 = 1;
    LOBYTE(a3) = a1;
    result = RtlpGetRegistryHandle(0LL, v7, a3, a2);
    if ( (_DWORD)result == -1073741772 )
      goto LABEL_2;
  }
  else if ( (_DWORD)result == -1073741772 )
  {
    dword_1801D06C4 = 2;
LABEL_2:
    LOBYTE(a3) = a1;
    return RtlpGetRegistryHandle(2LL, L"TimeZoneInformation", a3, a2);
  }
  return result;
}
