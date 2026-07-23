/*
 * XREFs of PipSmBiosGetString @ 0x140C1121C
 * Callers:
 *     PipInitComputerIds @ 0x140C52860 (PipInitComputerIds.c)
 * Callees:
 *     strchr @ 0x1404FD0A0 (strchr.c)
 *     RtlAnsiStringToUnicodeString @ 0x1408E5A80 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall PipSmBiosGetString(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        int a4,
        PUNICODE_STRING DestinationString)
{
  unsigned int v5; // r10d
  char *v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned int i; // ecx
  unsigned __int16 v11; // di
  char *v12; // rcx
  bool v14; // zf
  ANSI_STRING SourceString; // [rsp+20h] [rbp-18h] BYREF

  v5 = a2;
  SourceString = 0LL;
  if ( !a2 )
    return -1073741275;
  v7 = (char *)(a1 + *(unsigned __int8 *)(a1 + 1));
  v8 = a3 + (unsigned int)(a4 - 1);
  for ( i = 1; i < v5; ++i )
  {
    while ( *v7++ )
    {
      if ( (unsigned __int64)v7 >= v8 )
        return -1073741275;
    }
    if ( !v7 || !*v7 )
      return -1073741275;
  }
  if ( !v7 )
    return -1073741275;
  SourceString.Buffer = v7;
  v11 = 0;
  SourceString.Length = 0;
  v12 = v7;
  while ( *v12++ )
  {
    SourceString.Length = ++v11;
    if ( (unsigned __int64)v12 >= v8 || v11 > 0x40u )
      return -1073741275;
  }
  if ( !v12 )
    return -1073741275;
  while ( *v7 && strchr(" \t\r", *v7) )
  {
    ++v7;
    --v11;
    SourceString.Buffer = v7;
    SourceString.Length = v11;
  }
  if ( v11 )
  {
    do
    {
      if ( !strchr(" \t\r", v7[v11 - 1]) )
        break;
      v14 = v11-- == 1;
      SourceString.Length = v11;
    }
    while ( !v14 );
  }
  SourceString.MaximumLength = v11 + 1;
  return RtlAnsiStringToUnicodeString(DestinationString, &SourceString, 1u);
}
