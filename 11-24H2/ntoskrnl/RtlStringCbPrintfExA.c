/*
 * XREFs of RtlStringCbPrintfExA @ 0x1405378C4
 * Callers:
 *     KiDisplayBlueScreen @ 0x1405B0834 (KiDisplayBlueScreen.c)
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlStringExHandleFillBehindNullA @ 0x140537A54 (RtlStringExHandleFillBehindNullA.c)
 *     RtlStringExHandleOtherFlagsA @ 0x140537A80 (RtlStringExHandleOtherFlagsA.c)
 *     RtlStringExValidateDestA @ 0x140537B44 (RtlStringExValidateDestA.c)
 *     RtlStringVPrintfWorkerA @ 0x140537BC8 (RtlStringVPrintfWorkerA.c)
 */

NTSTATUS RtlStringCbPrintfExA(
        NTSTRSAFE_PSTR pszDest,
        size_t cbDest,
        NTSTRSAFE_PSTR *ppszDestEnd,
        size_t *pcbRemaining,
        ULONG dwFlags,
        NTSTRSAFE_PCSTR pszFormat,
        ...)
{
  int v9; // ebx
  const char *v10; // r9
  char *v11; // r12
  size_t v12; // r14
  size_t v13; // rax
  NTSTRSAFE_PSTR ppszDestEnda; // [rsp+30h] [rbp-18h] BYREF
  size_t pcchNewDestLength[2]; // [rsp+38h] [rbp-10h] BYREF
  va_list argList; // [rsp+C0h] [rbp+78h] BYREF

  va_start(argList, pszFormat);
  v9 = RtlStringExValidateDestA(pszDest, cbDest, (const size_t)ppszDestEnd, dwFlags);
  if ( v9 < 0 )
  {
    if ( cbDest )
      *pszDest = 0;
  }
  else
  {
    v10 = pszFormat;
    v11 = pszDest;
    ppszDestEnda = pszDest;
    v12 = cbDest;
    pcchNewDestLength[0] = cbDest;
    if ( (dwFlags & 0x100) != 0 && !pszFormat )
      v10 = &File;
    v9 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v9 = -1073741811;
      if ( cbDest )
        *pszDest = 0;
    }
    else if ( cbDest )
    {
      pcchNewDestLength[0] = 0LL;
      v9 = RtlStringVPrintfWorkerA(pszDest, cbDest, pcchNewDestLength, v10, argList);
      v13 = pcchNewDestLength[0];
      v12 = cbDest - pcchNewDestLength[0];
      pcchNewDestLength[0] = cbDest - pcchNewDestLength[0];
      v11 = &pszDest[v13];
      ppszDestEnda = &pszDest[v13];
      if ( v9 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 && v12 > 1 )
          RtlStringExHandleFillBehindNullA(&pszDest[v13], v12, dwFlags);
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
        if ( pcbRemaining )
          *pcbRemaining = v12;
        return v9;
      }
      v9 = pszDest != 0LL ? -2147483643 : -1073741811;
    }
    if ( (dwFlags & 0x1C00) != 0 && cbDest )
    {
      RtlStringExHandleOtherFlagsA(pszDest, cbDest, 0LL, &ppszDestEnda, pcchNewDestLength, dwFlags);
      v11 = ppszDestEnda;
      v12 = pcchNewDestLength[0];
    }
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
      goto LABEL_13;
  }
  return v9;
}
