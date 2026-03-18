/*
 * XREFs of ?SmStUnhandledExceptionFilter@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@W4_SMST_STORE_EXCEPTION_SOURCE@1@@Z @ 0x1405FE4D8
 * Callers:
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x14020A380 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x1403489C4 (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 *     ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x140349AFC (-SmStDirectReadComplete@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRA.c)
 *     ?SmStWorkerThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14049FE80 (-SmStWorkerThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     SmHpChunkHeapProtect @ 0x140396B3C (SmHpChunkHeapProtect.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStUnhandledExceptionFilter(
        ULONG_PTR BugCheckParameter1,
        int **BugCheckParameter2,
        int a3)
{
  int v6; // ecx

  if ( a3 == 1 )
  {
    v6 = **BugCheckParameter2;
    if ( v6 == -1073741819 || v6 == -1073740768 )
      SmHpChunkHeapProtect(BugCheckParameter1 + 272, 2, 1u);
  }
  if ( BugCheckParameter2 )
    KeBugCheckEx(0x154u, BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, a3, 0LL);
  return 0LL;
}
