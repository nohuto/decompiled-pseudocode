/*
 * XREFs of CmpFindValueByName @ 0x14086A794
 * Callers:
 *     CmpMarkCurrentProfileDirty @ 0x1407CBBCC (CmpMarkCurrentProfileDirty.c)
 *     CmpMarkCurrentValueDirty @ 0x1407CBD3C (CmpMarkCurrentValueDirty.c)
 *     CmpFindControlSet @ 0x1407E16C4 (CmpFindControlSet.c)
 *     CmpPreserveSystemHiveData @ 0x1407E21A8 (CmpPreserveSystemHiveData.c)
 *     CmQueryMultipleValueKey @ 0x14086C850 (CmQueryMultipleValueKey.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140C48474 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetSystemControlValues @ 0x140C48AB8 (CmpGetSystemControlValues.c)
 *     CmpAddDriverToList @ 0x140C4AC68 (CmpAddDriverToList.c)
 *     CmpFindTagIndex @ 0x140C4BB38 (CmpFindTagIndex.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140C4BF4C (CmpGetStateSepKeysRedirectionPathValue.c)
 *     CmpIsLoadType @ 0x140C4C108 (CmpIsLoadType.c)
 *     CmpSortDriverList @ 0x140C4C8E0 (CmpSortDriverList.c)
 * Callees:
 *     CmpFindNameInListWithStatus @ 0x14086C510 (CmpFindNameInListWithStatus.c)
 */

__int64 __fastcall CmpFindValueByName(ULONG_PTR a1)
{
  __int64 v2; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v2) = 0;
  CmpFindNameInListWithStatus(a1, 0LL, (__int64)&v2);
  return (unsigned int)v2;
}
