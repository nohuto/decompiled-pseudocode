/*
 * XREFs of AcpiParseAnsiString @ 0x140032960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall AcpiParseAnsiString(__int64 a1, struct _UNICODE_STRING *a2, unsigned int a3)
{
  __int64 v5; // rax
  bool v6; // zf
  char *v7; // rcx
  __int16 v8; // dx
  unsigned __int16 v9; // dx
  struct _STRING SourceString; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  if ( a3 < 0x10 )
    return -1073741811;
  v5 = *(unsigned __int16 *)(a1 + 2);
  v6 = a1 == -4;
  v7 = (char *)(a1 + 4);
  SourceString.Buffer = v7;
  SourceString.MaximumLength = v5;
  if ( v6 )
    goto LABEL_11;
  v8 = v5;
  if ( !v5 )
    goto LABEL_9;
  do
  {
    if ( !*v7 )
      break;
    ++v7;
    --v5;
  }
  while ( v5 );
  if ( v5 )
    v9 = v8 - v5;
  else
LABEL_9:
    v9 = 0;
  if ( !v5 )
LABEL_11:
    v9 = 0;
  SourceString.Length = v9;
  return RtlAnsiStringToUnicodeString(a2, &SourceString, 1u);
}
