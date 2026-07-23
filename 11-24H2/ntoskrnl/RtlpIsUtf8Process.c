/*
 * XREFs of RtlpIsUtf8Process @ 0x140905B50
 * Callers:
 *     CompareNamesCaseSensitive @ 0x14077F2BC (CompareNamesCaseSensitive.c)
 *     ComputeNameLength @ 0x14077F468 (ComputeNameLength.c)
 *     RtlAnsiStringToUnicodeString @ 0x140903ED0 (RtlAnsiStringToUnicodeString.c)
 *     RtlMultiByteToUnicodeSize @ 0x140904BB0 (RtlMultiByteToUnicodeSize.c)
 *     RtlUpcaseUnicodeToOemN @ 0x140904C60 (RtlUpcaseUnicodeToOemN.c)
 *     RtlpDidUnicodeToOemWork @ 0x140904D20 (RtlpDidUnicodeToOemWork.c)
 *     RtlxUnicodeStringToOemSize @ 0x140904E70 (RtlxUnicodeStringToOemSize.c)
 *     RtlIsNameLegalDOS8Dot3 @ 0x140904F20 (RtlIsNameLegalDOS8Dot3.c)
 *     RtlUnicodeToMultiByteSize @ 0x140905100 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x1409051E0 (RtlUnicodeStringToAnsiString.c)
 *     RtlMultiByteToUnicodeN @ 0x140905510 (RtlMultiByteToUnicodeN.c)
 *     RtlUpperString @ 0x1409056A0 (RtlUpperString.c)
 *     RtlUpperChar @ 0x140905720 (RtlUpperChar.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x140905750 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlUnicodeToMultiByteN @ 0x140905810 (RtlUnicodeToMultiByteN.c)
 *     RtlAnsiCharToUnicodeChar @ 0x140905970 (RtlAnsiCharToUnicodeChar.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1409064C0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlGenerate8dot3Name @ 0x140906940 (RtlGenerate8dot3Name.c)
 *     RtlUnicodeToOemN @ 0x1409072A0 (RtlUnicodeToOemN.c)
 *     RtlOemToUnicodeN @ 0x140907320 (RtlOemToUnicodeN.c)
 *     RtlIsValidOemCharacter @ 0x1409075B0 (RtlIsValidOemCharacter.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
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
