/*
 * XREFs of _CmGetDeviceInterfaceName @ 0x1408B54E4
 * Callers:
 *     IopRegisterDeviceInterface @ 0x1408B141C (IopRegisterDeviceInterface.c)
 *     IoGetDeviceInterfaceAlias @ 0x1408B4A00 (IoGetDeviceInterfaceAlias.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140412020 (RtlStringCchCopyExW.c)
 *     StringExHandleOtherFlagsW @ 0x140412250 (StringExHandleOtherFlagsW.c)
 *     PnpIsValidGuidString @ 0x1408B5960 (PnpIsValidGuidString.c)
 *     _CmValidateDeviceName @ 0x1408B59E0 (_CmValidateDeviceName.c)
 */

int __fastcall CmGetDeviceInterfaceName(
        __int64 a1,
        const wchar_t *a2,
        const wchar_t *a3,
        const wchar_t *a4,
        char a5,
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        _DWORD *a8)
{
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r15
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  const wchar_t *v15; // r8
  int result; // eax
  wchar_t *v17; // r14
  size_t v18; // rdi
  wchar_t *v19; // r9
  size_t v20; // r8
  int v21; // ebx
  size_t v22; // r8
  size_t v23; // rdx
  NTSTRSAFE_PWSTR v24; // rcx
  __int64 v25; // r10
  wchar_t v26; // ax
  NTSTRSAFE_PWSTR v27; // rax
  __int64 v28; // rcx
  int v29; // esi
  NTSTRSAFE_PWSTR j; // rdx
  wchar_t v31; // cx
  const wchar_t *i; // rdx
  wchar_t v33; // ax
  wchar_t *v34; // rsi
  size_t v35; // rdi
  size_t v36; // r9
  size_t v37; // r8
  size_t v38; // rdx
  NTSTRSAFE_PWSTR v39; // rcx
  __int64 v40; // r8
  wchar_t v41; // ax
  NTSTRSAFE_PWSTR v42; // rax
  __int64 v43; // rcx
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+30h] [rbp-20h] BYREF
  STRSAFE_LPWSTR v45; // [rsp+38h] [rbp-18h] BYREF
  size_t pcchRemaining[2]; // [rsp+40h] [rbp-10h] BYREF
  size_t cchOriginalDestLength; // [rsp+90h] [rbp+40h] BYREF
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+98h] [rbp+48h]

  pszSrc = a2;
  ppszDestEnd = 0LL;
  cchOriginalDestLength = 0LL;
  if ( !(unsigned __int8)PnpIsValidGuidString(a2) || (int)CmValidateDeviceName(v10, a3) < 0 )
    return -1073741811;
  v11 = -1LL;
  if ( !a4 )
  {
    v12 = 0LL;
    goto LABEL_5;
  }
  v12 = -1LL;
  do
    ++v12;
  while ( a4[v12] );
  if ( (unsigned __int64)(v12 - 1) > 0x102 )
    return -1073741811;
  for ( i = a4; ; ++i )
  {
    v33 = *i;
    if ( !*i )
      break;
    if ( v33 == 92 || v33 == 47 )
      return -1073741773;
  }
  do
