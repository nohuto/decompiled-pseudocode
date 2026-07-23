/*
 * XREFs of IopCreateUnicodeFromAnsiBuffer @ 0x140592BBC
 * Callers:
 *     IopCreateArcName @ 0x140A6FCE0 (IopCreateArcName.c)
 *     IopMarkBootPartition @ 0x140C1EDB0 (IopMarkBootPartition.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14045BBA0 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140903ED0 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall IopCreateUnicodeFromAnsiBuffer(PUNICODE_STRING DestinationString, const CHAR *a2)
{
  STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  DestinationStringa = 0LL;
  RtlInitAnsiString(&DestinationStringa, a2);
  return RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u);
}
