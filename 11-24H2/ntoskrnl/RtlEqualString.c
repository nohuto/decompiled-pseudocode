/*
 * XREFs of RtlEqualString @ 0x14047B6E0
 * Callers:
 *     IopGetBootDiskInformation @ 0x140C1F8BC (IopGetBootDiskInformation.c)
 *     IopInitializeBuiltinDriver @ 0x140C68400 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     RtlCompareString @ 0x140906870 (RtlCompareString.c)
 */

BOOLEAN __stdcall RtlEqualString(const STRING *String1, const STRING *String2, BOOLEAN CaseInSensitive)
{
  return String1->Length == String2->Length && RtlCompareString(String1, String2, CaseInSensitive) == 0;
}
