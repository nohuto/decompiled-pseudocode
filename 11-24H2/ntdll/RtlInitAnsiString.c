/*
 * XREFs of RtlInitAnsiString @ 0x1800E3C60
 * Callers:
 *     RtlInitUTF8String @ 0x18010CD90 (RtlInitUTF8String.c)
 *     AVrfpVerifierStopInitialize @ 0x18011DC24 (AVrfpVerifierStopInitialize.c)
 *     ApiSetResolveToHost2 @ 0x180135420 (ApiSetResolveToHost2.c)
 * Callees:
 *     strlen @ 0x180167CE0 (strlen.c)
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
