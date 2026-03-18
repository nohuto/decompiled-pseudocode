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

__int64 __fastcall RtlQueryPackageIdentityEx(
        size_t a1,
        NTSTRSAFE_PWSTR pszDest,
        size_t *a3,
        wchar_t *a4,
        size_t *a5,
        GUID *Guid,
        _QWORD *a7)
{
  int v9; // ebx
  _QWORD *v10; // rdi
  char v12; // r14
  int SecurityAttributesToken; // eax
  NTSTATUS v14; // ebx
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
  _QWORD *v26; // [rsp+70h] [rbp-90h]
  _BYTE v27[4]; // [rsp+78h] [rbp-88h] BYREF
  int v28; // [rsp+7Ch] [rbp-84h]
  __int64 v29; // [rsp+80h] [rbp-80h]

  v25 = a5;
  v9 = a1;
  v26 = a7;
  pcbRemaining = a1;
  v23 = 0LL;
  v22 = 0LL;
  v10 = (_QWORD *)((unsigned __int64)&v23 & -(__int64)(a7 != 0LL));
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
      return (unsigned int)v14;
    if ( !v10 )
      return (unsigned int)v14;
    LODWORD(dwFlagsa) = 816;
    v14 = SeQuerySecurityAttributesToken(pcbRemaining, (int)&qword_140002C50, 1, v27, dwFlagsa, (__int64)&v20);
    if ( v14 < 0 )
      return (unsigned int)v14;
    v12 = 0;
  }
  if ( !v28 )
    return (unsigned int)-1073741275;
  v15 = v29;
  if ( v10 )
  {
    if ( v12 )
      *v10 = **(_QWORD **)(v29 + 72);
    else
      *v10 = 0LL;
  }
  v14 = 0;
  if ( pszDest )
  {
    if ( a3 )
    {
      v14 = RtlStringCbPrintfExW(pszDest, *a3, &ppszDestEnd, &pcbRemaining, 0x800u, L"%wZ", *(_QWORD *)(v15 + 32));
      if ( v14 < 0 )
        return (unsigned int)v14;
      v15 = v29;
      *a3 = (char *)ppszDestEnd - (char *)pszDest + 2;
      goto LABEL_14;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 )
    return (unsigned int)-1073741811;
LABEL_14:
  if ( a4 )
  {
    v16 = v25;
    v14 = RtlStringCbPrintfExW(a4, *v25, &v22, 0LL, 0x800u, L"%wZ", *(_QWORD *)(v15 + 32) + 16LL);
    if ( v14 < 0 )
      return (unsigned int)v14;
    v15 = v29;
    *v16 = (char *)v22 - (char *)a4 + 2;
  }
  if ( Guid )
  {
    *Guid = 0LL;
    if ( *(_DWORD *)(v15 + 24) > 3u )
      RtlGUIDFromString((PCUNICODE_STRING)(*(_QWORD *)(v15 + 32) + 48LL), Guid);
  }
  if ( v26 )
    *v26 = (unsigned int)v23;
  return (unsigned int)v14;
}
