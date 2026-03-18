/*
 * XREFs of StringExHandleOtherFlagsW @ 0x140420C10
 * Callers:
 *     RtlStringCbPrintfExW @ 0x140292E0C (RtlStringCbPrintfExW.c)
 *     RtlStringCchCopyExW @ 0x1404209E0 (RtlStringCchCopyExW.c)
 *     RtlStringCchPrintfExW @ 0x14042CC40 (RtlStringCchPrintfExW.c)
 *     RtlStringCchCopyNExW @ 0x140435520 (RtlStringCchCopyNExW.c)
 *     RtlStringCbCopyExW @ 0x14044DE0C (RtlStringCbCopyExW.c)
 *     StringCchPrintfExW @ 0x14068C208 (StringCchPrintfExW.c)
 *     EtwpQueryTokenPackageInfo @ 0x1408BE7AC (EtwpQueryTokenPackageInfo.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1409342F0 (PiCMGetRelatedDeviceInstance.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x14094FB0C (PiPnpRtlGetFilteredDeviceList.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x140958260 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmValidateDeviceInterfaceName @ 0x140958C90 (_CmValidateDeviceInterfaceName.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x140959250 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetDeviceInterfaceName @ 0x14095A988 (_CmGetDeviceInterfaceName.c)
 *     _CmGetDeviceChildren @ 0x1409A839C (_CmGetDeviceChildren.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1409A8AF8 (_CmIsDeviceSafeRemovalRequired.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
