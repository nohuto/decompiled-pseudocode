/*
 * XREFs of CmpFindValueByName @ 0x1408695FC
 * Callers:
 *     CmpMarkCurrentProfileDirty @ 0x1407BC3B4 (CmpMarkCurrentProfileDirty.c)
 *     CmpMarkCurrentValueDirty @ 0x1407BC524 (CmpMarkCurrentValueDirty.c)
 *     CmpFindControlSet @ 0x1407D1DE4 (CmpFindControlSet.c)
 *     CmpPreserveSystemHiveData @ 0x1407D28C8 (CmpPreserveSystemHiveData.c)
 *     CmQueryMultipleValueKey @ 0x14086B654 (CmQueryMultipleValueKey.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140C37164 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetSystemControlValues @ 0x140C377A8 (CmpGetSystemControlValues.c)
 *     CmpAddDriverToList @ 0x140C3996C (CmpAddDriverToList.c)
 *     CmpFindTagIndex @ 0x140C3A83C (CmpFindTagIndex.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140C3AC50 (CmpGetStateSepKeysRedirectionPathValue.c)
 *     CmpIsLoadType @ 0x140C3AE0C (CmpIsLoadType.c)
 *     CmpSortDriverList @ 0x140C3B5E4 (CmpSortDriverList.c)
 * Callees:
 *     CmpFindNameInListWithStatus @ 0x14086B314 (CmpFindNameInListWithStatus.c)
 */

__int64 __fastcall CmpFindValueByName(ULONG_PTR a1)
{
  __int64 v2; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v2) = 0;
  CmpFindNameInListWithStatus(a1, 0LL, (__int64)&v2);
  return (unsigned int)v2;
}
