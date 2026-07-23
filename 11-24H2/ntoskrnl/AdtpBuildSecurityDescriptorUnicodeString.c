/*
 * XREFs of AdtpBuildSecurityDescriptorUnicodeString @ 0x140A46438
 * Callers:
 *     AdtpPackageParameters @ 0x140448568 (AdtpPackageParameters.c)
 *     AdtpBuildSecurityDescriptorChangeString @ 0x140A46368 (AdtpBuildSecurityDescriptorChangeString.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140404170 (RtlStringCbPrintfW.c)
 *     StringCchPrintfW @ 0x14046A284 (StringCchPrintfW.c)
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140491960 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildSecurityDescriptorUnicodeString(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        _DWORD *a6,
        char *a7)
{
  int v9; // eax
  PVOID v10; // r12
  NTSTATUS v11; // esi
  const WCHAR *v12; // rbp
  __int64 v13; // rdi
  __int64 v14; // rbx
  unsigned int v15; // ebx
  __int64 v17; // rax
  __int64 v18; // rdx
  void *Pool2; // rdi
  char v20; // al
  __int16 v21; // bx
  PVOID P; // [rsp+30h] [rbp-98h] BYREF
  int v23; // [rsp+38h] [rbp-90h] BYREF
  __int64 v24; // [rsp+40h] [rbp-88h]
  char *v25; // [rsp+48h] [rbp-80h]
  wchar_t pszDest[16]; // [rsp+50h] [rbp-78h] BYREF

  v24 = a5;
  v25 = a7;
  P = 0LL;
  if ( !a4 && !a3 )
    return 3221225485LL;
  v9 = SeConvertSecurityDescriptorToStringSecurityDescriptor(a2, 1LL, a1, &P, &v23);
  v10 = P;
  v11 = v9;
  if ( v9 < 0 )
  {
    if ( v9 == -1073741801 )
      goto LABEL_8;
    v12 = pszDest;
    v11 = 0;
    if ( StringCchPrintfW(pszDest, 0x10uLL, L"<0x%08X>", (unsigned int)v9) < 0 )
      v12 = L"-";
  }
  else
  {
    v12 = (const WCHAR *)P;
  }
  v13 = -1LL;
  v14 = -1LL;
  do
    ++v14;
  while ( v12[v14] );
  v15 = v14 + 1;
  if ( 2 * (unsigned __int64)v15 > 0xFFFF )
  {
    v11 = RtlStringCbPrintfW(pszDest, 0x10uLL, L"%%%%%u", 1829LL);
    if ( v11 < 0 )
      goto LABEL_8;
    v12 = pszDest;
    do
      ++v13;
    while ( pszDest[v13] );
    v15 = v13 + 1;
  }
  v17 = (unsigned int)*a6;
  if ( (unsigned int)v17 + v15 >= 0x400 )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL, 2LL * v15, 0x6B416553u);
    if ( !Pool2 )
    {
      v11 = -1073741801;
      goto LABEL_8;
    }
    v20 = 1;
  }
  else
  {
    v18 = v24;
    *a6 = v17 + v15;
    Pool2 = (void *)(v18 + 2 * v17);
    v20 = 0;
  }
  *v25 = v20;
  memmove(Pool2, v12, 2LL * v15);
  if ( a4 )
  {
    *a4 = Pool2;
    a4[1] = 2 * v15;
  }
  else
  {
    *(_QWORD *)(a3 + 8) = Pool2;
    v21 = 2 * (v15 - 1);
    *(_WORD *)a3 = v21;
    *(_WORD *)(a3 + 2) = v21 + 2;
  }
LABEL_8:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)v11;
}
