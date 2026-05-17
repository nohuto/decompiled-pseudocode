/*
 * XREFs of RtlpGetTimeZoneInfoHandle @ 0x1800B5AFC
 * Callers:
 *     RtlpQueryTimeZoneInformationWorker @ 0x1800B5874 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x18013EBE8 (RtlpSetTimeZoneInformationWorker.c)
 * Callees:
 *     RtlGetPersistedStateLocation @ 0x180026620 (RtlGetPersistedStateLocation.c)
 *     RtlpGetRegistryHandle @ 0x1800B6868 (RtlpGetRegistryHandle.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpGetTimeZoneInfoHandle(char a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // [rsp+40h] [rbp-238h] BYREF
  _BYTE v7[528]; // [rsp+50h] [rbp-228h] BYREF

  if ( dword_1801CE694 == 2 )
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
    dword_1801CE694 = 1;
    LOBYTE(a3) = a1;
    result = RtlpGetRegistryHandle(0LL, v7, a3, a2);
    if ( (_DWORD)result == -1073741772 )
      goto LABEL_2;
  }
  else if ( (_DWORD)result == -1073741772 )
  {
    dword_1801CE694 = 2;
LABEL_2:
    LOBYTE(a3) = a1;
    return RtlpGetRegistryHandle(2LL, L"TimeZoneInformation", a3, a2);
  }
  return result;
}
