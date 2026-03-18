/*
 * XREFs of RtlpGetDynamicTimeZoneInfoHandle @ 0x140773248
 * Callers:
 *     RtlpCheckDynamicTimeZoneInformation @ 0x14077300C (RtlpCheckDynamicTimeZoneInformation.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x140436640 (RtlStringCbCopyW.c)
 *     RtlStringCbCatW @ 0x14044D218 (RtlStringCbCatW.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlpGetRegistryHandle @ 0x1409B44DC (RtlpGetRegistryHandle.c)
 */

NTSTATUS __fastcall RtlpGetDynamicTimeZoneInfoHandle(_WORD *a1, __int64 a2)
{
  NTSTATUS result; // eax
  const wchar_t *v4; // r11
  wchar_t pszDest[256]; // [rsp+20h] [rbp-218h] BYREF

  if ( !*a1 )
    return -1073741811;
  result = RtlStringCbCopyW(pszDest, 0x200uLL, L"Time Zones\\");
  if ( result >= 0 )
  {
    result = RtlStringCbCatW(pszDest, 0x200uLL, v4);
    if ( result >= 0 )
    {
      result = RtlStringCbCatW(pszDest, 0x200uLL, L"\\Dynamic DST");
      if ( result >= 0 )
        return RtlpGetRegistryHandle(3LL, pszDest, 0LL, a2);
    }
  }
  return result;
}
