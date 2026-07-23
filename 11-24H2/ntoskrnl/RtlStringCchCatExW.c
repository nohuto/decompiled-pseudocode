/*
 * XREFs of RtlStringCchCatExW @ 0x140476350
 * Callers:
 *     PiCMGenerateDeviceInstance @ 0x14072F37C (PiCMGenerateDeviceInstance.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1408C7D90 (_CmGetDeviceInterfaceRegKeyPath.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCatExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PCWSTR pszSrc,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags)
{
  size_t v9; // rbx
  NTSTRSAFE_PWSTR v10; // rax
  NTSTATUS v11; // edx
  size_t v12; // rax
  wchar_t *v13; // r8
  size_t v14; // rcx
  size_t v15; // rsi
  char *v16; // rdi
  wchar_t v17; // ax
  wchar_t *v18; // rax

  if ( cchDest - 1 > 0x7FFFFFFE )
    return -1073741811;
  v9 = cchDest;
  v10 = pszDest;
  do
  {
    if ( !*v10 )
      break;
    ++v10;
    --v9;
  }
  while ( v9 );
  v11 = v9 == 0 ? 0xC000000D : 0;
  v12 = (cchDest - v9) & -(__int64)(v9 != 0);
  if ( v9 )
  {
    v13 = &pszDest[v12];
    v14 = cchDest - v12;
    v11 = 0;
    if ( cchDest - v12 <= 1 )
    {
      if ( !*pszSrc )
        return v11;
      v11 = pszDest != 0LL ? -2147483643 : -1073741811;
    }
    else
    {
      v15 = 2147483646 - v14;
      v16 = (char *)((char *)pszSrc - (char *)v13);
      do
      {
        if ( !(v15 + v14) )
          break;
        v17 = *(wchar_t *)((char *)v13 + (_QWORD)v16);
        if ( !v17 )
          break;
        *v13++ = v17;
        --v14;
      }
      while ( v14 );
      v18 = v13 - 1;
      if ( v14 )
        v18 = v13;
      *v18 = 0;
      v11 = v14 == 0 ? 0x80000005 : 0;
      if ( v14 )
        return v11;
    }
    if ( (cchDest & 0x7FFFFFFFFFFFFFFFLL) != 0 )
      *pszDest = 0;
  }
  return v11;
}
