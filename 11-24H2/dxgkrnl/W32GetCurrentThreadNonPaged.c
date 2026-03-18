/*
 * XREFs of W32GetCurrentThreadNonPaged @ 0x1400709B0
 * Callers:
 *     ?OkToClose@DxgkCompositionObject@@SAEPEAU_EPROCESS@@PEAX1D@Z @ 0x140008B60 (-OkToClose@DxgkCompositionObject@@SAEPEAU_EPROCESS@@PEAX1D@Z.c)
 *     ?Open@DxgkCompositionObject@@SAJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@Z @ 0x140009010 (-Open@DxgkCompositionObject@@SAJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@Z.c)
 *     ?Close@DxgkCompositionObject@@SAXPEAU_EPROCESS@@PEAX_K2@Z @ 0x140009520 (-Close@DxgkCompositionObject@@SAXPEAU_EPROCESS@@PEAX_K2@Z.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140026F60 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 W32GetCurrentThreadNonPaged()
{
  return PsGetCurrentThreadWin32Thread();
}
