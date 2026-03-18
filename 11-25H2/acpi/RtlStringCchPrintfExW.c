/*
 * XREFs of RtlStringCchPrintfExW @ 0x140041E00
 * Callers:
 *     AcpiArblibAllocateArbiterInstance @ 0x14009ABC0 (AcpiArblibAllocateArbiterInstance.c)
 *     ACPIGetPnpLocationString @ 0x1400B5410 (ACPIGetPnpLocationString.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x140041FDC (RtlStringVPrintfWorkerW.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1400580BC (RtlStringExHandleOtherFlagsW.c)
 *     memset @ 0x140070F40 (memset.c)
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
  NTSTATUS v9; // ebx
  const wchar_t *v10; // r9
  NTSTRSAFE_PWSTR v11; // r13
  size_t v12; // r14
  NTSTATUS v13; // eax
  size_t v14; // rcx
  NTSTRSAFE_PWSTR ppszDestEnda; // [rsp+30h] [rbp-18h] BYREF
  size_t pcchNewDestLength[2]; // [rsp+38h] [rbp-10h] BYREF
  va_list va; // [rsp+C0h] [rbp+78h] BYREF

  va_start(va, pszFormat);
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
  if ( v9 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v10 = pszFormat;
    v11 = pszDest;
    ppszDestEnda = pszDest;
    v12 = cchDest;
    pcchNewDestLength[0] = cchDest;
    if ( (dwFlags & 0x100) != 0 && !pszFormat )
      v10 = &word_140076618;
    v9 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v9 = -1073741811;
      if ( cchDest )
        *pszDest = 0;
    }
    else if ( cchDest )
    {
      pcchNewDestLength[0] = 0LL;
      v13 = RtlStringVPrintfWorkerW(pszDest, cchDest, pcchNewDestLength, v10, va);
      v14 = pcchNewDestLength[0];
      v9 = v13;
      v12 = cchDest - pcchNewDestLength[0];
      pcchNewDestLength[0] = cchDest - pcchNewDestLength[0];
      v11 = &pszDest[v14];
      ppszDestEnda = v11;
      if ( v13 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 && v12 > 1 && 2 * v12 > 2 )
          memset(v11 + 1, (unsigned __int8)dwFlags, 2 * v12 - 2);
        goto LABEL_13;
      }
    }
    else
    {
      if ( !*v10 )
      {
LABEL_13:
        if ( ppszDestEnd )
          *ppszDestEnd = v11;
        if ( pcchRemaining )
          *pcchRemaining = v12;
        return v9;
      }
      v9 = pszDest != 0LL ? -2147483643 : -1073741811;
    }
    if ( (dwFlags & 0x1C00) != 0 && cchDest )
    {
      RtlStringExHandleOtherFlagsW(pszDest, 2 * cchDest, (size_t)ppszDestEnd, &ppszDestEnda, pcchNewDestLength, dwFlags);
      v11 = ppszDestEnda;
      v12 = pcchNewDestLength[0];
    }
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
      goto LABEL_13;
  }
  return v9;
}
