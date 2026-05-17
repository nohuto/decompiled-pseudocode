/*
 * XREFs of WerpEscalationReadUlongFromKey @ 0x18013485C
 * Callers:
 *     WerpEscalationIsWMRSendStringSet @ 0x1800E3A2C (WerpEscalationIsWMRSendStringSet.c)
 *     WerpEscalationIsDisabled @ 0x180115298 (WerpEscalationIsDisabled.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800DA0A0 (RtlInitUnicodeString.c)
 *     NtQueryValueKey @ 0x180161F70 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall WerpEscalationReadUlongFromKey(__int64 a1, const WCHAR *a2, _DWORD *a3)
{
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  __int128 v8; // [rsp+48h] [rbp-30h] BYREF
  int v9; // [rsp+58h] [rbp-20h]

  v6 = 0;
  *a3 = 0;
  v8 = 0LL;
  v9 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  result = NtQueryValueKey(a1, &DestinationString, 2LL, &v8, 20, &v6);
  if ( (_DWORD)result == -1073741772 )
    return 3221225524LL;
  if ( (int)result >= 0 )
  {
    if ( *(_QWORD *)((char *)&v8 + 4) == 0x400000004LL )
    {
      *a3 = HIDWORD(v8);
      return 0LL;
    }
    else
    {
      return 3221225473LL;
    }
  }
  return result;
}
