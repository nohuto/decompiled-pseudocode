/*
 * XREFs of RtlStringCbPrintfExW @ 0x140423038
 * Callers:
 *     RtlQueryPackageIdentityEx @ 0x140422890 (RtlQueryPackageIdentityEx.c)
 *     RtlQueryPackageIdentity @ 0x140422B10 (RtlQueryPackageIdentity.c)
 *     RtlQueryPackageClaims @ 0x140422D20 (RtlQueryPackageClaims.c)
 *     WmipGenerateBinaryMofNotification @ 0x1407A5BA8 (WmipGenerateBinaryMofNotification.c)
 *     EtwpQueryPsmKey @ 0x1407AA568 (EtwpQueryPsmKey.c)
 *     PiNormalizeDeviceText @ 0x1409B8420 (PiNormalizeDeviceText.c)
 *     ConvertDevpropertyToString @ 0x140A8A040 (ConvertDevpropertyToString.c)
 *     ConvertDevpropcompkeyToString @ 0x140A8A758 (ConvertDevpropcompkeyToString.c)
 *     PipCreateComputerId @ 0x140C22418 (PipCreateComputerId.c)
 * Callees:
 *     StringExHandleOtherFlagsW @ 0x140412250 (StringExHandleOtherFlagsW.c)
 *     _vsnwprintf @ 0x1404FAB20 (_vsnwprintf.c)
 *     RtlStringExHandleFillBehindNullW @ 0x1405A0ED4 (RtlStringExHandleFillBehindNullW.c)
 */

NTSTATUS RtlStringCbPrintfExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cbDest,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcbRemaining,
        ULONG dwFlags,
        NTSTRSAFE_PCWSTR pszFormat,
        ...)
{
  size_t v7; // rdi
  NTSTATUS v9; // ebx
  const wchar_t *v10; // r8
  wchar_t *v11; // r15
  unsigned __int64 v12; // rsi
  int v13; // eax
  STRSAFE_LPWSTR ppszDestEnda; // [rsp+30h] [rbp-18h] BYREF
  size_t pcchRemaining[2]; // [rsp+38h] [rbp-10h] BYREF
  size_t *v18; // [rsp+A8h] [rbp+60h]
  va_list Args; // [rsp+C0h] [rbp+78h] BYREF

  va_start(Args, pszFormat);
  v18 = pcbRemaining;
  v7 = cbDest >> 1;
  v9 = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && v7 || v7 > 0x7FFFFFFF )
      v9 = -1073741811;
  }
  else if ( v7 - 1 > 0x7FFFFFFE )
  {
    v9 = -1073741811;
  }
  if ( v9 < 0 )
  {
    if ( v7 )
      *pszDest = 0;
    return v9;
  }
  v10 = pszFormat;
  v11 = pszDest;
  ppszDestEnda = pszDest;
  pcchRemaining[0] = cbDest >> 1;
  if ( (dwFlags & 0x100) != 0 && !pszFormat )
    v10 = &SourceString;
  v9 = 0;
  if ( (dwFlags & 0xFFFFE000) != 0 )
  {
    v9 = -1073741811;
    if ( v7 )
      *pszDest = 0;
  }
  else
  {
    if ( v7 )
    {
      pcchRemaining[0] = 0LL;
      v12 = v7 - 1;
      v13 = vsnwprintf(pszDest, v7 - 1, v10, Args);
      if ( v13 < 0 || v13 > v12 )
      {
        v9 = -2147483643;
      }
      else if ( v13 != v12 )
      {
        v12 = v13;
        goto LABEL_12;
      }
      pszDest[v12] = 0;
LABEL_12:
      v7 -= v12;
      v11 = &pszDest[v12];
      ppszDestEnda = v11;
      pcchRemaining[0] = v7;
      if ( v9 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 )
          RtlStringExHandleFillBehindNullW(&pszDest[v12], (cbDest & 1) + 2 * v7, dwFlags);
LABEL_15:
        pcbRemaining = v18;
LABEL_16:
        if ( ppszDestEnd )
          *ppszDestEnd = v11;
        if ( pcbRemaining )
          *pcbRemaining = (cbDest & 1) + 2 * v7;
        return v9;
      }
      goto LABEL_35;
    }
    if ( !*v10 )
      goto LABEL_16;
    v9 = pszDest != 0LL ? -2147483643 : -1073741811;
  }
LABEL_35:
  if ( (dwFlags & 0x1C00) != 0 && cbDest )
  {
    StringExHandleOtherFlagsW(pszDest, cbDest, (size_t)v10, &ppszDestEnda, pcchRemaining, dwFlags);
    v11 = ppszDestEnda;
    v7 = pcchRemaining[0];
  }
  if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
    goto LABEL_15;
  return v9;
}
