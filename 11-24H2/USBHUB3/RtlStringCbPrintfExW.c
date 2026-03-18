/*
 * XREFs of RtlStringCbPrintfExW @ 0x14000F744
 * Callers:
 *     HUBFDO_AssignUsb4PortMappingProperty @ 0x14007980C (HUBFDO_AssignUsb4PortMappingProperty.c)
 * Callees:
 *     memset @ 0x140046900 (memset.c)
 */

NTSTATUS RtlStringCbPrintfExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cbDest,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcbRemaining,
        ULONG dwFlags,
        NTSTRSAFE_PCWSTR pszFormat,
        ...)
{
  size_t v7; // rdi
  NTSTATUS v9; // esi
  NTSTRSAFE_PCWSTR v10; // r8
  NTSTRSAFE_PWSTR v11; // r15
  size_t v12; // rbp
  unsigned __int64 v13; // rbx
  int v14; // eax
  size_t v15; // r8
  size_t *v18; // [rsp+98h] [rbp+20h]
  va_list Args; // [rsp+B0h] [rbp+38h] BYREF

  va_start(Args, pszFormat);
  v18 = pcbRemaining;
  v7 = cbDest >> 1;
  v9 = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && v7 || v7 > 0x7FFFFFFF )
      v9 = -1073741811;
  }
  else if ( v7 - 1 > 0x7FFFFFFE )
  {
    v9 = -1073741811;
  }
  if ( v9 >= 0 )
  {
    v10 = pszFormat;
    v11 = pszDest;
    v12 = cbDest >> 1;
    if ( (dwFlags & 0x100) != 0 && !pszFormat )
      v10 = &word_140063E30;
    v9 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v9 = -1073741811;
      if ( v7 )
        *pszDest = 0;
      goto LABEL_15;
    }
    if ( !v7 )
    {
      if ( !*v10 )
        goto LABEL_29;
      v9 = pszDest != 0LL ? -2147483643 : -1073741811;
      goto LABEL_15;
    }
    v13 = v7 - 1;
    v14 = _vsnwprintf(pszDest, v7 - 1, v10, Args);
    if ( v14 < 0 || v14 > v13 )
    {
      v9 = -2147483643;
    }
    else if ( v14 != v13 )
    {
      v13 = v14;
      goto LABEL_42;
    }
    pszDest[v13] = 0;
LABEL_42:
    v12 = v7 - v13;
    v11 = &pszDest[v13];
    if ( v9 >= 0 )
    {
      if ( (dwFlags & 0x200) != 0 )
      {
        v15 = (cbDest & 1) + 2 * v12;
        if ( v15 > 2 )
          memset(v11 + 1, (unsigned __int8)dwFlags, v15 - 2);
      }
LABEL_28:
      pcbRemaining = v18;
LABEL_29:
      if ( ppszDestEnd )
        *ppszDestEnd = v11;
      if ( pcbRemaining )
        *pcbRemaining = (cbDest & 1) + 2 * v12;
      return v9;
    }
LABEL_15:
    if ( (dwFlags & 0x1C00) == 0 || !cbDest )
      goto LABEL_26;
    if ( v7 && (dwFlags & 0x1000) != 0 )
    {
      v11 = pszDest;
      *pszDest = 0;
      v12 = v7;
    }
    if ( (dwFlags & 0x400) != 0 )
    {
      memset(pszDest, (unsigned __int8)dwFlags, cbDest);
      if ( (_BYTE)dwFlags )
      {
        if ( !v7 )
          goto LABEL_26;
        v12 = 1LL;
        v11 = &pszDest[v7 - 1];
        *v11 = 0;
LABEL_24:
        if ( (dwFlags & 0x800) != 0 )
        {
          v11 = pszDest;
          *pszDest = 0;
          v12 = v7;
        }
LABEL_26:
        if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2147483643 )
          return v9;
        goto LABEL_28;
      }
      v11 = pszDest;
      v12 = v7;
    }
    if ( !v7 )
      goto LABEL_26;
    goto LABEL_24;
  }
  if ( v7 )
    *pszDest = 0;
  return v9;
}
