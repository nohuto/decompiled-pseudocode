/*
 * XREFs of PspIdentityBasedJobBreakaway @ 0x140A31394
 * Callers:
 *     PspInitializeProcessSecurity @ 0x140A30A28 (PspInitializeProcessSecurity.c)
 * Callees:
 *     RtlQueryPackageIdentityEx @ 0x140355EF0 (RtlQueryPackageIdentityEx.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlEqualUnicodeString @ 0x140927050 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall PspIdentityBasedJobBreakaway(size_t a1, size_t a2, _BYTE *a3)
{
  __int64 v4; // r14
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v12; // [rsp+50h] [rbp-B0h] BYREF
  size_t v13; // [rsp+58h] [rbp-A8h] BYREF
  size_t v14; // [rsp+60h] [rbp-A0h] BYREF
  size_t v15; // [rsp+68h] [rbp-98h] BYREF
  size_t v16; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING String2; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v19; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING String1; // [rsp+A8h] [rbp-58h] BYREF
  WCHAR v21[72]; // [rsp+C0h] [rbp-40h] BYREF
  WCHAR v22[72]; // [rsp+150h] [rbp+50h] BYREF
  WCHAR SourceString[128]; // [rsp+1E0h] [rbp+E0h] BYREF
  WCHAR v24[128]; // [rsp+2E0h] [rbp+1E0h] BYREF

  v11 = 0LL;
  v4 = 0LL;
  *a3 = 0;
  v14 = 256LL;
  v13 = 256LL;
  v12 = 0LL;
  v16 = 132LL;
  v15 = 132LL;
  DestinationString = 0LL;
  String1 = 0LL;
  String2 = 0LL;
  v19 = 0LL;
  v6 = RtlQueryPackageIdentityEx(a1, SourceString, &v14, v21, &v16, 0LL, &v11);
  v7 = v6;
  if ( v6 == -2147483643 || v6 == -1073741275 )
  {
    v9 = 0LL;
    v7 = 0;
  }
  else
  {
    if ( v6 < 0 )
      return v7;
    v9 = v11;
  }
  if ( !v9 )
    *a3 = 1;
  if ( !*a3 )
  {
    v10 = RtlQueryPackageIdentityEx(a2, v24, &v13, v22, &v15, 0LL, &v12);
    v7 = v10;
    if ( v10 == -1073741275 || v10 == -2147483643 )
    {
      v7 = 0;
    }
    else
    {
      if ( v10 < 0 )
        return v7;
      v4 = v12;
    }
  }
  if ( v4 )
  {
    if ( (((unsigned int)v4 ^ (unsigned int)v9) & 0xFFFFFFDF) != 0
      || v14 != v13
      || v16 != v15
      || (RtlInitUnicodeString(&DestinationString, SourceString),
          RtlInitUnicodeString(&String1, v21),
          RtlInitUnicodeString(&String2, v24),
          RtlInitUnicodeString(&v19, v22),
          !RtlEqualUnicodeString(&DestinationString, &String2, 1u))
      || !RtlEqualUnicodeString(&String1, &v19, 1u) )
    {
      *a3 = 1;
    }
  }
  return v7;
}
