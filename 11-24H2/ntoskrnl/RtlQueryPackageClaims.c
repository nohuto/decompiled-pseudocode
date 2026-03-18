/*
 * XREFs of RtlQueryPackageClaims @ 0x140356380
 * Callers:
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140355988 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     SepDesktopAppxSubProcessToken @ 0x140355ABC (SepDesktopAppxSubProcessToken.c)
 *     AppModelPolicy_GetPolicy_Internal @ 0x1404944A8 (AppModelPolicy_GetPolicy_Internal.c)
 *     SeDuplicateTokenWithPredictedClaims @ 0x140792B0C (SeDuplicateTokenWithPredictedClaims.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x140356698 (RtlStringCbPrintfExW.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     RtlGUIDFromString @ 0x1408CA240 (RtlGUIDFromString.c)
 *     SeQuerySecurityAttributesToken @ 0x1409ECEB0 (SeQuerySecurityAttributesToken.c)
 */

NTSTATUS __fastcall RtlQueryPackageClaims(
        __int64 a1,
        wchar_t *a2,
        size_t *a3,
        wchar_t *a4,
        size_t *a5,
        GUID *Guid,
        _QWORD *a7,
        _QWORD *a8)
{
  unsigned __int8 v10; // r14
  int v11; // esi
  NTSTATUS result; // eax
  int v13; // esi
  __int64 v14; // rdx
  NTSTRSAFE_PWSTR v15; // rdi
  NTSTATUS v16; // ebx
  size_t *v17; // rdi
  int SecurityAttributesToken; // eax
  size_t dwFlags; // [rsp+20h] [rbp-E0h]
  size_t dwFlagsa; // [rsp+20h] [rbp-E0h]
  size_t dwFlagsb; // [rsp+20h] [rbp-E0h]
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  int v23[2]; // [rsp+48h] [rbp-B8h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+50h] [rbp-B0h] BYREF
  NTSTRSAFE_PWSTR v25; // [rsp+58h] [rbp-A8h] BYREF
  NTSTRSAFE_PWSTR pszDest; // [rsp+60h] [rbp-A0h] BYREF
  size_t *v27; // [rsp+68h] [rbp-98h]
  _BYTE v28[4]; // [rsp+70h] [rbp-90h] BYREF
  int v29; // [rsp+74h] [rbp-8Ch]
  __int64 v30; // [rsp+78h] [rbp-88h]

  pszDest = a2;
  *(_QWORD *)v23 = a1;
  v27 = a5;
  v25 = 0LL;
  memset_0(v28, 0, 0x330uLL);
  ppszDestEnd = 0LL;
  if ( a8 )
    *a8 = 0LL;
  v10 = 1;
  v11 = 1;
  if ( a7 || a8 )
    v11 = 2;
  LODWORD(dwFlags) = 816;
  result = SeQuerySecurityAttributesToken(v23[0], (int)&qword_140002D18, v11, v28, dwFlags, (__int64)&v22);
  if ( result >= 0 )
  {
    v13 = v23[0];
  }
  else
  {
    if ( result != -1073741275 )
      return result;
    if ( v11 == 1 )
      return result;
    v13 = v23[0];
    LODWORD(dwFlagsa) = 816;
    result = SeQuerySecurityAttributesToken(v23[0], (int)&qword_140002D18, 1, v28, dwFlagsa, (__int64)&v22);
    if ( result < 0 )
      return result;
    v10 = 0;
  }
  if ( !v29 )
    return -1073741275;
  v14 = v30;
  if ( a7 )
  {
    if ( v10 )
      *a7 = **(_QWORD **)(v30 + 72);
    else
      *a7 = 0LL;
  }
  if ( a8 )
  {
    *a8 |= (2LL * v10) | 1;
    LODWORD(dwFlagsa) = 0;
    if ( (unsigned int)SeQuerySecurityAttributesToken(v13, (int)&qword_140002D38, 1, 0LL, dwFlagsa, (__int64)&v22) == -1073741789 )
      *a8 |= 4uLL;
    LODWORD(dwFlagsb) = 0;
    SecurityAttributesToken = SeQuerySecurityAttributesToken(
                                v13,
                                (int)&qword_140002D48,
                                1,
                                0LL,
                                dwFlagsb,
                                (__int64)&v22);
    v14 = v30;
    if ( SecurityAttributesToken == -1073741789 )
      *a8 |= 8uLL;
  }
  v15 = pszDest;
  if ( pszDest )
  {
    if ( a3 )
    {
      result = RtlStringCbPrintfExW(
                 pszDest,
                 *a3,
                 &ppszDestEnd,
                 (size_t *)&pszDest,
                 0x800u,
                 L"%wZ",
                 *(_QWORD *)(v14 + 32));
      v16 = result;
      if ( result < 0 )
        return result;
      v14 = v30;
      *a3 = (char *)ppszDestEnd - (char *)v15 + 2;
      goto LABEL_22;
    }
    return -1073741811;
  }
  v16 = 0;
  if ( a3 )
    return -1073741811;
LABEL_22:
  if ( a4 )
  {
    v17 = v27;
    result = RtlStringCbPrintfExW(a4, *v27, &v25, 0LL, 0x800u, L"%wZ", *(_QWORD *)(v14 + 32) + 16LL);
    v16 = result;
    if ( result < 0 )
      return result;
    v14 = v30;
    *v17 = (char *)v25 - (char *)a4 + 2;
  }
  if ( Guid )
  {
    *Guid = 0LL;
    if ( *(_DWORD *)(v14 + 24) > 3u )
      RtlGUIDFromString((PCUNICODE_STRING)(*(_QWORD *)(v14 + 32) + 48LL), Guid);
  }
  return v16;
}
