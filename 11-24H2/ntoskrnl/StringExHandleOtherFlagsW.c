/*
 * XREFs of StringExHandleOtherFlagsW @ 0x14041DE80
 * Callers:
 *     RtlStringCbPrintfExW @ 0x140356698 (RtlStringCbPrintfExW.c)
 *     RtlStringCchCopyExW @ 0x14041DC50 (RtlStringCchCopyExW.c)
 *     RtlStringCchPrintfExW @ 0x140424CB0 (RtlStringCchPrintfExW.c)
 *     RtlStringCchCopyNExW @ 0x1404310C0 (RtlStringCchCopyNExW.c)
 *     RtlStringCbCopyExW @ 0x14044D8AC (RtlStringCbCopyExW.c)
 *     StringCchPrintfExW @ 0x140697558 (StringCchPrintfExW.c)
 *     _CmGetDeviceInterfaceName @ 0x1408B7B74 (_CmGetDeviceInterfaceName.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1408BC37C (_CmIsDeviceSafeRemovalRequired.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1408BE750 (PiCMGetRelatedDeviceInstance.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1408C9360 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmValidateDeviceInterfaceName @ 0x1408C9D90 (_CmValidateDeviceInterfaceName.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1408CA360 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     EtwpQueryTokenPackageInfo @ 0x14094B90C (EtwpQueryTokenPackageInfo.c)
 *     _CmGetDeviceChildren @ 0x1409B400C (_CmGetDeviceChildren.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1409D4550 (PiPnpRtlGetFilteredDeviceList.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
