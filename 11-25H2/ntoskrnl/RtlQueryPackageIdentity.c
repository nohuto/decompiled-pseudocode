/*
 * XREFs of RtlQueryPackageIdentity @ 0x1402928E0
 * Callers:
 *     PfSnCheckModernApp @ 0x140827568 (PfSnCheckModernApp.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14083D388 (PopEtGetProcessSidAndPackageIdentity.c)
 *     EtwpQueryTokenPackageInfo @ 0x1408BE7AC (EtwpQueryTokenPackageInfo.c)
 *     EtwpApplyPackageIdFilter @ 0x140A7C304 (EtwpApplyPackageIdFilter.c)
 *     ExpGetProcessInformation @ 0x140AD0210 (ExpGetProcessInformation.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x140292E0C (RtlStringCbPrintfExW.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SeQuerySecurityAttributesToken @ 0x1409F23F0 (SeQuerySecurityAttributesToken.c)
 */

__int64 __fastcall RtlQueryPackageIdentity(
        int a1,
        NTSTRSAFE_PWSTR pszDest,
        size_t *a3,
        wchar_t *a4,
        size_t *a5,
        bool *a6)
{
  char v10; // bl
  int SecurityAttributesToken; // eax
  NTSTATUS v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rbx
  size_t dwFlags; // [rsp+20h] [rbp-E0h]
  size_t dwFlagsa; // [rsp+20h] [rbp-E0h]
  size_t pcbRemaining; // [rsp+40h] [rbp-C0h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+48h] [rbp-B8h] BYREF
  NTSTRSAFE_PWSTR v20; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v21[4]; // [rsp+58h] [rbp-A8h] BYREF
  int v22; // [rsp+5Ch] [rbp-A4h]
  __int64 v23; // [rsp+60h] [rbp-A0h]

  v20 = 0LL;
  memset_0(v21, 0, 0x330uLL);
  ppszDestEnd = 0LL;
  v10 = 1;
  LODWORD(dwFlags) = 816;
  SecurityAttributesToken = SeQuerySecurityAttributesToken(
                              a1,
                              (int)&qword_140002C50,
                              2,
                              v21,
                              dwFlags,
                              (__int64)&pcbRemaining);
  v12 = SecurityAttributesToken;
  if ( SecurityAttributesToken < 0 )
  {
    if ( SecurityAttributesToken != -1073741275 )
      return (unsigned int)v12;
    LODWORD(dwFlagsa) = 816;
    v12 = SeQuerySecurityAttributesToken(a1, (int)&qword_140002C50, 1, v21, dwFlagsa, (__int64)&pcbRemaining);
    if ( v12 < 0 )
      return (unsigned int)v12;
    v10 = 0;
  }
  if ( !v22 )
    return (unsigned int)-1073741275;
  v13 = v23;
  if ( v10 )
    v14 = **(_QWORD **)(v23 + 72);
  else
    LODWORD(v14) = 0;
  v12 = 0;
  if ( pszDest )
  {
    if ( a3 )
    {
      v12 = RtlStringCbPrintfExW(pszDest, *a3, &ppszDestEnd, &pcbRemaining, 0x800u, L"%wZ", *(_QWORD *)(v23 + 32));
      if ( v12 < 0 )
        return (unsigned int)v12;
      *a3 = (char *)ppszDestEnd - (char *)pszDest + 2;
      v13 = v23;
      goto LABEL_12;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 )
    return (unsigned int)-1073741811;
LABEL_12:
  if ( a4 )
  {
    v12 = RtlStringCbPrintfExW(a4, *a5, &v20, 0LL, 0x800u, L"%wZ", *(_QWORD *)(v13 + 32) + 16LL);
    if ( v12 < 0 )
      return (unsigned int)v12;
    *a5 = (char *)v20 - (char *)a4 + 2;
  }
  if ( a6 )
    *a6 = (_DWORD)v14 != 0;
  return (unsigned int)v12;
}
