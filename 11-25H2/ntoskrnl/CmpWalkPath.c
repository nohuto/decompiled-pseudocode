/*
 * XREFs of CmpWalkPath @ 0x1407D3A6C
 * Callers:
 *     CmpPreserveSystemHiveData @ 0x1407D28C8 (CmpPreserveSystemHiveData.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140C37164 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetSystemControlValues @ 0x140C377A8 (CmpGetSystemControlValues.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     CmpWalkUnicodeStringPath @ 0x1407D3AB4 (CmpWalkUnicodeStringPath.c)
 */

__int64 __fastcall CmpWalkPath(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, PCWSTR SourceString)
{
  unsigned int v3; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v3 = BugCheckParameter4;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return CmpWalkUnicodeStringPath(BugCheckParameter3, v3);
}
