/*
 * XREFs of AdtpBuildSockAddrString @ 0x140A15A28
 * Callers:
 *     AdtpPackageParameters @ 0x140451F80 (AdtpPackageParameters.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     AdtpBuildMacStrings @ 0x140800EF4 (AdtpBuildMacStrings.c)
 *     AdtpBuildIPv4Strings @ 0x140A15AB4 (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x140A15C0C (AdtpBuildIPv6Strings.c)
 */

__int64 __fastcall AdtpBuildSockAddrString(__int16 *a1, UNICODE_STRING *a2, _BYTE *a3, UNICODE_STRING *a4, _BYTE *a5)
{
  unsigned int v5; // ebx
  __int16 v8; // ax

  v5 = 0;
  if ( a3 )
    *a3 = 0;
  if ( a5 )
    *a5 = 0;
  v8 = *a1;
  if ( *a1 == 2 )
    return (unsigned int)AdtpBuildIPv4Strings((_DWORD)a1, (_DWORD)a2, (_DWORD)a3, (_DWORD)a4, (__int64)a5);
  if ( v8 == 23 )
    return (unsigned int)AdtpBuildIPv6Strings((_DWORD)a1, (_DWORD)a2, (_DWORD)a3, (_DWORD)a4, (__int64)a5);
  if ( v8 == 33 )
    return (unsigned int)AdtpBuildMacStrings((__int64)a1, (__int64)a2, a3);
  if ( a2 && a3 )
  {
    RtlInitUnicodeString(a2, L"-");
    *a3 = 0;
  }
  if ( a4 && a5 )
  {
    RtlInitUnicodeString(a4, L"-");
    *a5 = 0;
  }
  return v5;
}
