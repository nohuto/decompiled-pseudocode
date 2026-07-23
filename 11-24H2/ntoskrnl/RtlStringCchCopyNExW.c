/*
 * XREFs of RtlStringCchCopyNExW @ 0x140423600
 * Callers:
 *     punycode_encode @ 0x140784DD4 (punycode_encode.c)
 *     EtwpQueryTokenPackageInfo @ 0x1408EFE7C (EtwpQueryTokenPackageInfo.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x140980950 (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x140A1FEAC (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     _CmSplitDevicePanelId @ 0x140AB0C0C (_CmSplitDevicePanelId.c)
 * Callees:
 *     StringExHandleOtherFlagsW @ 0x140412250 (StringExHandleOtherFlagsW.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

NTSTATUS __stdcall RtlStringCchCopyNExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags)
{
  NTSTATUS v10; // r11d
  NTSTATUS v11; // ebx
  size_t v12; // r8
  NTSTRSAFE_PWSTR v13; // rbp
  size_t v14; // rdi
  int v15; // esi
  size_t v16; // r9
  size_t v17; // rax
  signed __int64 v18; // r10
  NTSTRSAFE_PWSTR v19; // rdx
  wchar_t v20; // cx
  NTSTRSAFE_PWSTR v21; // rcx
  size_t v22; // rcx
  NTSTATUS result; // eax
  int v24; // eax
  STRSAFE_LPWSTR v25; // [rsp+30h] [rbp-38h] BYREF
  size_t v26[6]; // [rsp+38h] [rbp-30h] BYREF

  v10 = 0;
  v11 = -1073741811;
  v12 = dwFlags & 0x100;
  if ( (dwFlags & 0x100) == 0 )
  {
    if ( cchDest - 1 <= 0x7FFFFFFE )
      goto LABEL_3;
    goto LABEL_42;
  }
  if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
LABEL_42:
    v10 = -1073741811;
LABEL_3:
  if ( v10 >= 0 )
  {
    v13 = pszDest;
    v14 = cchDest;
    v25 = pszDest;
    v26[0] = cchDest;
    if ( cchToCopy >= 0x7FFFFFFF )
    {
      if ( cchDest )
        *pszDest = 0;
    }
    else
    {
      if ( (dwFlags & 0x100) != 0 && !pszSrc )
      {
        pszSrc = &SourceString;
        cchToCopy = 0LL;
      }
      v15 = 0;
      if ( (dwFlags & 0xFFFFE000) != 0 )
      {
        if ( cchDest )
          *pszDest = 0;
      }
      else
      {
        if ( cchDest )
        {
          v16 = cchToCopy - cchDest;
          v17 = cchDest;
          v18 = (char *)pszSrc - (char *)pszDest;
          v19 = pszDest;
          v12 = 0LL;
          do
          {
            if ( !(v16 + v17) )
              break;
            v20 = *(NTSTRSAFE_PWSTR)((char *)v19 + v18);
            if ( !v20 )
              break;
            *v19 = v20;
            ++v12;
            ++v19;
            --v17;
          }
          while ( v17 );
          v21 = v19 - 1;
          v15 = -2147483643;
          if ( v17 )
          {
            v21 = v19;
            v15 = 0;
          }
          *v21 = 0;
          v22 = v12 - 1;
          if ( v17 )
            v22 = v12;
          v14 = cchDest - v22;
          v26[0] = cchDest - v22;
          v13 = &pszDest[v22];
          v25 = v13;
          if ( v17 )
          {
            if ( (dwFlags & 0x200) != 0 && v14 > 1 )
            {
              v12 = 2 * v14;
              if ( 2 * v14 > 2 )
                memset_0(v13 + 1, (unsigned __int8)dwFlags, v12 - 2);
            }
          }
        }
        else if ( cchToCopy && *pszSrc )
        {
          v24 = -2147483643;
          if ( !pszDest )
            v24 = -1073741811;
          v11 = v24;
          goto LABEL_33;
        }
        v11 = v15;
        if ( v15 >= 0 )
        {
LABEL_18:
          if ( ppszDestEnd )
            *ppszDestEnd = v13;
          if ( pcchRemaining )
            *pcchRemaining = v14;
          return v11;
        }
      }
    }
LABEL_33:
    if ( (dwFlags & 0x1C00) != 0 && cchDest )
    {
      StringExHandleOtherFlagsW(pszDest, 2 * cchDest, v12, &v25, v26, dwFlags);
      v13 = v25;
      v14 = v26[0];
    }
    if ( v11 != -2147483643 )
      return v11;
    goto LABEL_18;
  }
  result = v10;
  if ( cchDest )
    *pszDest = 0;
  return result;
}
