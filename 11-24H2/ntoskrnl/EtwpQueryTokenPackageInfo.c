/*
 * XREFs of EtwpQueryTokenPackageInfo @ 0x14094B90C
 * Callers:
 *     EtwpPsProvProcessEnumCallback @ 0x14093A830 (EtwpPsProvProcessEnumCallback.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14094B234 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpBuildProcessEvent @ 0x14094B5C0 (EtwpBuildProcessEvent.c)
 *     EtwTraceAppStateChange @ 0x14094C00C (EtwTraceAppStateChange.c)
 * Callees:
 *     SeSecurityAttributePresent @ 0x1403438C0 (SeSecurityAttributePresent.c)
 *     RtlQueryPackageIdentity @ 0x140356170 (RtlQueryPackageIdentity.c)
 *     StringExHandleOtherFlagsW @ 0x14041DE80 (StringExHandleOtherFlagsW.c)
 *     RtlStringCchCopyNExW @ 0x1404310C0 (RtlStringCchCopyNExW.c)
 *     wcschr @ 0x1404FFD90 (wcschr.c)
 */

int __fastcall EtwpQueryTokenPackageInfo(__int64 a1, __int64 a2, _DWORD *a3)
{
  size_t *v3; // rsi
  char v7; // bl
  char v8; // r12
  unsigned __int64 v9; // rax
  const wchar_t *v10; // rcx
  size_t v11; // r9
  unsigned __int64 v12; // rbx
  size_t v13; // r15
  size_t v14; // rbx
  wchar_t *v15; // r14
  size_t v16; // r8
  wchar_t *v17; // r9
  size_t v18; // r8
  size_t v19; // rdx
  NTSTRSAFE_PWSTR v20; // rcx
  __int64 v21; // r10
  wchar_t v22; // ax
  NTSTRSAFE_PWSTR v23; // rax
  __int64 v24; // rcx
  int v25; // esi
  NTSTRSAFE_PWSTR pszDest; // [rsp+88h] [rbp+48h] BYREF
  size_t cchDest; // [rsp+98h] [rbp+58h] BYREF

  v3 = (size_t *)(a2 + 8);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  v7 = SeSecurityAttributePresent(a1, (const UNICODE_STRING *)&PspSysAppIdClaim);
  v8 = SeSecurityAttributePresent(a1, (const UNICODE_STRING *)&PspPackagedAppClaim);
  if ( v7 )
  {
    *a3 |= 1u;
    *(_QWORD *)a2 = 256LL;
    *v3 = 130LL;
    if ( (int)RtlQueryPackageIdentity(a1, (NTSTRSAFE_PWSTR)(a2 + 24), (size_t *)a2, (wchar_t *)(a2 + 280), v3, 0LL) < 0 )
    {
      *v3 = 0LL;
      v3 = (size_t *)(a2 + 8);
      *(_QWORD *)a2 = 0LL;
    }
    if ( v8 )
      *a3 |= 8u;
  }
  v9 = *(_QWORD *)a2;
  v10 = (const wchar_t *)(a2 + 24);
  if ( !*(_QWORD *)a2 )
  {
    *(_QWORD *)a2 = 2LL;
    v9 = 2LL;
    *v10 = 0;
  }
  if ( !*v3 )
  {
    *v3 = 2LL;
    *(_WORD *)(a2 + 280) = 0;
  }
  *(_QWORD *)(a2 + 16) = 2LL;
  *(_WORD *)(a2 + 410) = 0;
  if ( v9 <= 2 )
    return v9;
  if ( *v3 <= 2 )
    return v9;
  v9 = (unsigned __int64)wcschr(v10, 0x5Fu);
  if ( !v9 )
    return v9;
  v11 = (__int64)(v9 - a2 - 22) >> 1;
  v12 = (*(_QWORD *)a2 >> 1) - 1LL;
  if ( v12 <= 0xD )
    return v9;
  v13 = (*(_QWORD *)(a2 + 8) >> 1) - 1LL;
  v9 = 2 * (v13 + v11) + 30;
  if ( v9 > 0x104 )
    return v9;
  pszDest = 0LL;
  cchDest = 130LL;
  LODWORD(v9) = RtlStringCchCopyNExW(
                  (NTSTRSAFE_PWSTR)(a2 + 410),
                  0x82uLL,
                  (STRSAFE_PCNZWCH)(a2 + 24),
                  v11,
                  &pszDest,
                  &cchDest,
                  0x800u);
  if ( (v9 & 0x80000000) != 0LL )
    goto LABEL_35;
  LODWORD(v9) = RtlStringCchCopyNExW(
                  pszDest,
                  cchDest,
                  (STRSAFE_PCNZWCH)(a2 - 2 + 2 * v12),
                  0xDuLL,
                  &pszDest,
                  &cchDest,
                  0x800u);
  if ( (v9 & 0x80000000) != 0LL )
    goto LABEL_35;
  v14 = cchDest;
  LODWORD(v9) = cchDest - 1;
  if ( cchDest - 1 > 0x7FFFFFFE )
  {
    if ( cchDest )
    {
      LODWORD(v9) = (_DWORD)pszDest;
      *pszDest = 0;
    }
    goto LABEL_35;
  }
  v15 = pszDest;
  v16 = cchDest;
  v17 = pszDest;
  if ( cchDest )
  {
    v18 = 1 - cchDest;
    v19 = cchDest;
    v20 = pszDest;
    v21 = 0LL;
    do
    {
      if ( !(v18 + v19) )
        break;
      v22 = *(NTSTRSAFE_PWSTR)((char *)v20 + (char *)L"!" - (char *)v15);
      if ( !v22 )
        break;
      *v20 = v22;
      ++v21;
      ++v20;
      --v19;
    }
    while ( v19 );
    v23 = v20 - 1;
    if ( v19 )
      v23 = v20;
    v24 = v21 - 1;
    if ( v19 )
      v24 = v21;
    *v23 = 0;
    v9 = -(__int64)v19;
    v17 = &v15[v24];
    pszDest = v17;
    v16 = v14 - v24;
    cchDest = v14 - v24;
    v25 = v19 == 0 ? 0x80000005 : 0;
    if ( v19 )
      goto LABEL_25;
  }
  else
  {
    v9 = -(__int64)pszDest;
    v25 = pszDest != 0LL ? -2147483643 : -1073741811;
  }
  if ( v14 )
  {
    LODWORD(v9) = StringExHandleOtherFlagsW(v15, 2 * v14, v16, &pszDest, &cchDest, 0x800u);
    v17 = pszDest;
    v16 = cchDest;
  }
  if ( v25 == -2147483643 )
  {
LABEL_25:
    v15 = v17;
    v14 = v16;
  }
  if ( v25 < 0
    || (LODWORD(v9) = RtlStringCchCopyNExW(v15, v14, (STRSAFE_PCNZWCH)(a2 + 280), v13, &pszDest, &cchDest, 0x800u),
        (v9 & 0x80000000) != 0LL) )
  {
LABEL_35:
    *(_QWORD *)(a2 + 16) = 2LL;
    *(_WORD *)(a2 + 410) = 0;
  }
  return v9;
}
