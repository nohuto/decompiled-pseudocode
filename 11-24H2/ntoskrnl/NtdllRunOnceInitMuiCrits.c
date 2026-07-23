/*
 * XREFs of NtdllRunOnceInitMuiCrits @ 0x1405E5410
 * Callers:
 *     <none>
 * Callees:
 *     ?KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z @ 0x140445120 (-KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z.c)
 */

__int64 __fastcall NtdllRunOnceInitMuiCrits(PRTL_RUN_ONCE a1, struct _KMUTANT **a2, PVOID *a3)
{
  KiInitializeMutant(*a2, 0LL, 1u, 0);
  return 1LL;
}
