/*
 * XREFs of CmpValueToData @ 0x1407E35C4
 * Callers:
 *     CmpFindControlSet @ 0x1407E16C4 (CmpFindControlSet.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140C48474 (CmSelectQualifiedInstallLanguage.c)
 *     CmpAddDriverToList @ 0x140C4AC68 (CmpAddDriverToList.c)
 *     CmpFindTagIndex @ 0x140C4BB38 (CmpFindTagIndex.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140C4BF4C (CmpGetStateSepKeysRedirectionPathValue.c)
 *     CmpIsLoadType @ 0x140C4C108 (CmpIsLoadType.c)
 *     CmpSortDriverList @ 0x140C4C8E0 (CmpSortDriverList.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     CmpGetValueData @ 0x1408765B0 (CmpGetValueData.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

PVOID __fastcall CmpValueToData(ULONG_PTR BugCheckParameter3, __int64 a2, ULONG_PTR a3, __int64 a4, __int64 a5)
{
  _BYTE v8[8]; // [rsp+40h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+48h] [rbp-10h] BYREF

  P[0] = 0LL;
  v8[0] = 0;
  if ( !(unsigned __int8)CmpGetValueData(BugCheckParameter3, (__int64)P, (__int64)v8, a5) )
    return 0LL;
  if ( v8[0] == 1 )
  {
    ExFreePoolWithTag(P[0], 0);
    KeBugCheckEx(0x51u, 8uLL, 0LL, BugCheckParameter3, a3);
  }
  return P[0];
}