LABEL_5:
    ++v11;
  while ( a3[v11] );
  v13 = v11 + 44;
  v14 = v12 + 2;
  if ( !v12 )
    v14 = v13;
  if ( v14 > 0xFFFFFFFF )
    return -1073741675;
  if ( a8 )
    *a8 = v14;
  if ( (unsigned int)v14 > (unsigned int)cchDest )
    return -1073741789;
  v15 = L"\\??\\";
  if ( !a5 )
    v15 = L"\\\\?\\";
  result = RtlStringCchCopyExW(pszDest, (unsigned int)cchDest, v15, &ppszDestEnd, &cchOriginalDestLength, 0x900u);
  if ( result >= 0 )
  {
    result = RtlStringCchCopyExW(ppszDestEnd, cchOriginalDestLength, a3, &ppszDestEnd, &cchOriginalDestLength, 0x900u);
    if ( result >= 0 )
    {
      v17 = ppszDestEnd;
      v18 = cchOriginalDestLength;
      if ( !ppszDestEnd && cchOriginalDestLength || cchOriginalDestLength > 0x7FFFFFFF )
      {
        v21 = -1073741811;
        v29 = -1073741811;
        result = -1073741811;
        if ( cchOriginalDestLength )
        {
          *ppszDestEnd = 0;
          return result;
        }
      }
      else
      {
        v45 = ppszDestEnd;
        v19 = ppszDestEnd;
        pcchRemaining[0] = cchOriginalDestLength;
        v20 = cchOriginalDestLength;
        v21 = -1073741811;
        if ( cchOriginalDestLength )
        {
          v22 = 2147483646 - cchOriginalDestLength;
          v23 = cchOriginalDestLength;
          v24 = ppszDestEnd;
          v25 = 0LL;
          do
          {
            if ( !(v23 + v22) )
              break;
            v26 = *(NTSTRSAFE_PWSTR)((char *)v24 + (char *)L"#" - (char *)v17);
            if ( !v26 )
              break;
            *v24 = v26;
            ++v25;
            ++v24;
            --v23;
          }
          while ( v23 );
          v27 = v24 - 1;
          if ( v23 )
            v27 = v24;
          v28 = v25 - 1;
          if ( v23 )
            v28 = v25;
          *v27 = 0;
          v19 = &v17[v28];
          v45 = v19;
          v20 = v18 - v28;
          pcchRemaining[0] = v18 - v28;
          v29 = v23 == 0 ? 0x80000005 : 0;
          if ( v23 )
            goto LABEL_28;
        }
        else
        {
          v29 = ppszDestEnd != 0LL ? -2147483643 : -1073741811;
        }
        if ( v18 )
        {
          StringExHandleOtherFlagsW(v17, 2 * v18, v20, &v45, pcchRemaining, 0x900u);
          v19 = v45;
          v20 = pcchRemaining[0];
        }
        if ( v29 == -2147483643 )
        {
LABEL_28:
          v17 = v19;
          ppszDestEnd = v19;
          v18 = v20;
          cchOriginalDestLength = v20;
        }
      }
      result = v29;
      if ( v29 < 0 )
        return result;
      result = RtlStringCchCopyExW(v17, v18, pszSrc, &ppszDestEnd, &cchOriginalDestLength, 0x900u);
      if ( result < 0 )
        return result;
      for ( j = pszDest + 4; ; ++j )
      {
        v31 = *j;
        if ( !*j )
          break;
        if ( v31 == 92 || v31 == 47 )
          *j = 35;
      }
      if ( !v12 )
        return result;
      v34 = ppszDestEnd;
      v35 = cchOriginalDestLength;
      if ( !ppszDestEnd && cchOriginalDestLength || cchOriginalDestLength > 0x7FFFFFFF )
      {
        result = -1073741811;
        if ( cchOriginalDestLength )
        {
          *ppszDestEnd = 0;
          return result;
        }
        goto LABEL_62;
      }
      cchOriginalDestLength = (size_t)ppszDestEnd;
      v36 = (size_t)ppszDestEnd;
      pcchRemaining[0] = v35;
      v37 = v35;
      if ( v35 )
      {
        v38 = v35;
        v39 = ppszDestEnd;
        v40 = 0LL;
        do
        {
          if ( !(v38 + 2147483646 - v35) )
            break;
          v41 = *(NTSTRSAFE_PWSTR)((char *)v39 + (char *)L"\\" - (char *)v34);
          if ( !v41 )
            break;
          *v39 = v41;
          ++v40;
          ++v39;
          --v38;
        }
        while ( v38 );
        v42 = v39 - 1;
        if ( v38 )
          v42 = v39;
        v43 = v40 - 1;
        if ( v38 )
          v43 = v40;
        *v42 = 0;
        v36 = (size_t)&v34[v43];
        cchOriginalDestLength = v36;
        v37 = v35 - v43;
        pcchRemaining[0] = v35 - v43;
        v21 = v38 == 0 ? 0x80000005 : 0;
        if ( v38 )
        {
LABEL_61:
          v34 = (wchar_t *)v36;
          v35 = v37;
LABEL_62:
          result = v21;
          if ( v21 >= 0 )
            return RtlStringCchCopyExW(v34, v35, a4, &ppszDestEnd, &cchOriginalDestLength, 0x900u);
          return result;
        }
      }
      else
      {
        v21 = ppszDestEnd != 0LL ? -2147483643 : -1073741811;
      }
      if ( v35 )
      {
        StringExHandleOtherFlagsW(v34, 2 * v35, v37, (STRSAFE_LPWSTR *)&cchOriginalDestLength, pcchRemaining, 0x900u);
        v36 = cchOriginalDestLength;
        v37 = pcchRemaining[0];
      }
      if ( v21 != -2147483643 )
        goto LABEL_62;
      goto LABEL_61;
    }
  }
  return result;
}
