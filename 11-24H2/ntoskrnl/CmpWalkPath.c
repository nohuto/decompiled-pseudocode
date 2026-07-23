/*
 * XREFs of CmpWalkPath @ 0x1407E389C
 * Callers:
 *     CmpPreserveSystemHiveData @ 0x1407E26F8 (CmpPreserveSystemHiveData.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140C4A598 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetSystemControlValues @ 0x140C4ABDC (CmpGetSystemControlValues.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     CmpWalkUnicodeStringPath @ 0x1407E38E4 (CmpWalkUnicodeStringPath.c)
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
