/*
 * XREFs of RtlpIsUtf8Process @ 0x180070CD0
 * Callers:
 *     RtlUpperChar @ 0x1800708F0 (RtlUpperChar.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180070920 (LdrpSnapKernelBaseExtensions.c)
 *     RtlUnicodeStringToOemString @ 0x1800AF9B0 (RtlUnicodeStringToOemString.c)
 *     RtlDnsHostNameToComputerName @ 0x1800D3E90 (RtlDnsHostNameToComputerName.c)
 *     RtlOemToUnicodeN @ 0x1800D4290 (RtlOemToUnicodeN.c)
 *     RtlUpcaseUnicodeToOemN @ 0x1800D4410 (RtlUpcaseUnicodeToOemN.c)
 *     RtlpDidUnicodeToOemWork @ 0x1800D4484 (RtlpDidUnicodeToOemWork.c)
 *     RtlUnicodeToOemN @ 0x1801073E0 (RtlUnicodeToOemN.c)
 *     RtlConsoleMultiByteToUnicodeN @ 0x180138650 (RtlConsoleMultiByteToUnicodeN.c)
 *     CompareNamesCaseSensitive @ 0x180138930 (CompareNamesCaseSensitive.c)
 *     ComputeNameLength @ 0x180138AD0 (ComputeNameLength.c)
 *     RtlGenerate8dot3Name @ 0x1801453D0 (RtlGenerate8dot3Name.c)
 *     RtlIsNameLegalDOS8Dot3 @ 0x1801458B0 (RtlIsNameLegalDOS8Dot3.c)
 *     RtlIsValidOemCharacter @ 0x180145A88 (RtlIsValidOemCharacter.c)
 * Callees:
 *     <none>
 */

bool RtlpIsUtf8Process()
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return GlobalRtlNlsState == -535 || word_1801CCFD0 == -535;
}
