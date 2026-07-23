/*
 * XREFs of RtlStringCchCopyExW @ 0x140412020
 * Callers:
 *     PiDevCfgQueryPolicyStringList @ 0x140729008 (PiDevCfgQueryPolicyStringList.c)
 *     PiCMGenerateDeviceInstance @ 0x14072F37C (PiCMGenerateDeviceInstance.c)
 *     _CmClassSubkeyCallback @ 0x14081B650 (_CmClassSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14081B760 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x14081BC70 (_CmEnumSubkeyCallback.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14081C3C0 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14081D7D0 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _PnpObjectListCallback @ 0x1408211C0 (_PnpObjectListCallback.c)
 *     DrvDbDeleteObjectSubKey @ 0x140821D0C (DrvDbDeleteObjectSubKey.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x1408B4F88 (_CmGetDeviceInterfaceReferenceString.c)
 *     _CmGetDeviceInterfaceName @ 0x1408B54E4 (_CmGetDeviceInterfaceName.c)
 *     IopGetDeviceInterfaces @ 0x1408C5EA0 (IopGetDeviceInterfaces.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x14092644C (DrvDbGetDriverPackageMappedProperty.c)
 *     _RegRtlCreateTreeTransacted @ 0x1409282E4 (_RegRtlCreateTreeTransacted.c)
 *     _CmGetDeviceParent @ 0x140928AD8 (_CmGetDeviceParent.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x14097EBEC (DrvDbGetDeviceIdDriverInfMatches.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x14097EE5C (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x14097F518 (_PnpGetGenericStorePropertyLocales.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1409AA8EC (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     PnpGetDeviceDependencyList @ 0x1409BBE9C (PnpGetDeviceDependencyList.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1409F8880 (DrvDbGetObjectSubKeyCallback.c)
 *     _RegRtlDeletePathInternal @ 0x140A64448 (_RegRtlDeletePathInternal.c)
 *     PiCMCreateDevice @ 0x140AB39A4 (PiCMCreateDevice.c)
 * Callees:
 *     StringExHandleOtherFlagsW @ 0x140412250 (StringExHandleOtherFlagsW.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

NTSTATUS __stdcall RtlStringCchCopyExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PCWSTR pszSrc,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags)
{
  NTSTATUS v10; // ebx
  size_t v11; // r8
  NTSTRSAFE_PWSTR v12; // rsi
  size_t v13; // rdi
  NTSTATUS v14; // ebx
  size_t v15; // r11
  size_t v16; // rax
  signed __int64 v17; // r10
  NTSTRSAFE_PWSTR v18; // rdx
  wchar_t v19; // cx
  NTSTRSAFE_PWSTR v20; // rcx
  size_t v21; // rcx
  NTSTATUS result; // eax
  STRSAFE_LPWSTR ppszDestEnda; // [rsp+30h] [rbp-28h] BYREF
  size_t v24[4]; // [rsp+38h] [rbp-20h] BYREF

  v10 = 0;
  v11 = dwFlags & 0x100;
  if ( (dwFlags & 0x100) == 0 )
  {
    if ( cchDest - 1 <= 0x7FFFFFFE )
      goto LABEL_4;
    goto LABEL_33;
  }
  if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
LABEL_33:
    v10 = -1073741811;
LABEL_4:
  if ( v10 >= 0 )
  {
    v12 = pszDest;
    v13 = cchDest;
    ppszDestEnda = pszDest;
    v24[0] = cchDest;
    if ( (dwFlags & 0x100) != 0 && !pszSrc )
      pszSrc = &SourceString;
    v14 = 0;
    if ( (dwFlags & 0xFFFFE000) == 0 )
    {
      if ( cchDest )
      {
        v15 = 2147483646 - cchDest;
        v16 = cchDest;
        v17 = (char *)pszSrc - (char *)pszDest;
        v18 = pszDest;
        v11 = 0LL;
        do
        {
          if ( !(v15 + v16) )
            break;
          v19 = *(NTSTRSAFE_PWSTR)((char *)v18 + v17);
          if ( !v19 )
            break;
          *v18 = v19;
          ++v11;
          ++v18;
          --v16;
        }
        while ( v16 );
        v20 = v18 - 1;
        v14 = -2147483643;
        if ( v16 )
        {
          v20 = v18;
          v14 = 0;
        }
        *v20 = 0;
        v21 = v11 - 1;
        if ( v16 )
          v21 = v11;
        v13 = cchDest - v21;
        v24[0] = cchDest - v21;
        v12 = &pszDest[v21];
        ppszDestEnda = v12;
        if ( !v16 )
          goto LABEL_19;
        if ( (dwFlags & 0x200) != 0 && v13 > 1 && 2 * v13 > 2 )
          memset_0(v12 + 1, (unsigned __int8)dwFlags, 2 * v13 - 2);
      }
      else if ( *pszSrc )
      {
        if ( pszDest )
          v14 = -2147483643;
        else
          v14 = -1073741811;
        goto LABEL_19;
      }
LABEL_26:
      if ( ppszDestEnd )
        *ppszDestEnd = v12;
      if ( pcchRemaining )
        *pcchRemaining = v13;
      return v14;
    }
    v14 = -1073741811;
    if ( cchDest )
      *pszDest = 0;
LABEL_19:
    if ( (dwFlags & 0x1C00) != 0 && cchDest )
    {
      StringExHandleOtherFlagsW(pszDest, 2 * cchDest, v11, &ppszDestEnda, v24, dwFlags);
      v12 = ppszDestEnda;
      v13 = v24[0];
    }
    if ( v14 != -2147483643 )
      return v14;
    goto LABEL_26;
  }
  result = v10;
  if ( cchDest )
    *pszDest = 0;
  return result;
}
