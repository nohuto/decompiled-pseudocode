/*
 * XREFs of AslpPathWildcardMakeLeaves @ 0x14080BC10
 * Callers:
 *     AslPathWildcardFindFirst @ 0x14080A7E4 (AslPathWildcardFindFirst.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     _wcsnicmp @ 0x1404FBDB0 (_wcsnicmp.c)
 *     wcsncmp @ 0x1404FD890 (wcsncmp.c)
 *     AslStringHasWildcard @ 0x140808C00 (AslStringHasWildcard.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpPathWildcardMakeLeaves(WCHAR *SourceString)
{
  WCHAR *v1; // rdi
  wchar_t *Buffer; // rsi
  unsigned __int16 v3; // ax
  int v4; // ebx
  WCHAR v5; // cx
  int v6; // ebx
  WCHAR *v7; // rax
  WCHAR v8; // r9
  __int64 result; // rax
  UNICODE_STRING v10; // [rsp+30h] [rbp-18h] BYREF

  v1 = SourceString;
  if ( !SourceString || !*SourceString )
    return 0LL;
  v10 = 0LL;
  RtlInitUnicodeString(&v10, SourceString);
  if ( v10.Length < 2u || (Buffer = v10.Buffer, !*v10.Buffer) )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"AslpPathWildcardMakeLeaves",
      3038,
      (unsigned int)"AslpPathGetFormatInfo failed [%x]");
    return 0LL;
  }
  v3 = v10.Length >> 1;
  v4 = 4;
  if ( (unsigned __int16)(v10.Length >> 1) < 8u )
  {
    if ( v3 < 4u )
    {
      if ( v3 <= 2u )
        goto LABEL_16;
      goto LABEL_15;
    }
  }
  else if ( !wcsnicmp(v10.Buffer, L"\\??\\UNC\\", 8uLL) )
  {
    goto LABEL_17;
  }
  if ( wcsncmp(Buffer, L"\\??\\", 4uLL) )
  {
    if ( !wcsncmp(Buffer, L"\\\\?\\", 4uLL) || !wcsncmp(Buffer, L"\\\\.\\", 4uLL) )
    {
      v4 = 3;
      goto LABEL_17;
    }
LABEL_15:
    v4 = 3;
    if ( !wcsncmp(Buffer, L"\\\\", 2uLL) )
      goto LABEL_17;
LABEL_16:
    v4 = 0;
    goto LABEL_17;
  }
  v4 = 2;
LABEL_17:
  v5 = *v1;
  v6 = -v4;
  v7 = v1;
  while ( v5 )
  {
    if ( v5 == 92 )
    {
      if ( v6 >= 0 )
        *v7 = 0;
      ++v6;
    }
    v5 = *++v7;
  }
  v7[1] = 0;
  if ( *v1 )
  {
    while ( 1 )
    {
      do
        ++v1;
      while ( *v1 );
      if ( !v1[1] || (unsigned int)AslStringHasWildcard((__int16 *)v1 + 1) )
        break;
      *v1 = v8;
      --v6;
    }
  }
  result = (unsigned int)(v6 + 1);
  if ( (int)result < 0 )
    return 0LL;
  return result;
}
