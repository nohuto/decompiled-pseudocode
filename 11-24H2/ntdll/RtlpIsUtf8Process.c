/*
 * XREFs of RtlpIsUtf8Process @ 0x18008D5B0
 * Callers:
 *     RtlUnicodeStringToOemString @ 0x18007C250 (RtlUnicodeStringToOemString.c)
 *     RtlUpperChar @ 0x18008D1D0 (RtlUpperChar.c)
 *     LdrpSnapKernelBaseExtensions @ 0x18008D200 (LdrpSnapKernelBaseExtensions.c)
 *     RtlDnsHostNameToComputerName @ 0x1800CF200 (RtlDnsHostNameToComputerName.c)
 *     RtlOemToUnicodeN @ 0x1800CF600 (RtlOemToUnicodeN.c)
 *     RtlUpcaseUnicodeToOemN @ 0x1800CF780 (RtlUpcaseUnicodeToOemN.c)
 *     RtlpDidUnicodeToOemWork @ 0x1800CF7F4 (RtlpDidUnicodeToOemWork.c)
 *     RtlUnicodeToOemN @ 0x180102310 (RtlUnicodeToOemN.c)
 *     RtlConsoleMultiByteToUnicodeN @ 0x180136880 (RtlConsoleMultiByteToUnicodeN.c)
 *     CompareNamesCaseSensitive @ 0x180136B60 (CompareNamesCaseSensitive.c)
 *     ComputeNameLength @ 0x180136D00 (ComputeNameLength.c)
 *     RtlGenerate8dot3Name @ 0x180143780 (RtlGenerate8dot3Name.c)
 *     RtlIsNameLegalDOS8Dot3 @ 0x180143C60 (RtlIsNameLegalDOS8Dot3.c)
 *     RtlIsValidOemCharacter @ 0x180143E38 (RtlIsValidOemCharacter.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsUtf8Process()
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return GlobalRtlNlsState.CodePage == 0xFDE9 || CodePageTable.CodePage == 0xFDE9;
}
