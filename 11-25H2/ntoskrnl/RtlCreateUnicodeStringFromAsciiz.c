/*
 * XREFs of RtlCreateUnicodeStringFromAsciiz @ 0x14076F0B0
 * Callers:
 *     CmpSetSystemRegistryString @ 0x14065BCB0 (CmpSetSystemRegistryString.c)
 *     IopInitializeBootLogging @ 0x140706328 (IopInitializeBootLogging.c)
 *     InitBootProcessor @ 0x140BF9C88 (InitBootProcessor.c)
 *     VhdiInitializeBootDisk @ 0x140C4C530 (VhdiInitializeBootDisk.c)
 *     CimfsInitializeBootDisk @ 0x140C4CD70 (CimfsInitializeBootDisk.c)
 * Callees:
 *     RtlInitAnsiStringEx @ 0x1404A8810 (RtlInitAnsiStringEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x1408E5A80 (RtlAnsiStringToUnicodeString.c)
 */

BOOLEAN __cdecl RtlCreateUnicodeStringFromAsciiz(PUNICODE_STRING DestinationString, PCSTR SourceString)
{
  _STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  DestinationStringa = 0LL;
  return RtlInitAnsiStringEx(&DestinationStringa, SourceString) >= 0
      && RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u) >= 0;
}
