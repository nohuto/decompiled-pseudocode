/*
 * XREFs of CmpValueToData @ 0x1407E3B14
 * Callers:
 *     CmpFindControlSet @ 0x1407E1C14 (CmpFindControlSet.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140C4A598 (CmSelectQualifiedInstallLanguage.c)
 *     CmpAddDriverToList @ 0x140C4CE04 (CmpAddDriverToList.c)
 *     CmpFindTagIndex @ 0x140C4DCD4 (CmpFindTagIndex.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140C4E0E8 (CmpGetStateSepKeysRedirectionPathValue.c)
 *     CmpIsLoadType @ 0x140C4E2A4 (CmpIsLoadType.c)
 *     CmpSortDriverList @ 0x140C4EA7C (CmpSortDriverList.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     CmpGetValueData @ 0x14087A8E0 (CmpGetValueData.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
