/*
 * XREFs of RtlStringCchPrintfExW @ 0x14001D350
 * Callers:
 *     HUBPDO_GetLocationString @ 0x140018DB0 (HUBPDO_GetLocationString.c)
 * Callees:
 *     memset @ 0x140046900 (memset.c)
 */

NTSTATUS RtlStringCchPrintfExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags,
        NTSTRSAFE_PCWSTR pszFormat,
        ...)
{
  NTSTATUS v9; // edi
  NTSTRSAFE_PCWSTR v10; // r8
  NTSTRSAFE_PWSTR v11; // r15
  size_t v12; // r14
  size_t v13; // rbp
  size_t v14; // rbp
  int v15; // eax
  va_list Args; // [rsp+B0h] [rbp+38h] BYREF

  va_start(Args, pszFormat);
  v9 = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
      v9 = -1073741811;
  }
  else if ( cchDest - 1 > 0x7FFFFFFE )
  {
    v9 = -1073741811;
  }
  if ( v9 >= 0 )
  {
    v10 = pszFormat;
    v11 = pszDest;
    v12 = cchDest;
    if ( (dwFlags & 0x100) != 0 && !pszFormat )
      v10 = &word_140063E30;
    v9 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v9 = -1073741811;
      if ( cchDest )
        *pszDest = 0;
LABEL_15:
      if ( (dwFlags & 0x1C00) == 0 || !cchDest )
        goto LABEL_26;
      v13 = (2 * cchDest) >> 1;
      if ( v13 && (dwFlags & 0x1000) != 0 )
      {
        v11 = pszDest;
        *pszDest = 0;
        v12 = (2 * cchDest) >> 1;
      }
      if ( (dwFlags & 0x400) != 0 )
      {
        memset(pszDest, (unsigned __int8)dwFlags, 2 * cchDest);
        if ( (_BYTE)dwFlags )
        {
          if ( !v13 )
            goto LABEL_26;
          v12 = 1LL;
          v11 = &pszDest[v13 - 1];
          *v11 = 0;
LABEL_24:
          if ( (dwFlags & 0x800) != 0 )
          {
            v11 = pszDest;
            *pszDest = 0;
            v12 = (2 * cchDest) >> 1;
          }
LABEL_26:
          if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2147483643 )
            return v9;
          goto LABEL_28;
        }
        v11 = pszDest;
        v12 = (2 * cchDest) >> 1;
      }
      if ( !v13 )
        goto LABEL_26;
      goto LABEL_24;
    }
    if ( !cchDest )
    {
      if ( *v10 )
      {
        v9 = pszDest != 0LL ? -2147483643 : -1073741811;
        goto LABEL_15;
      }
LABEL_28:
      if ( ppszDestEnd )
        *ppszDestEnd = v11;
      if ( pcchRemaining )
        *pcchRemaining = v12;
      return v9;
    }
    v14 = cchDest - 1;
    v15 = _vsnwprintf(pszDest, cchDest - 1, v10, Args);
    if ( v15 < 0 || v15 > v14 )
    {
      v9 = -2147483643;
    }
    else if ( v15 != v14 )
    {
      v14 = v15;
LABEL_41:
      v12 = cchDest - v14;
      v11 = &pszDest[v14];
      if ( v9 < 0 )
        goto LABEL_15;
      if ( (dwFlags & 0x200) != 0 && v12 > 1 && 2 * v12 > 2 )
        memset(v11 + 1, (unsigned __int8)dwFlags, 2 * v12 - 2);
      goto LABEL_28;
    }
    pszDest[v14] = 0;
    goto LABEL_41;
  }
  if ( cchDest )
    *pszDest = 0;
  return v9;
}
