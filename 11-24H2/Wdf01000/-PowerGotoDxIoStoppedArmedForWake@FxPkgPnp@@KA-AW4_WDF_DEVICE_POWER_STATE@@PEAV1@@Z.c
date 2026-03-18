/*
 * XREFs of ?PowerGotoDxIoStoppedArmedForWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x140073D80
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerGotoDxIoStoppedCommon@FxPkgPnp@@IEAAEE@Z @ 0x140032EB4 (-PowerGotoDxIoStoppedCommon@FxPkgPnp@@IEAAEE@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerGotoDxIoStoppedArmedForWake(FxPkgPnp *This)
{
  return FxPkgPnp::PowerGotoDxIoStoppedCommon(This, 0) != 0 ? 805 : 853;
}
