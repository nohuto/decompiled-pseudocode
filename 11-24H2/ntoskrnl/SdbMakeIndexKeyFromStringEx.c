/*
 * XREFs of SdbMakeIndexKeyFromStringEx @ 0x1409481A4
 * Callers:
 *     SdbMergeIsEntryUpdated @ 0x140808408 (SdbMergeIsEntryUpdated.c)
 *     SdbFindFirstStringIndexedTag @ 0x140945304 (SdbFindFirstStringIndexedTag.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1403FA370 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 *     RtlUpcaseUnicodeString @ 0x140949F30 (RtlUpcaseUnicodeString.c)
 */

__int64 __fastcall SdbMakeIndexKeyFromStringEx(PCWSTR SourceString, char a2)
{
  unsigned __int64 v2; // rax
  char *v3; // rdi
  __int64 v4; // rbx
  unsigned __int16 *v5; // r14
  int v6; // edx
  const WCHAR *v7; // rdx
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rdx
  bool v11; // cc
  unsigned __int64 v12; // rax
  unsigned __int16 v13; // cx
  __int16 v14; // cx
  unsigned __int64 v15; // rax
  char v16; // cl
  unsigned __int64 v17; // rax
  UNICODE_STRING SourceStringa; // [rsp+38h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-9h] BYREF
  UNICODE_STRING v20; // [rsp+58h] [rbp+7h] BYREF
  _BYTE v21[16]; // [rsp+68h] [rbp+17h] BYREF
  char v22; // [rsp+78h] [rbp+27h] BYREF

  v2 = -1LL;
  v3 = (char *)&v20.MaximumLength + 5;
  v4 = 0LL;
  do
    ++v2;
  while ( SourceString[v2] );
  v5 = (unsigned __int16 *)v21;
  v6 = a2 & 2;
  DestinationString = 0LL;
  SourceStringa = 0LL;
  v20 = 0LL;
  if ( v2 > 8 && v6 )
    v7 = &SourceString[v2 - 8];
  else
    v7 = SourceString;
  RtlInitUnicodeString(&DestinationString, v7);
  SourceStringa.Buffer = (wchar_t *)&v22;
  SourceStringa.MaximumLength = 16;
  RtlCopyUnicodeString(&SourceStringa, &DestinationString);
  v20.MaximumLength = 16;
  v20.Buffer = (wchar_t *)v21;
  if ( RtlUpcaseUnicodeString(&v20, &SourceStringa, 0) < 0 )
  {
    AslLogCallPrintf(1LL, (__int64)"SdbMakeIndexKeyFromStringEx");
    return 0LL;
  }
  v9 = 0LL;
  v10 = (unsigned __int64)v20.Length >> 1;
  if ( v10 )
  {
    while ( 1 )
    {
      v11 = v10 <= 8;
      if ( v10 >= 8 )
        break;
      v15 = v9++;
      v16 = HIBYTE(v20.Buffer[v15]);
      v17 = v10 + 1;
      if ( !v16 )
        v17 = v10;
      v10 = v17;
      if ( v9 >= (unsigned __int64)v20.Length >> 1 )
        goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    v11 = v10 <= 8;
  }
  if ( !v11 )
    return 0LL;
  *(_QWORD *)&v20.Length = 0LL;
  v12 = 0LL;
  if ( v10 )
  {
    do
    {
      v13 = *v5++;
      *v3-- = v13;
      v14 = HIBYTE(v13);
      if ( (_BYTE)v14 )
      {
        if ( v12 < 7 )
        {
          *v3-- = v14;
          ++v12;
        }
      }
      ++v12;
    }
    while ( v12 < v10 );
    return *(_QWORD *)&v20.Length;
  }
  return v4;
}
