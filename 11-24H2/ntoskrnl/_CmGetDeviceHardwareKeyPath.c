/*
 * XREFs of _CmGetDeviceHardwareKeyPath @ 0x1408E11A8
 * Callers:
 *     _CmGetDeviceRegKeyPath @ 0x1408E0940 (_CmGetDeviceRegKeyPath.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140418B60 (RtlStringCchPrintfExW.c)
 */

NTSTATUS __fastcall CmGetDeviceHardwareKeyPath(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        int a4,
        int a5,
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        _DWORD *a8)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rax

  if ( (a3 & 0x200) != 0 )
  {
    if ( a4 )
    {
      if ( a4 == -1 )
        return -1073741811;
      v14 = -1LL;
      do
        ++v14;
      while ( *(_WORD *)(a2 + 2 * v14) );
      v15 = v14 + 79;
      if ( v15 > 0xFFFFFFFF )
        return -1073741675;
      if ( a8 )
        *a8 = v15;
      if ( (unsigned int)v15 <= (unsigned int)cchDest )
        return RtlStringCchPrintfExW(
                 pszDest,
                 (unsigned int)cchDest,
                 0LL,
                 0LL,
                 0x800u,
                 L"%s\\%04u\\%s\\%s",
                 L"System\\CurrentControlSet\\Hardware Profiles",
                 a4,
                 L"System\\CurrentControlSet\\Enum",
                 a2);
    }
    else
    {
      v12 = -1LL;
      do
        ++v12;
      while ( *(_WORD *)(a2 + 2 * v12) );
      v13 = v12 + 82;
      if ( v13 > 0xFFFFFFFF )
        return -1073741675;
      if ( a8 )
        *a8 = v13;
      if ( (unsigned int)v13 <= (unsigned int)cchDest )
        return RtlStringCchPrintfExW(
                 pszDest,
                 (unsigned int)cchDest,
                 0LL,
                 0LL,
                 0x800u,
                 L"%s\\%s\\%s",
                 L"System\\CurrentControlSet\\Hardware Profiles\\Current",
                 L"System\\CurrentControlSet\\Enum",
                 a2);
    }
    return -1073741789;
  }
  v8 = -1LL;
  do
    ++v8;
  while ( *(_WORD *)(a2 + 2 * v8) );
  if ( (a3 & 0x100) != 0 )
  {
    v11 = v8 + 31;
    if ( v11 > 0xFFFFFFFF )
      return -1073741675;
    if ( a8 )
      *a8 = v11;
    if ( (unsigned int)v11 <= (unsigned int)cchDest )
      return RtlStringCchPrintfExW(
               pszDest,
               (unsigned int)cchDest,
               0LL,
               0LL,
               0x800u,
               L"%s\\%s",
               L"System\\CurrentControlSet\\Enum",
               a2);
    return -1073741789;
  }
  v9 = v8 + 49;
  if ( v9 > 0xFFFFFFFF )
    return -1073741675;
  if ( a8 )
    *a8 = v9;
  if ( (unsigned int)v9 > (unsigned int)cchDest )
    return -1073741789;
  return RtlStringCchPrintfExW(
           pszDest,
           (unsigned int)cchDest,
           0LL,
           0LL,
           0x800u,
           L"%s\\%s\\%s",
           L"System\\CurrentControlSet\\Enum",
           a2,
           L"Device Parameters");
}
