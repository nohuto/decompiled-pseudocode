/*
 * XREFs of RtlQueryPackageClaims @ 0x140292AF0
 * Callers:
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140292108 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     SepDesktopAppxSubProcessToken @ 0x14029223C (SepDesktopAppxSubProcessToken.c)
 *     AppModelPolicy_GetPolicy_Internal @ 0x140495818 (AppModelPolicy_GetPolicy_Internal.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x140292E0C (RtlStringCbPrintfExW.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlGUIDFromString @ 0x140959130 (RtlGUIDFromString.c)
 *     SeQuerySecurityAttributesToken @ 0x1409F23F0 (SeQuerySecurityAttributesToken.c)
 */

NTSTATUS __cdecl RtlQueryPackageClaims(
        HANDLE TokenHandle,
        PWSTR PackageFullName,
        PSIZE_T PackageSize,
        PWSTR AppId,
        PSIZE_T AppIdSize,
        PGUID DynamicId,
        PPS_PKG_CLAIM PkgClaim,
        PULONG64 AttributesPresent)
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

  pszDest = PackageFullName;
  *(_QWORD *)v23 = TokenHandle;
  v27 = AppIdSize;
  v25 = 0LL;
  memset_0(v28, 0, 0x330uLL);
  ppszDestEnd = 0LL;
  if ( AttributesPresent )
    *AttributesPresent = 0LL;
  v10 = 1;
  v11 = 1;
  if ( PkgClaim || AttributesPresent )
    v11 = 2;
  LODWORD(dwFlags) = 816;
  result = SeQuerySecurityAttributesToken(v23[0], (int)&qword_140002C50, v11, v28, dwFlags, (__int64)&v22);
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
    result = SeQuerySecurityAttributesToken(v23[0], (int)&qword_140002C50, 1, v28, dwFlagsa, (__int64)&v22);
    if ( result < 0 )
      return result;
    v10 = 0;
  }
  if ( !v29 )
    return -1073741275;
  v14 = v30;
  if ( PkgClaim )
  {
    if ( v10 )
      *PkgClaim = **(PPS_PKG_CLAIM *)(v30 + 72);
    else
      *PkgClaim = 0LL;
  }
  if ( AttributesPresent )
  {
    *AttributesPresent |= (2LL * v10) | 1;
    LODWORD(dwFlagsa) = 0;
    if ( (unsigned int)SeQuerySecurityAttributesToken(v13, (int)&qword_140002C70, 1, 0LL, dwFlagsa, (__int64)&v22) == -1073741789 )
      *AttributesPresent |= 4uLL;
    LODWORD(dwFlagsb) = 0;
    SecurityAttributesToken = SeQuerySecurityAttributesToken(
                                v13,
                                (int)&qword_140002C80,
                                1,
                                0LL,
                                dwFlagsb,
                                (__int64)&v22);
    v14 = v30;
    if ( SecurityAttributesToken == -1073741789 )
      *AttributesPresent |= 8uLL;
  }
  v15 = pszDest;
  if ( pszDest )
  {
    if ( PackageSize )
    {
      result = RtlStringCbPrintfExW(
                 pszDest,
                 *PackageSize,
                 &ppszDestEnd,
                 (size_t *)&pszDest,
                 0x800u,
                 L"%wZ",
                 *(_QWORD *)(v14 + 32));
      v16 = result;
      if ( result < 0 )
        return result;
      v14 = v30;
      *PackageSize = (char *)ppszDestEnd - (char *)v15 + 2;
      goto LABEL_22;
    }
    return -1073741811;
  }
  v16 = 0;
  if ( PackageSize )
    return -1073741811;
LABEL_22:
  if ( AppId )
  {
    v17 = v27;
    result = RtlStringCbPrintfExW(AppId, *v27, &v25, 0LL, 0x800u, L"%wZ", *(_QWORD *)(v14 + 32) + 16LL);
    v16 = result;
    if ( result < 0 )
      return result;
    v14 = v30;
    *v17 = (char *)v25 - (char *)AppId + 2;
  }
  if ( DynamicId )
  {
    *DynamicId = 0LL;
    if ( *(_DWORD *)(v14 + 24) > 3u )
      RtlGUIDFromString((PCUNICODE_STRING)(*(_QWORD *)(v14 + 32) + 48LL), DynamicId);
  }
  return v16;
}
