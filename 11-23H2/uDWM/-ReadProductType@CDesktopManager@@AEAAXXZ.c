/*
 * XREFs of ?ReadProductType@CDesktopManager@@AEAAXXZ @ 0x18002396C
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x1800264FC (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 */

void __fastcall CDesktopManager::ReadProductType(CDesktopManager *this)
{
  _OSVERSIONINFOW VersionInformation; // [rsp+20h] [rbp-138h] BYREF
  unsigned __int8 v3; // [rsp+13Ah] [rbp-1Eh]

  VersionInformation.dwOSVersionInfoSize = 284;
  if ( GetVersionExW(&VersionInformation) )
    *((_DWORD *)this + 38) = v3;
}
