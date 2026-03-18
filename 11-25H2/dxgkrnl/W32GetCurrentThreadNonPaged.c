/*
 * XREFs of W32GetCurrentThreadNonPaged @ 0x140070034
 * Callers:
 *     ?OkToClose@DxgkCompositionObject@@SAEPEAU_EPROCESS@@PEAX1D@Z @ 0x140018130 (-OkToClose@DxgkCompositionObject@@SAEPEAU_EPROCESS@@PEAX1D@Z.c)
 *     ?Open@DxgkCompositionObject@@SAJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@Z @ 0x1400185E0 (-Open@DxgkCompositionObject@@SAJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@Z.c)
 *     ?Close@DxgkCompositionObject@@SAXPEAU_EPROCESS@@PEAX_K2@Z @ 0x140018AF0 (-Close@DxgkCompositionObject@@SAXPEAU_EPROCESS@@PEAX_K2@Z.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400267C0 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 W32GetCurrentThreadNonPaged()
{
  return PsGetCurrentThreadWin32Thread();
}
