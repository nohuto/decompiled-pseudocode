/*
 * XREFs of LdrpMakeUnicodeStringFromPathElement @ 0x18015ED14
 * Callers:
 *     LdrpLogEtwDllSearchResults @ 0x180092B74 (LdrpLogEtwDllSearchResults.c)
 * Callees:
 *     RtlCreateUnicodeString @ 0x180054A50 (RtlCreateUnicodeString.c)
 *     RtlGetCurrentDirectory_U @ 0x180094A20 (RtlGetCurrentDirectory_U.c)
 *     RtlStringCchCopyExW @ 0x1800D6C80 (RtlStringCchCopyExW.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpMakeUnicodeStringFromPathElement(__int64 a1, int a2, _UNICODE_STRING *a3)
{
  unsigned int v7; // edx
  __int64 v8; // rcx
  WCHAR *v9; // r8
  int v10; // eax
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-CA8h] BYREF
  WCHAR Buffer[1600]; // [rsp+40h] [rbp-C98h] BYREF

  DestinationString = 0LL;
  if ( a2 == 4 )
  {
    if ( RtlGetCurrentDirectory_U(0xC78u, Buffer) )
    {
      if ( !RtlCreateUnicodeString(&DestinationString, Buffer) )
        return 0LL;
LABEL_4:
      *a3 = DestinationString;
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
  v9 = *(WCHAR **)(a1 + 8 * v8 + 64);
  if ( (_DWORD)v8 == v7 - 1 )
    goto LABEL_15;
  v10 = RtlStringCchCopyExW(
          Buffer,
          (unsigned int)((*(_QWORD *)(a1 + 8LL * (unsigned int)(v8 + 1) + 64) - (_QWORD)v9 - 2LL) >> 1) + 1,
          (__int64)v9,
          0LL,
          0LL);
  if ( (int)(v10 + 0x80000000) < 0 || v10 == -2147483643 )
  {
    v9 = Buffer;
LABEL_15:
    if ( RtlCreateUnicodeString(&DestinationString, v9) )
      goto LABEL_4;
  }
  return 3221225473LL;
}
