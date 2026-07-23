/*
 * XREFs of RtlpGetDynamicTimeZoneInfoHandle @ 0x140782428
 * Callers:
 *     RtlpCheckDynamicTimeZoneInformation @ 0x1407821EC (RtlpCheckDynamicTimeZoneInformation.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x140425B00 (RtlStringCbCopyW.c)
 *     RtlStringCbCatW @ 0x140443D48 (RtlStringCbCatW.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlpGetRegistryHandle @ 0x1409B52DC (RtlpGetRegistryHandle.c)
 */

NTSTATUS __fastcall RtlpGetDynamicTimeZoneInfoHandle(NTSTRSAFE_PCWSTR pszSrc, __int64 a2)
{
  NTSTATUS result; // eax
  wchar_t pszDest[256]; // [rsp+20h] [rbp-218h] BYREF

  if ( !*pszSrc )
    return -1073741811;
  result = RtlStringCbCopyW(pszDest, 0x200uLL, L"Time Zones\\");
  if ( result >= 0 )
  {
    result = RtlStringCbCatW(pszDest, 0x200uLL, pszSrc);
    if ( result >= 0 )
    {
      result = RtlStringCbCatW(pszDest, 0x200uLL, L"\\Dynamic DST");
      if ( result >= 0 )
        return RtlpGetRegistryHandle(3LL, pszDest, 0LL, a2);
    }
  }
  return result;
}
