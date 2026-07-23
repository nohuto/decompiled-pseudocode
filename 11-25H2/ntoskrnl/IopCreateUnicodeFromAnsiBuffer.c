/*
 * XREFs of IopCreateUnicodeFromAnsiBuffer @ 0x140592434
 * Callers:
 *     IopCreateArcName @ 0x140A73568 (IopCreateArcName.c)
 *     IopMarkBootPartition @ 0x140C0BBA0 (IopMarkBootPartition.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14046B2E0 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1408E5A80 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall IopCreateUnicodeFromAnsiBuffer(PUNICODE_STRING DestinationString, const CHAR *a2)
{
  STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  DestinationStringa = 0LL;
  RtlInitAnsiString(&DestinationStringa, a2);
  return RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u);
}
