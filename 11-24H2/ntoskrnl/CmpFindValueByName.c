/*
 * XREFs of CmpFindValueByName @ 0x14086EAC4
 * Callers:
 *     CmpMarkCurrentProfileDirty @ 0x1407CC0BC (CmpMarkCurrentProfileDirty.c)
 *     CmpMarkCurrentValueDirty @ 0x1407CC22C (CmpMarkCurrentValueDirty.c)
 *     CmpFindControlSet @ 0x1407E1C14 (CmpFindControlSet.c)
 *     CmpPreserveSystemHiveData @ 0x1407E26F8 (CmpPreserveSystemHiveData.c)
 *     CmQueryMultipleValueKey @ 0x140870B80 (CmQueryMultipleValueKey.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140C4A598 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetSystemControlValues @ 0x140C4ABDC (CmpGetSystemControlValues.c)
 *     CmpAddDriverToList @ 0x140C4CE04 (CmpAddDriverToList.c)
 *     CmpFindTagIndex @ 0x140C4DCD4 (CmpFindTagIndex.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140C4E0E8 (CmpGetStateSepKeysRedirectionPathValue.c)
 *     CmpIsLoadType @ 0x140C4E2A4 (CmpIsLoadType.c)
 *     CmpSortDriverList @ 0x140C4EA7C (CmpSortDriverList.c)
 * Callees:
 *     CmpFindNameInListWithStatus @ 0x140870840 (CmpFindNameInListWithStatus.c)
 */

__int64 __fastcall CmpFindValueByName(ULONG_PTR a1)
{
  __int64 v2; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v2) = 0;
  CmpFindNameInListWithStatus(a1, 0LL, (__int64)&v2);
  return (unsigned int)v2;
}
