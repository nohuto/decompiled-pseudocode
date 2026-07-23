/*
 * XREFs of RtlQueryPackageIdentityEx @ 0x140292660
 * Callers:
 *     PspIdentityBasedJobBreakaway @ 0x140A0D378 (PspIdentityBasedJobBreakaway.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x140292E0C (RtlStringCbPrintfExW.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlGUIDFromString @ 0x140959130 (RtlGUIDFromString.c)
 *     SeQuerySecurityAttributesToken @ 0x1409F23F0 (SeQuerySecurityAttributesToken.c)
 */

NTSTATUS __cdecl RtlQueryPackageIdentityEx(
        HANDLE TokenHandle,
        PWSTR PackageFullName,
        PSIZE_T PackageSize,
        PWSTR AppId,
        PSIZE_T AppIdSize,
        PGUID DynamicId,
        PULONG64 Flags)
{
  int v9; // ebx
  _QWORD *v10; // rdi
  char v12; // r14
  int SecurityAttributesToken; // eax
  int v14; // ebx
  __int64 v15; // rdx
  size_t *v16; // rdi
  size_t dwFlags; // [rsp+20h] [rbp-E0h]
  size_t dwFlagsa; // [rsp+20h] [rbp-E0h]
  __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+48h] [rbp-B8h] BYREF
  NTSTRSAFE_PWSTR v22; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A8h] BYREF
  size_t pcbRemaining; // [rsp+60h] [rbp-A0h] BYREF
  size_t *v25; // [rsp+68h] [rbp-98h]
  PULONG64 v26; // [rsp+70h] [rbp-90h]
  _BYTE v27[4]; // [rsp+78h] [rbp-88h] BYREF
  int v28; // [rsp+7Ch] [rbp-84h]
  __int64 v29; // [rsp+80h] [rbp-80h]

  v25 = AppIdSize;
  v9 = (int)TokenHandle;
  v26 = Flags;
  pcbRemaining = (size_t)TokenHandle;
  v23 = 0LL;
  v22 = 0LL;
  v10 = (_QWORD *)((unsigned __int64)&v23 & -(__int64)(Flags != 0LL));
  memset_0(v27, 0, 0x330uLL);
  ppszDestEnd = 0LL;
  v12 = 1;
  LODWORD(dwFlags) = 816;
  SecurityAttributesToken = SeQuerySecurityAttributesToken(
                              v9,
                              (int)&qword_140002C50,
                              (unsigned int)(v10 != 0LL) + 1,
                              v27,
                              dwFlags,
                              (__int64)&v20);
  v14 = SecurityAttributesToken;
  if ( SecurityAttributesToken < 0 )
  {
    if ( SecurityAttributesToken != -1073741275 )
      return v14;
    if ( !v10 )
      return v14;
    LODWORD(dwFlagsa) = 816;
    v14 = SeQuerySecurityAttributesToken(pcbRemaining, (int)&qword_140002C50, 1, v27, dwFlagsa, (__int64)&v20);
    if ( v14 < 0 )
      return v14;
    v12 = 0;
  }
  if ( !v28 )
    return -1073741275;
  v15 = v29;
  if ( v10 )
  {
    if ( v12 )
      *v10 = **(_QWORD **)(v29 + 72);
    else
      *v10 = 0LL;
  }
  v14 = 0;
  if ( PackageFullName )
  {
    if ( PackageSize )
    {
      v14 = RtlStringCbPrintfExW(
              PackageFullName,
              *PackageSize,
              &ppszDestEnd,
              &pcbRemaining,
              0x800u,
              L"%wZ",
              *(_QWORD *)(v15 + 32));
      if ( v14 < 0 )
        return v14;
      v15 = v29;
      *PackageSize = (char *)ppszDestEnd - (char *)PackageFullName + 2;
      goto LABEL_14;
    }
    return -1073741811;
  }
  if ( PackageSize )
    return -1073741811;
LABEL_14:
  if ( AppId )
  {
    v16 = v25;
    v14 = RtlStringCbPrintfExW(AppId, *v25, &v22, 0LL, 0x800u, L"%wZ", *(_QWORD *)(v15 + 32) + 16LL);
    if ( v14 < 0 )
      return v14;
    v15 = v29;
    *v16 = (char *)v22 - (char *)AppId + 2;
  }
  if ( DynamicId )
  {
    *DynamicId = 0LL;
    if ( *(_DWORD *)(v15 + 24) > 3u )
      RtlGUIDFromString((PCUNICODE_STRING)(*(_QWORD *)(v15 + 32) + 48LL), DynamicId);
  }
  if ( v26 )
    *v26 = (unsigned int)v23;
  return v14;
}
