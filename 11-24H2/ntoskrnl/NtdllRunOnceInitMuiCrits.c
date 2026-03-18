/*
 * XREFs of NtdllRunOnceInitMuiCrits @ 0x1405E7E20
 * Callers:
 *     <none>
 * Callees:
 *     ?KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z @ 0x14044FEB0 (-KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z.c)
 */

__int64 __fastcall NtdllRunOnceInitMuiCrits(PRTL_RUN_ONCE RunOnce, struct _KMUTANT **Parameter, PVOID *Context)
{
  KiInitializeMutant(*Parameter, 0LL, 1u, 0);
  return 1LL;
}
