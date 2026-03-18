/*
 * XREFs of RtlpIsUtf8Process @ 0x1408AF8F0
 * Callers:
 *     CompareNamesCaseSensitive @ 0x14077F38C (CompareNamesCaseSensitive.c)
 *     ComputeNameLength @ 0x14077F538 (ComputeNameLength.c)
 *     RtlAnsiStringToUnicodeString @ 0x1408ADC70 (RtlAnsiStringToUnicodeString.c)
 *     RtlMultiByteToUnicodeSize @ 0x1408AE950 (RtlMultiByteToUnicodeSize.c)
 *     RtlUpcaseUnicodeToOemN @ 0x1408AEA00 (RtlUpcaseUnicodeToOemN.c)
 *     RtlpDidUnicodeToOemWork @ 0x1408AEAC0 (RtlpDidUnicodeToOemWork.c)
 *     RtlxUnicodeStringToOemSize @ 0x1408AEC10 (RtlxUnicodeStringToOemSize.c)
 *     RtlIsNameLegalDOS8Dot3 @ 0x1408AECC0 (RtlIsNameLegalDOS8Dot3.c)
 *     RtlUnicodeToMultiByteSize @ 0x1408AEEA0 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x1408AEF80 (RtlUnicodeStringToAnsiString.c)
 *     RtlMultiByteToUnicodeN @ 0x1408AF2B0 (RtlMultiByteToUnicodeN.c)
 *     RtlUpperString @ 0x1408AF440 (RtlUpperString.c)
 *     RtlUpperChar @ 0x1408AF4C0 (RtlUpperChar.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x1408AF4F0 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlUnicodeToMultiByteN @ 0x1408AF5B0 (RtlUnicodeToMultiByteN.c)
 *     RtlAnsiCharToUnicodeChar @ 0x1408AF710 (RtlAnsiCharToUnicodeChar.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1408B0260 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlGenerate8dot3Name @ 0x1408B06E0 (RtlGenerate8dot3Name.c)
 *     RtlUnicodeToOemN @ 0x1408B1040 (RtlUnicodeToOemN.c)
 *     RtlOemToUnicodeN @ 0x1408B10C0 (RtlOemToUnicodeN.c)
 *     RtlIsValidOemCharacter @ 0x1408B1350 (RtlIsValidOemCharacter.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 */

bool RtlpIsUtf8Process()
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  char v1; // dl
  struct _LIST_ENTRY *Blink; // rcx
  bool result; // al
  signed __int32 v4[8]; // [rsp+0h] [rbp-38h] BYREF
  bool v5; // [rsp+20h] [rbp-18h]

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  _InterlockedOr(v4, 0);
  if ( LOWORD(CurrentServerSiloGlobals[64].Blink) == 0xFDE9 || LOWORD(CurrentServerSiloGlobals[68].Blink) == 0xFDE9 )
    return 1;
  v5 = 0;
  Blink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Blink;
  if ( !Blink )
    return v5;
  if ( v1 )
    result = HIWORD(Blink[52].Blink) == 0xFDE9;
  else
    result = WORD2(Blink[52].Blink) == 0xFDE9;
  v5 = result;
  return result;
}
