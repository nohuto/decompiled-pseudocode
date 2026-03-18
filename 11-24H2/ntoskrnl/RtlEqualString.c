/*
 * XREFs of RtlEqualString @ 0x140480C10
 * Callers:
 *     IopGetBootDiskInformation @ 0x140C1D87C (IopGetBootDiskInformation.c)
 *     IopInitializeBuiltinDriver @ 0x140C66284 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     RtlCompareString @ 0x1408B0610 (RtlCompareString.c)
 */

BOOLEAN __stdcall RtlEqualString(const STRING *String1, const STRING *String2, BOOLEAN CaseInSensitive)
{
  return String1->Length == String2->Length && RtlCompareString(String1, String2, CaseInSensitive) == 0;
}
