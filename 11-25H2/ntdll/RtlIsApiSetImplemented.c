/*
 * XREFs of RtlIsApiSetImplemented @ 0x1800EE0F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlAnsiStringToUnicodeString @ 0x18004BE00 (RtlAnsiStringToUnicodeString.c)
 *     ApiSetQuerySchemaInfo @ 0x1800EE1B8 (ApiSetQuerySchemaInfo.c)
 *     strlen @ 0x180169260 (strlen.c)
 */

NTSTATUS __cdecl RtlIsApiSetImplemented(PCSTR ApiSetName)
{
  char v1; // si
  char v2; // di
  size_t v3; // rax
  int v4; // ebx
  int v5; // eax
  ANSI_STRING SourceString; // [rsp+20h] [rbp-20h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  char v9; // [rsp+60h] [rbp+20h] BYREF
  char v10; // [rsp+68h] [rbp+28h] BYREF

  *(_QWORD *)&SourceString.Length = 0LL;
  v1 = 0;
  v2 = 0;
  v9 = 0;
  v10 = 0;
  SourceString.Buffer = (char *)ApiSetName;
  if ( ApiSetName )
  {
    v3 = strlen(ApiSetName);
    if ( v3 >= 0xFFFF )
      LOWORD(v3) = -2;
    SourceString.Length = v3;
    SourceString.MaximumLength = v3 + 1;
  }
  DestinationString = 0LL;
  v4 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u);
  if ( v4 >= 0 )
  {
    v5 = ApiSetQuerySchemaInfo(
           NtCurrentPeb()->ApiSetMap,
           &DestinationString,
           &v9,
           &v10,
           *(_QWORD *)&SourceString.Length,
           SourceString.Buffer);
    v1 = v9;
    v4 = v5;
    v2 = v10;
  }
  if ( DestinationString.Buffer )
    RtlpSysVolFree(DestinationString.Buffer);
  if ( v4 >= 0 && (!v1 || !v2) )
    return -1073741275;
  return v4;
}
