/*
 * XREFs of IopCreateUnicodeFromAnsiBuffer @ 0x140595B8C
 * Callers:
 *     IopCreateArcName @ 0x140A75840 (IopCreateArcName.c)
 *     IopMarkBootPartition @ 0x140C1CD70 (IopMarkBootPartition.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1404654C0 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1408ADC70 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall IopCreateUnicodeFromAnsiBuffer(PUNICODE_STRING DestinationString, const char *a2)
{
  STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  DestinationStringa = 0LL;
  RtlInitAnsiString(&DestinationStringa, a2);
  return RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u);
}
