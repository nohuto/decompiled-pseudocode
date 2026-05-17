/*
 * XREFs of LdrpMakeUnicodeStringFromPathElement @ 0x180160954
 * Callers:
 *     LdrpLogEtwDllSearchResults @ 0x180076294 (LdrpLogEtwDllSearchResults.c)
 * Callees:
 *     RtlCreateUnicodeString @ 0x180028050 (RtlCreateUnicodeString.c)
 *     RtlGetCurrentDirectory_U @ 0x180078140 (RtlGetCurrentDirectory_U.c)
 *     RtlStringCchCopyExW @ 0x1800DBBA0 (RtlStringCchCopyExW.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpMakeUnicodeStringFromPathElement(__int64 a1, int a2, _OWORD *a3)
{
  unsigned int v7; // edx
  __int64 v8; // rcx
  const wchar_t *v9; // r8
  int v10; // eax
  __int128 v11; // [rsp+30h] [rbp-CA8h] BYREF
  wchar_t v12[1600]; // [rsp+40h] [rbp-C98h] BYREF

  v11 = 0LL;
  if ( a2 == 4 )
  {
    if ( (unsigned int)RtlGetCurrentDirectory_U(3192LL, (char *)v12) )
    {
      if ( !RtlCreateUnicodeString((__int64)&v11, v12) )
        return 0LL;
LABEL_4:
      *a3 = v11;
      return 0LL;
    }
    return 3221225473LL;
  }
  v7 = *(unsigned __int16 *)(a1 + 112);
  v8 = 0LL;
  do
  {
    if ( *(_DWORD *)(a1 + 4 * v8 + 40) == a2 )
      break;
    v8 = (unsigned int)(v8 + 1);
  }
  while ( (unsigned int)v8 < v7 );
  if ( (unsigned int)v8 >= v7 )
    return 3221226021LL;
  v9 = *(const wchar_t **)(a1 + 8 * v8 + 64);
  if ( (_DWORD)v8 == v7 - 1 )
    goto LABEL_15;
  v10 = RtlStringCchCopyExW(
          v12,
          (unsigned int)((*(_QWORD *)(a1 + 8LL * (unsigned int)(v8 + 1) + 64) - (_QWORD)v9 - 2LL) >> 1) + 1,
          (__int64)v9,
          0LL,
          0LL);
  if ( (int)(v10 + 0x80000000) < 0 || v10 == -2147483643 )
  {
    v9 = v12;
LABEL_15:
    if ( RtlCreateUnicodeString((__int64)&v11, v9) )
      goto LABEL_4;
  }
  return 3221225473LL;
}
