/*
 * XREFs of StringExHandleOtherFlagsW @ 0x140412250
 * Callers:
 *     RtlStringCchCopyExW @ 0x140412020 (RtlStringCchCopyExW.c)
 *     RtlStringCchPrintfExW @ 0x140418B60 (RtlStringCchPrintfExW.c)
 *     RtlStringCbPrintfExW @ 0x140423038 (RtlStringCbPrintfExW.c)
 *     RtlStringCchCopyNExW @ 0x140423600 (RtlStringCchCopyNExW.c)
 *     RtlStringCbCopyExW @ 0x1404447AC (RtlStringCbCopyExW.c)
 *     StringCchPrintfExW @ 0x1406985D8 (StringCchPrintfExW.c)
 *     _CmGetDeviceInterfaceName @ 0x1408B54E4 (_CmGetDeviceInterfaceName.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1408B9CCC (_CmIsDeviceSafeRemovalRequired.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1408BC0A0 (PiCMGetRelatedDeviceInstance.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1408C6D90 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmValidateDeviceInterfaceName @ 0x1408C77C0 (_CmValidateDeviceInterfaceName.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1408C7D90 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     EtwpQueryTokenPackageInfo @ 0x1408EFE7C (EtwpQueryTokenPackageInfo.c)
 *     _CmGetDeviceChildren @ 0x1409AB39C (_CmGetDeviceChildren.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1409C4380 (PiPnpRtlGetFilteredDeviceList.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

HRESULT __stdcall StringExHandleOtherFlagsW(
        STRSAFE_LPWSTR pszDest,
        size_t cbDest,
        size_t cchOriginalDestLength,
        STRSAFE_LPWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        DWORD dwFlags)
{
  size_t v7; // rdi
  wchar_t *v10; // rax

  v7 = cbDest >> 1;
  if ( cbDest >> 1 && (dwFlags & 0x1000) != 0 )
  {
    *ppszDestEnd = pszDest;
    *pcchRemaining = v7;
    *pszDest = 0;
  }
  if ( (dwFlags & 0x400) == 0 )
  {
LABEL_7:
    if ( !v7 )
      return 0;
    goto LABEL_8;
  }
  memset_0(pszDest, (unsigned __int8)dwFlags, cbDest);
  if ( !(_BYTE)dwFlags )
  {
    *ppszDestEnd = pszDest;
    *pcchRemaining = v7;
    goto LABEL_7;
  }
  if ( !v7 )
    return 0;
  *pcchRemaining = 1LL;
  v10 = &pszDest[v7 - 1];
  *ppszDestEnd = v10;
  *v10 = 0;
LABEL_8:
  if ( (dwFlags & 0x800) != 0 )
  {
    *ppszDestEnd = pszDest;
    *pcchRemaining = v7;
    *pszDest = 0;
  }
  return 0;
}
