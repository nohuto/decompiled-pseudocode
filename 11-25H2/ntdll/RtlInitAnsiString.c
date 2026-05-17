/*
 * XREFs of RtlInitAnsiString @ 0x1800E0910
 * Callers:
 *     RtlInitUTF8String @ 0x18010EDE0 (RtlInitUTF8String.c)
 *     AVrfpVerifierStopInitialize @ 0x18011F4F4 (AVrfpVerifierStopInitialize.c)
 *     ApiSetResolveToHost2 @ 0x180136CD0 (ApiSetResolveToHost2.c)
 * Callees:
 *     strlen @ 0x180169260 (strlen.c)
 */

void __stdcall RtlInitAnsiString(PSTRING DestinationString, PCSZ SourceString)
{
  size_t v3; // rax

  *(_QWORD *)&DestinationString->Length = 0LL;
  DestinationString->Buffer = (char *)SourceString;
  if ( SourceString )
  {
    v3 = strlen(SourceString);
    if ( v3 >= 0xFFFF )
      LOWORD(v3) = -2;
    DestinationString->Length = v3;
    DestinationString->MaximumLength = v3 + 1;
  }
}
