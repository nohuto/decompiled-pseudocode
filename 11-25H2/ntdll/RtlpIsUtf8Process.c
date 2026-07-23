/*
 * XREFs of RtlpIsUtf8Process @ 0x1800718D0
 * Callers:
 *     RtlUnicodeStringToOemString @ 0x180069370 (RtlUnicodeStringToOemString.c)
 *     RtlUpperChar @ 0x1800714F0 (RtlUpperChar.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180071520 (LdrpSnapKernelBaseExtensions.c)
 *     RtlOemToUnicodeN @ 0x1800AAAF0 (RtlOemToUnicodeN.c)
 *     RtlDnsHostNameToComputerName @ 0x1800D7360 (RtlDnsHostNameToComputerName.c)
 *     RtlUpcaseUnicodeToOemN @ 0x1800D76C0 (RtlUpcaseUnicodeToOemN.c)
 *     RtlpDidUnicodeToOemWork @ 0x1800D7734 (RtlpDidUnicodeToOemWork.c)
 *     RtlUnicodeToOemN @ 0x180109CF0 (RtlUnicodeToOemN.c)
 *     RtlConsoleMultiByteToUnicodeN @ 0x180139DC0 (RtlConsoleMultiByteToUnicodeN.c)
 *     CompareNamesCaseSensitive @ 0x18013A0A0 (CompareNamesCaseSensitive.c)
 *     ComputeNameLength @ 0x18013A240 (ComputeNameLength.c)
 *     RtlGenerate8dot3Name @ 0x180146940 (RtlGenerate8dot3Name.c)
 *     RtlIsNameLegalDOS8Dot3 @ 0x180146E20 (RtlIsNameLegalDOS8Dot3.c)
 *     RtlIsValidOemCharacter @ 0x180146FF8 (RtlIsValidOemCharacter.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsUtf8Process()
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return GlobalRtlNlsState.CodePage == 0xFDE9 || CodePageTable.CodePage == 0xFDE9;
}
