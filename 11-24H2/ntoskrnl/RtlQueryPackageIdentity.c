/*
 * XREFs of RtlQueryPackageIdentity @ 0x140422B10
 * Callers:
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1408E082C (PopEtGetProcessSidAndPackageIdentity.c)
 *     EtwpQueryTokenPackageInfo @ 0x1408EFE7C (EtwpQueryTokenPackageInfo.c)
 *     PfSnCheckModernApp @ 0x1409497A8 (PfSnCheckModernApp.c)
 *     EtwpApplyPackageIdFilter @ 0x140A7975C (EtwpApplyPackageIdFilter.c)
 *     ExpGetProcessInformation @ 0x140ADC640 (ExpGetProcessInformation.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x140423038 (RtlStringCbPrintfExW.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SeQuerySecurityAttributesToken @ 0x1409E61E0 (SeQuerySecurityAttributesToken.c)
 */

NTSTATUS __cdecl RtlQueryPackageIdentity(
        HANDLE TokenHandle,
        PWSTR PackageFullName,
        PSIZE_T PackageSize,
        PWSTR AppId,
        PSIZE_T AppIdSize,
        PBOOLEAN Packaged)
{
  int v8; // r13d
  char v10; // bl
  int SecurityAttributesToken; // eax
  int v12; // r9d
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
  v8 = (int)TokenHandle;
  memset_0(v21, 0, 0x330uLL);
  ppszDestEnd = 0LL;
  v10 = 1;
  LODWORD(dwFlags) = 816;
  SecurityAttributesToken = SeQuerySecurityAttributesToken(
                              v8,
                              (int)&qword_140002DC0,
                              2,
                              v21,
                              dwFlags,
                              (__int64)&pcbRemaining);
  v12 = SecurityAttributesToken;
  if ( SecurityAttributesToken < 0 )
  {
    if ( SecurityAttributesToken != -1073741275 )
      return v12;
    LODWORD(dwFlagsa) = 816;
    v12 = SeQuerySecurityAttributesToken(v8, (int)&qword_140002DC0, 1, v21, dwFlagsa, (__int64)&pcbRemaining);
    if ( v12 < 0 )
      return v12;
    v10 = 0;
  }
  if ( !v22 )
    return -1073741275;
  v13 = v23;
  if ( v10 )
    v14 = **(_QWORD **)(v23 + 72);
  else
    LODWORD(v14) = 0;
  v12 = 0;
  if ( PackageFullName )
  {
    if ( PackageSize )
    {
      v12 = RtlStringCbPrintfExW(
              PackageFullName,
              *PackageSize,
              &ppszDestEnd,
              &pcbRemaining,
              0x800u,
              L"%wZ",
              *(_QWORD *)(v23 + 32));
      if ( v12 < 0 )
        return v12;
      *PackageSize = (char *)ppszDestEnd - (char *)PackageFullName + 2;
      v13 = v23;
      goto LABEL_12;
    }
    return -1073741811;
  }
  if ( PackageSize )
    return -1073741811;
LABEL_12:
  if ( AppId )
  {
    v12 = RtlStringCbPrintfExW(AppId, *AppIdSize, &v20, 0LL, 0x800u, L"%wZ", *(_QWORD *)(v13 + 32) + 16LL);
    if ( v12 < 0 )
      return v12;
    *AppIdSize = (char *)v20 - (char *)AppId + 2;
  }
  if ( Packaged )
    *Packaged = (_DWORD)v14 != 0;
  return v12;
}
