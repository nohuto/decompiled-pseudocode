/*
 * XREFs of ?Worker@CTDR_SUBMIT_REPORT_THREAD@@MEAAXXZ @ 0x1401D0C10
 * Callers:
 *     <none>
 * Callees:
 *     ?TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1401CFA18 (-TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 */

void __fastcall CTDR_SUBMIT_REPORT_THREAD::Worker(struct _TDR_RECOVERY_CONTEXT **this)
{
  TdrDereferenceRecoveryContext(this[3], 0);
}
