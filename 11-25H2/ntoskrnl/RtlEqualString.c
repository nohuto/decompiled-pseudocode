/*
 * XREFs of RtlEqualString @ 0x1404884F0
 * Callers:
 *     IopGetBootDiskInformation @ 0x140C0C6AC (IopGetBootDiskInformation.c)
 *     IopInitializeBuiltinDriver @ 0x140C54388 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     RtlCompareString @ 0x1408E8980 (RtlCompareString.c)
 */

BOOLEAN __stdcall RtlEqualString(const STRING *String1, const STRING *String2, BOOLEAN CaseInSensitive)
{
  return String1->Length == String2->Length && RtlCompareString(String1, String2, CaseInSensitive) == 0;
}
