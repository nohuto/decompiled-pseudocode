/*
 * XREFs of ?DecrementBudgetCounter@@YAXPEAXPEA_K_K@Z @ 0x14003965C
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DD034 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall DecrementBudgetCounter(void *a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  __int64 v3; // r9

  v3 = *a2;
  if ( a3 > *a2 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 68LL, a1, v3, a3);
    WdLogGlobalForLineNumber = 195;
    JUMPOUT(0x1400396B1LL);
  }
  *a2 = v3 - a3;
}
