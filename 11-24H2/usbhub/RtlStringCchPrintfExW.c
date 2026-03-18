/*
 * XREFs of RtlStringCchPrintfExW @ 0x140056528
 * Callers:
 *     UsbhBusIfLocationGetLocationStrings @ 0x140056BC0 (UsbhBusIfLocationGetLocationStrings.c)
 * Callees:
 *     RtlStringExHandleOtherFlagsW @ 0x140056708 (RtlStringExHandleOtherFlagsW.c)
 *     memset @ 0x140061340 (memset.c)
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
  NTSTATUS v8; // ebx
  const wchar_t *v9; // r8
  NTSTRSAFE_PWSTR v10; // r13
  size_t v11; // r15
  size_t v12; // rsi
  int v13; // eax
  NTSTRSAFE_PWSTR ppszDestEnda; // [rsp+30h] [rbp-18h] BYREF
  size_t v16[2]; // [rsp+38h] [rbp-10h] BYREF
  size_t *v18; // [rsp+A8h] [rbp+60h]
  va_list Args; // [rsp+C0h] [rbp+78h] BYREF

  va_start(Args, pszFormat);
  v18 = pcchRemaining;
  v8 = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
      v8 = -1073741811;
  }
  else if ( cchDest - 1 > 0x7FFFFFFE )
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
    return v8;
  }
  v9 = pszFormat;
  v10 = pszDest;
  ppszDestEnda = pszDest;
  v11 = cchDest;
  v16[0] = cchDest;
  if ( (dwFlags & 0x100) != 0 && !pszFormat )
    v9 = (const wchar_t *)&Format;
  v8 = 0;
  if ( (dwFlags & 0xFFFFE000) != 0 )
  {
    v8 = -1073741811;
    if ( cchDest )
      *pszDest = 0;
    goto LABEL_15;
  }
  if ( cchDest )
  {
    v16[0] = 0LL;
    v12 = cchDest - 1;
    v13 = _vsnwprintf(pszDest, cchDest - 1, v9, Args);
    if ( v13 < 0 || v13 > v12 )
    {
      v8 = -2147483643;
    }
    else if ( v13 != v12 )
    {
      v12 = v13;
      goto LABEL_34;
    }
    pszDest[v12] = 0;
LABEL_34:
    v11 = cchDest - v12;
    v10 = &pszDest[v12];
    ppszDestEnda = v10;
    v16[0] = cchDest - v12;
    if ( v8 >= 0 )
    {
      if ( (dwFlags & 0x200) != 0 && v11 > 1 && 2 * v11 > 2 )
        memset(v10 + 1, (unsigned __int8)dwFlags, 2 * v11 - 2);
      goto LABEL_20;
    }
    goto LABEL_15;
  }
  if ( !*v9 )
    goto LABEL_21;
  v8 = pszDest != 0LL ? -2147483643 : -1073741811;
LABEL_15:
  if ( (dwFlags & 0x1C00) != 0 && cchDest )
  {
    RtlStringExHandleOtherFlagsW(pszDest, 2 * cchDest, (size_t)v9, &ppszDestEnda, v16, dwFlags);
    v10 = ppszDestEnda;
    v11 = v16[0];
  }
  if ( (int)(v8 + 0x80000000) < 0 || v8 == -2147483643 )
  {
LABEL_20:
    pcchRemaining = v18;
LABEL_21:
    if ( ppszDestEnd )
      *ppszDestEnd = v10;
    if ( pcchRemaining )
      *pcchRemaining = v11;
  }
  return v8;
}
