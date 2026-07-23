/*
 * XREFs of SiIsValidDiskDevice @ 0x140817290
 * Callers:
 *     SiGetEfiSystemDevice @ 0x140816A88 (SiGetEfiSystemDevice.c)
 * Callees:
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     _wcsnicmp @ 0x1404FBDB0 (_wcsnicmp.c)
 */

char __fastcall SiIsValidDiskDevice(wchar_t *Str1, wchar_t *a2)
{
  wchar_t *v4; // rcx
  wchar_t v5; // ax
  int v7; // edx

  if ( (!wcsicmp(a2, L"Directory") || !wcsicmp(a2, L"SymbolicLink")) && !wcsnicmp(Str1, L"Harddisk", 8uLL) )
  {
    v4 = Str1 + 8;
    v5 = Str1[8];
    if ( v5 )
    {
      if ( v5 != 48 )
      {
        v7 = 0;
        while ( v5 )
        {
          if ( (unsigned __int16)(v5 - 48) > 9u )
            return 0;
          if ( (unsigned int)++v7 > 0xA )
            return 0;
          v5 = *++v4;
        }
        return 1;
      }
      if ( !Str1[9] )
        return 1;
    }
  }
  return 0;
}
