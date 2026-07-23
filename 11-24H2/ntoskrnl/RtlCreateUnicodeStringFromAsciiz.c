/*
 * XREFs of RtlCreateUnicodeStringFromAsciiz @ 0x14077E230
 * Callers:
 *     CmpSetSystemRegistryString @ 0x140666080 (CmpSetSystemRegistryString.c)
 *     IopInitializeBootLogging @ 0x14070FFB8 (IopInitializeBootLogging.c)
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 *     VhdiInitializeBootDisk @ 0x140C5FA00 (VhdiInitializeBootDisk.c)
 *     CimfsInitializeBootDisk @ 0x140C60240 (CimfsInitializeBootDisk.c)
 * Callees:
 *     RtlInitAnsiStringEx @ 0x1404A3C90 (RtlInitAnsiStringEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x140903ED0 (RtlAnsiStringToUnicodeString.c)
 */

BOOLEAN __cdecl RtlCreateUnicodeStringFromAsciiz(PUNICODE_STRING DestinationString, PCSTR SourceString)
{
  _STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  DestinationStringa = 0LL;
  return RtlInitAnsiStringEx(&DestinationStringa, SourceString) >= 0
      && RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u) >= 0;
}
