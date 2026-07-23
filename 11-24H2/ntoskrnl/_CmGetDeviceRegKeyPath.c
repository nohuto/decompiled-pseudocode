/*
 * XREFs of _CmGetDeviceRegKeyPath @ 0x1408E0940
 * Callers:
 *     PiDqGetRelativeObjectRegPath @ 0x1408E1294 (PiDqGetRelativeObjectRegPath.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A73AFC (_CmDeleteDeviceRegKeyWorker.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140418B60 (RtlStringCchPrintfExW.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x1408E0D10 (_CmGetDeviceSoftwareKeyPath.c)
 *     _CmGetDeviceLogConfKeyPath @ 0x1408E1038 (_CmGetDeviceLogConfKeyPath.c)
 *     _CmGetDeviceControlKeyPath @ 0x1408E10F0 (_CmGetDeviceControlKeyPath.c)
 *     _CmGetDeviceHardwareKeyPath @ 0x1408E11A8 (_CmGetDeviceHardwareKeyPath.c)
 */

NTSTATUS __fastcall CmGetDeviceRegKeyPath(
        int a1,
        unsigned __int16 *a2,
        int a3,
        int a4,
        char a5,
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        _DWORD *a8)
{
  unsigned __int16 *v8; // r11
  int v10; // r10d
  int v11; // ebx
  __int64 v12; // rcx
  _WORD *i; // rax
  int v14; // eax
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  ULONG dwFlags; // [rsp+20h] [rbp-38h]
  size_t v23; // [rsp+30h] [rbp-28h]

  v8 = a2;
  if ( !a3 )
    return -1073741811;
  if ( (a3 & 0xFFFFFCE8) != 0 )
    return -1073741811;
  v10 = 0;
  v11 = 1;
  if ( !a2 )
    return -1073741811;
  v12 = 200LL;
  for ( i = a2; *i; ++i )
  {
    if ( !--v12 )
      return -1073741773;
  }
  while ( 1 )
  {
    v14 = *a2;
    if ( !(_WORD)v14 )
      break;
    LODWORD(v12) = v14 - 33;
    if ( (unsigned __int16)(v14 - 33) > 0x5Eu || (_WORD)v14 == 44 )
      return -1073741773;
    if ( (_WORD)v14 == 92 )
    {
      if ( !v10 )
        return -1073741773;
      v10 = 0;
      ++v11;
      ++a2;
    }
    else
    {
      ++v10;
      ++a2;
    }
  }
  if ( !v10 || v11 != 3 )
    return -1073741773;
  if ( (unsigned __int8)a3 != 16 )
  {
    switch ( (unsigned __int8)a3 )
    {
      case 0x12u:
        LODWORD(v23) = cchDest;
        return CmGetDeviceSoftwareKeyPath(a1, (int)v8, a3, a4, a5, pszDest, v23, (__int64)a8);
      case 0x11u:
        LODWORD(v23) = cchDest;
        return CmGetDeviceHardwareKeyPath(v12, (int)v8, a3, a4, dwFlags, pszDest, v23, (__int64)a8);
      case 0x13u:
        LODWORD(v23) = cchDest;
        return CmGetDeviceControlKeyPath(v12, (int)v8, a3, a4, dwFlags, pszDest, v23, (__int64)a8);
      case 0x14u:
        LODWORD(v23) = cchDest;
        return CmGetDeviceLogConfKeyPath(v12, (int)v8, a3, a4, dwFlags, pszDest, v23, (__int64)a8);
    }
    return -1073741811;
  }
  if ( (a3 & 0x200) == 0 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v8[v16] );
    v17 = v16 + 31;
    if ( v17 > 0xFFFFFFFF )
      return -1073741675;
    if ( a8 )
      *a8 = v17;
    if ( (unsigned int)v17 <= (unsigned int)cchDest )
      return RtlStringCchPrintfExW(
               pszDest,
               (unsigned int)cchDest,
               0LL,
               0LL,
               0x800u,
               L"%s\\%s",
               L"System\\CurrentControlSet\\Enum",
               v8);
    return -1073741789;
  }
  if ( !a4 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v8[v18] );
    v19 = v18 + 82;
    if ( v19 > 0xFFFFFFFF )
      return -1073741675;
    if ( a8 )
      *a8 = v19;
    if ( (unsigned int)v19 <= (unsigned int)cchDest )
      return RtlStringCchPrintfExW(
               pszDest,
               (unsigned int)cchDest,
               0LL,
               0LL,
               0x800u,
               L"%s\\%s\\%s",
               L"System\\CurrentControlSet\\Hardware Profiles\\Current",
               L"System\\CurrentControlSet\\Enum",
               v8);
    return -1073741789;
  }
  if ( a4 == -1 )
    return -1073741811;
  v20 = -1LL;
  do
    ++v20;
  while ( v8[v20] );
  v21 = v20 + 79;
  if ( v21 > 0xFFFFFFFF )
    return -1073741675;
  if ( a8 )
    *a8 = v21;
  if ( (unsigned int)v21 > (unsigned int)cchDest )
    return -1073741789;
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
           v8);
}
