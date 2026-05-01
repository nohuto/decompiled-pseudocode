/*
 * XREFs of AslpPathWildcardMakeLeaves @ 0x1800A5B20
 * Callers:
 *     AslPathWildcardFindFirst @ 0x1800A4220 (AslPathWildcardFindFirst.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     AslStringHasWildcard @ 0x18009E38C (AslStringHasWildcard.c)
 */

__int64 __fastcall AslpPathWildcardMakeLeaves(WCHAR *SourceString)
{
  WCHAR *v1; // rdi
  const wchar_t *Buffer; // rcx
  unsigned __int16 v3; // ax
  int v4; // ebx
  WCHAR v5; // cx
  int v6; // ebx
  WCHAR *v7; // rax
  WCHAR v8; // r8
  __int64 result; // rax
  struct _UNICODE_STRING v10; // [rsp+30h] [rbp-18h] BYREF

  v1 = SourceString;
  if ( !SourceString || !*SourceString )
    return 0LL;
  v10 = 0LL;
  RtlInitUnicodeString(&v10, SourceString);
  if ( v10.Length < 2u || (Buffer = v10.Buffer, !*v10.Buffer) )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  v3 = v10.Length >> 1;
  v4 = 4;
  if ( (unsigned __int16)(v10.Length >> 1) < 8u )
  {
    if ( v3 < 4u )
    {
      if ( v3 <= 2u )
        goto LABEL_17;
      goto LABEL_16;
    }
LABEL_9:
    if ( !wcsncmp(Buffer, L"\\??\\", 4uLL) )
    {
      v4 = 2;
      goto LABEL_18;
    }
    if ( !wcsncmp(v10.Buffer, L"\\\\?\\", 4uLL) || !wcsncmp(v10.Buffer, L"\\\\.\\", 4uLL) )
    {
      v4 = 3;
      goto LABEL_18;
    }
    Buffer = v10.Buffer;
LABEL_16:
    v4 = 3;
    if ( !wcsncmp(Buffer, L"\\\\", 2uLL) )
      goto LABEL_18;
LABEL_17:
    v4 = 0;
    goto LABEL_18;
  }
  if ( _wcsnicmp(v10.Buffer, L"\\??\\UNC\\", 8uLL) )
  {
    Buffer = v10.Buffer;
    goto LABEL_9;
  }
LABEL_18:
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
      if ( !v1[1] || (unsigned int)AslStringHasWildcard(v1 + 1) )
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
