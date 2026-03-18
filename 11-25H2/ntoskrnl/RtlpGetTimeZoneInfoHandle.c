/*
 * XREFs of RtlpGetTimeZoneInfoHandle @ 0x140992D0C
 * Callers:
 *     RtlSetActiveTimeBias @ 0x140772EFC (RtlSetActiveTimeBias.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x140773398 (RtlpSetTimeZoneInformationWorker.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x140992AEC (RtlpQueryTimeZoneInformationWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlGetPersistedStateLocation @ 0x1409B3D60 (RtlGetPersistedStateLocation.c)
 *     RtlpGetRegistryHandle @ 0x1409B44DC (RtlpGetRegistryHandle.c)
 */

__int64 __fastcall RtlpGetTimeZoneInfoHandle(char a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // [rsp+40h] [rbp-238h] BYREF
  _BYTE v7[528]; // [rsp+50h] [rbp-228h] BYREF

  if ( dword_140E6755C == 2 )
    goto LABEL_2;
  result = RtlGetPersistedStateLocation(L"TimeZoneInformationSettings", v7, 520, (__int64)&v6);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741772 )
    {
      dword_140E6755C = 2;
LABEL_2:
      LOBYTE(a3) = a1;
      return RtlpGetRegistryHandle(2LL, L"TimeZoneInformation", a3, a2);
    }
  }
  else
  {
    dword_140E6755C = 1;
    LOBYTE(a3) = a1;
    result = RtlpGetRegistryHandle(0LL, v7, a3, a2);
    if ( (_DWORD)result == -1073741772 )
      goto LABEL_2;
  }
  return result;
}
