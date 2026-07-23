/*
 * XREFs of RtlStringCbCopyExW @ 0x1404447AC
 * Callers:
 *     _PnpMultiSzAppend @ 0x1409AAF98 (_PnpMultiSzAppend.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1409ABB00 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     RtlFormatMessageEx @ 0x140A685FC (RtlFormatMessageEx.c)
 *     ConvertDevpropertyToString @ 0x140A8A040 (ConvertDevpropertyToString.c)
 *     PiDqConvertQueryFlagsToString @ 0x140AB820C (PiDqConvertQueryFlagsToString.c)
 *     ExpressionConvertToString @ 0x140AB9C18 (ExpressionConvertToString.c)
 * Callees:
 *     StringExHandleOtherFlagsW @ 0x140412250 (StringExHandleOtherFlagsW.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

NTSTATUS __stdcall RtlStringCbCopyExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cbDest,
        NTSTRSAFE_PCWSTR pszSrc,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcbRemaining,
        ULONG dwFlags)
{
  DWORD v6; // r15d
  wchar_t *v7; // rsi
  size_t v8; // rdi
  NTSTATUS v11; // ebx
  NTSTRSAFE_PWSTR v12; // rbp
  size_t v13; // rdx
  __int64 v14; // r9
  wchar_t v15; // ax
  NTSTRSAFE_PWSTR v16; // rax
  __int64 v17; // rcx
  const wchar_t *v19; // rax
  size_t pcchRemaining[2]; // [rsp+30h] [rbp-38h] BYREF
  STRSAFE_LPWSTR ppszDestEnda; // [rsp+78h] [rbp+10h] BYREF

  v6 = dwFlags;
  v7 = pszDest;
  v8 = cbDest >> 1;
  v11 = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && v8 || v8 > 0x7FFFFFFF )
      v11 = -1073741811;
  }
  else if ( v8 - 1 > 0x7FFFFFFE )
  {
    v11 = -1073741811;
  }
  if ( v11 < 0 )
  {
    if ( v8 )
      *pszDest = 0;
  }
  else
  {
    ppszDestEnda = pszDest;
    v12 = pszDest;
    pcchRemaining[0] = cbDest >> 1;
    if ( (dwFlags & 0x100) != 0 )
    {
      v19 = &SourceString;
      if ( pszSrc )
        v19 = pszSrc;
      pszSrc = v19;
    }
    v11 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v11 = -1073741811;
      if ( v8 )
        *pszDest = 0;
    }
    else
    {
      if ( v8 )
      {
        v13 = cbDest >> 1;
        pszSrc = (NTSTRSAFE_PCWSTR)((char *)pszSrc - (__int64)pszDest);
        v14 = 0LL;
        do
        {
          if ( !(2147483646 - v8 + v13) )
            break;
          v15 = *(NTSTRSAFE_PWSTR)((char *)pszDest + (_QWORD)pszSrc);
          if ( !v15 )
            break;
          *pszDest = v15;
          ++v14;
          ++pszDest;
          --v13;
        }
        while ( v13 );
        v16 = pszDest - 1;
        if ( v13 )
          v16 = pszDest;
        v17 = v14 - 1;
        if ( v13 )
          v17 = v14;
        *v16 = 0;
        v12 = &v7[v17];
        ppszDestEnda = v12;
        v8 -= v17;
        pcchRemaining[0] = v8;
        v11 = v13 == 0 ? 0x80000005 : 0;
        if ( v13 )
        {
          if ( (v6 & 0x200) != 0 )
          {
            pszSrc = (NTSTRSAFE_PCWSTR)((cbDest & 1) + 2 * v8);
            if ( (unsigned __int64)pszSrc > 2 )
              memset_0(v12 + 1, (unsigned __int8)v6, (size_t)(pszSrc - 1));
          }
        }
      }
      else
      {
        if ( !*pszSrc )
          goto LABEL_18;
        v11 = pszDest != 0LL ? -2147483643 : -1073741811;
      }
      if ( v11 >= 0 )
      {
LABEL_18:
        if ( ppszDestEnd )
          *ppszDestEnd = v12;
        if ( pcbRemaining )
          *pcbRemaining = (cbDest & 1) + 2 * v8;
        return v11;
      }
    }
    if ( (v6 & 0x1C00) != 0 && cbDest )
    {
      StringExHandleOtherFlagsW(v7, cbDest, (size_t)pszSrc, &ppszDestEnda, pcchRemaining, v6);
      v12 = ppszDestEnda;
      v8 = pcchRemaining[0];
    }
    if ( v11 == -2147483643 )
      goto LABEL_18;
  }
  return v11;
}
