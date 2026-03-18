/*
 * XREFs of UsbhPropagateUxdState @ 0x14005F23C
 * Callers:
 *     UsbhQueryParentHubConfig @ 0x14005F348 (UsbhQueryParentHubConfig.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     RtlStringCbPrintfW @ 0x140025D00 (RtlStringCbPrintfW.c)
 *     UsbhOpenUxdPortHandle @ 0x14005F130 (UsbhOpenUxdPortHandle.c)
 *     __security_check_cookie @ 0x140060F40 (__security_check_cookie.c)
 */

__int64 __fastcall UsbhPropagateUxdState(__int64 a1, void *a2)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  unsigned int i; // esi
  PCWSTR Path; // [rsp+30h] [rbp-48h] BYREF
  wchar_t pszDest[16]; // [rsp+38h] [rbp-40h] BYREF

  Path = 0LL;
  wcscpy(pszDest, L"uxd_port_nnn");
  result = UsbhOpenUxdPortHandle(a1, (void **)&Path);
  v5 = result;
  if ( (int)result >= 0 )
  {
    for ( i = 1;
          i <= *((unsigned __int8 *)FdoExt(a1) + 2938);
          v5 = RtlWriteRegistryValue(0x40000000u, Path, pszDest, 3u, a2, 0x44u) )
    {
      RtlStringCbPrintfW(pszDest, 0x1AuLL, L"uxd_port_%3.3d", i++);
    }
    ZwClose((HANDLE)Path);
    return v5;
  }
  return result;
}
