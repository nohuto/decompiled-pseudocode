/*
 * XREFs of RtlpGetFileSize @ 0x180147D0C
 * Callers:
 *     RtlpOpenAndMapCustomCultureFile @ 0x1801189C4 (RtlpOpenAndMapCustomCultureFile.c)
 * Callees:
 *     NtQueryInformationFile @ 0x180163440 (NtQueryInformationFile.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpGetFileSize(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+30h] [rbp-38h] BYREF
  __int128 v5; // [rsp+40h] [rbp-28h] BYREF
  __int64 v6; // [rsp+50h] [rbp-18h]

  v6 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  result = NtQueryInformationFile(a1, &v4, &v5, 24LL, 5);
  if ( (int)result >= 0 )
  {
    *a2 = *((_QWORD *)&v5 + 1);
    return 0LL;
  }
  return result;
}
