/*
 * XREFs of CmpValueToData @ 0x1407D3CE4
 * Callers:
 *     CmpFindControlSet @ 0x1407D1DE4 (CmpFindControlSet.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140C37164 (CmSelectQualifiedInstallLanguage.c)
 *     CmpAddDriverToList @ 0x140C3996C (CmpAddDriverToList.c)
 *     CmpFindTagIndex @ 0x140C3A83C (CmpFindTagIndex.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140C3AC50 (CmpGetStateSepKeysRedirectionPathValue.c)
 *     CmpIsLoadType @ 0x140C3AE0C (CmpIsLoadType.c)
 *     CmpSortDriverList @ 0x140C3B5E4 (CmpSortDriverList.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     CmpGetValueData @ 0x14087A220 (CmpGetValueData.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
