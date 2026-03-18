/*
 * XREFs of RtlpIsUtf8Process @ 0x1408E7140
 * Callers:
 *     CompareNamesCaseSensitive @ 0x14077013C (CompareNamesCaseSensitive.c)
 *     ComputeNameLength @ 0x1407702E8 (ComputeNameLength.c)
 *     RtlAnsiStringToUnicodeString @ 0x1408E5A80 (RtlAnsiStringToUnicodeString.c)
 *     RtlMultiByteToUnicodeSize @ 0x1408E61A0 (RtlMultiByteToUnicodeSize.c)
 *     RtlUpcaseUnicodeToOemN @ 0x1408E6250 (RtlUpcaseUnicodeToOemN.c)
 *     RtlpDidUnicodeToOemWork @ 0x1408E6310 (RtlpDidUnicodeToOemWork.c)
 *     RtlxUnicodeStringToOemSize @ 0x1408E6460 (RtlxUnicodeStringToOemSize.c)
 *     RtlIsNameLegalDOS8Dot3 @ 0x1408E6510 (RtlIsNameLegalDOS8Dot3.c)
 *     RtlUnicodeToMultiByteSize @ 0x1408E66F0 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x1408E67D0 (RtlUnicodeStringToAnsiString.c)
 *     RtlMultiByteToUnicodeN @ 0x1408E6B00 (RtlMultiByteToUnicodeN.c)
 *     RtlUpperString @ 0x1408E6C90 (RtlUpperString.c)
 *     RtlUpperChar @ 0x1408E6D10 (RtlUpperChar.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x1408E6D40 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlUnicodeToMultiByteN @ 0x1408E6E00 (RtlUnicodeToMultiByteN.c)
 *     RtlAnsiCharToUnicodeChar @ 0x1408E6F60 (RtlAnsiCharToUnicodeChar.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1408E7AB0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlGenerate8dot3Name @ 0x1408E7E60 (RtlGenerate8dot3Name.c)
 *     RtlUnicodeToOemN @ 0x1408E8900 (RtlUnicodeToOemN.c)
 *     RtlOemToUnicodeN @ 0x1408E8A50 (RtlOemToUnicodeN.c)
 *     RtlIsValidOemCharacter @ 0x1408E8C40 (RtlIsValidOemCharacter.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
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
