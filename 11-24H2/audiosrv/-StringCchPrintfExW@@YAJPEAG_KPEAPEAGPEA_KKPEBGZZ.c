/*
 * XREFs of ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x18004001C
 * Callers:
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x18003F9E0 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 * Callees:
 *     StringExHandleOtherFlagsW @ 0x18010A66C (StringExHandleOtherFlagsW.c)
 *     StringExHandleFillBehindNullW @ 0x180138890 (StringExHandleFillBehindNullW.c)
 *     StringExValidateDestW @ 0x1801388BC (StringExValidateDestW.c)
 *     StringExValidateSrcW @ 0x1801388FC (StringExValidateSrcW.c)
 *     StringVPrintfWorkerW_0 @ 0x180138920 (StringVPrintfWorkerW_0.c)
 */

__int64 StringCchPrintfExW(
        STRSAFE_LPWSTR pszDest,
        size_t cchDest,
        unsigned __int16 **a3,
        unsigned __int64 *a4,
        DWORD dwFlags,
        const unsigned __int16 *ppszSrc,
        ...)
{
  HRESULT v9; // ebx
  size_t v10; // r8
  DWORD v11; // r9d
  wchar_t *v12; // r12
  unsigned __int64 v13; // r14
  size_t v14; // rdx
  size_t v15; // r8
  size_t v16; // rax
  STRSAFE_LPWSTR ppszDestEnd; // [rsp+38h] [rbp-20h] BYREF
  size_t pcchNewDestLength[3]; // [rsp+40h] [rbp-18h] BYREF
  va_list argList; // [rsp+D0h] [rbp+78h] BYREF

  va_start(argList, ppszSrc);
  v9 = StringExValidateDestW(pszDest, cchDest, (const size_t)a3, dwFlags);
  if ( v9 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
    return (unsigned int)v9;
  }
  ppszDestEnd = pszDest;
  v12 = pszDest;
  pcchNewDestLength[0] = cchDest;
  v13 = cchDest;
  v9 = StringExValidateSrcW(&ppszSrc, 0LL, v10, v11);
  if ( v9 >= 0 )
  {
    if ( (dwFlags & 0xFFFFE000) == 0 )
    {
      if ( cchDest )
      {
        pcchNewDestLength[0] = v14;
        v9 = StringVPrintfWorkerW_0(pszDest, cchDest, pcchNewDestLength, ppszSrc, argList);
        v16 = pcchNewDestLength[0];
        v13 = cchDest - pcchNewDestLength[0];
        pcchNewDestLength[0] = cchDest - pcchNewDestLength[0];
        v12 = &pszDest[v16];
        ppszDestEnd = v12;
        if ( v9 < 0 )
          goto LABEL_7;
        if ( (dwFlags & 0x200) != 0 && v13 > 1 )
          StringExHandleFillBehindNullW(&pszDest[v16], 2 * v13, dwFlags);
      }
      else if ( *ppszSrc != (_WORD)v14 )
      {
        if ( !pszDest )
        {
          v9 = -2147024809;
          goto LABEL_7;
        }
        v9 = -2147024774;
      }
      if ( v9 >= 0 )
      {
LABEL_12:
        if ( a3 )
          *a3 = v12;
        if ( a4 )
          *a4 = v13;
        return (unsigned int)v9;
      }
      goto LABEL_7;
    }
    v9 = -2147024809;
  }
  if ( cchDest )
    *pszDest = v14;
LABEL_7:
  if ( (dwFlags & 0x1C00) != 0 && cchDest )
  {
    StringExHandleOtherFlagsW(pszDest, 2 * cchDest, v15, &ppszDestEnd, pcchNewDestLength, dwFlags);
    v12 = ppszDestEnd;
    v13 = pcchNewDestLength[0];
  }
  if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147024774 )
    goto LABEL_12;
  return (unsigned int)v9;
}
