/*
 * XREFs of RtlCreateUnicodeStringFromAsciiz @ 0x14077E300
 * Callers:
 *     CmpSetSystemRegistryString @ 0x140667790 (CmpSetSystemRegistryString.c)
 *     IopInitializeBootLogging @ 0x140712428 (IopInitializeBootLogging.c)
 *     InitBootProcessor @ 0x140C0AC88 (InitBootProcessor.c)
 *     VhdiInitializeBootDisk @ 0x140C5D8B0 (VhdiInitializeBootDisk.c)
 *     CimfsInitializeBootDisk @ 0x140C5E0F0 (CimfsInitializeBootDisk.c)
 * Callees:
 *     RtlInitAnsiStringEx @ 0x1404A99C0 (RtlInitAnsiStringEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x1408ADC70 (RtlAnsiStringToUnicodeString.c)
 */

bool __fastcall RtlCreateUnicodeStringFromAsciiz(PUNICODE_STRING DestinationString, const char *a2)
{
  STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  DestinationStringa = 0LL;
  return RtlInitAnsiStringEx(&DestinationStringa, a2) >= 0
      && RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u) >= 0;
}
