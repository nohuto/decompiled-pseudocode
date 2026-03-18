/*
 * XREFs of RtlStringCchPrintfExA @ 0x14004BC9C
 * Callers:
 *     ACPIGetProcessorIDWide @ 0x14004D5C8 (ACPIGetProcessorIDWide.c)
 * Callees:
 *     RtlStringExHandleOtherFlagsA @ 0x140060CF0 (RtlStringExHandleOtherFlagsA.c)
 *     RtlStringVPrintfWorkerA @ 0x140060DAC (RtlStringVPrintfWorkerA.c)
 *     memset @ 0x140070F40 (memset.c)
 */

NTSTATUS RtlStringCchPrintfExA(
        NTSTRSAFE_PSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags,
        NTSTRSAFE_PCSTR pszFormat,
        ...)
{
  NTSTATUS v7; // ebx
  const char *v10; // r9
  NTSTRSAFE_PSTR v11; // r13
  size_t v12; // r14
  NTSTATUS v13; // eax
  size_t v14; // rcx
  NTSTRSAFE_PSTR ppszDestEnda; // [rsp+30h] [rbp-18h] BYREF
  size_t pcchNewDestLength[2]; // [rsp+38h] [rbp-10h] BYREF
  va_list argList; // [rsp+C0h] [rbp+78h] BYREF

  va_start(argList, pszFormat);
  v7 = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
      v7 = -1073741811;
  }
  else if ( cchDest - 1 > 0x7FFFFFFE )
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
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
      v10 = byte_1400753E8;
    v7 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v7 = -1073741811;
      if ( cchDest )
        *pszDest = 0;
    }
    else if ( cchDest )
    {
      pcchNewDestLength[0] = 0LL;
      v13 = RtlStringVPrintfWorkerA(pszDest, cchDest, pcchNewDestLength, v10, argList);
      v14 = pcchNewDestLength[0];
      v7 = v13;
      v12 = cchDest - pcchNewDestLength[0];
      pcchNewDestLength[0] = cchDest - pcchNewDestLength[0];
      v11 = &pszDest[v14];
      ppszDestEnda = &pszDest[v14];
      if ( v13 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 && v12 > 1 )
          memset(v11 + 1, (unsigned __int8)dwFlags, v12 - 1);
        goto LABEL_20;
      }
    }
    else
    {
      if ( !*v10 )
      {
LABEL_20:
        if ( ppszDestEnd )
          *ppszDestEnd = v11;
        if ( pcchRemaining )
          *pcchRemaining = v12;
        return v7;
      }
      v7 = pszDest != 0LL ? -2147483643 : -1073741811;
    }
    if ( (dwFlags & 0x1C00) != 0 && cchDest )
    {
      RtlStringExHandleOtherFlagsA(pszDest, cchDest, (size_t)ppszDestEnd, &ppszDestEnda, pcchNewDestLength, dwFlags);
      v11 = ppszDestEnda;
      v12 = pcchNewDestLength[0];
    }
    if ( (int)(v7 + 0x80000000) < 0 || v7 == -2147483643 )
      goto LABEL_20;
  }
  return v7;
}
