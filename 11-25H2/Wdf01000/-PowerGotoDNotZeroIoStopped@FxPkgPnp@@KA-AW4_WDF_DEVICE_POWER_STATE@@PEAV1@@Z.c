/*
 * XREFs of ?PowerGotoDNotZeroIoStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x14001B570
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerGotoDxIoStoppedCommon@FxPkgPnp@@IEAAEE@Z @ 0x14001B594 (-PowerGotoDxIoStoppedCommon@FxPkgPnp@@IEAAEE@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerGotoDNotZeroIoStopped(FxPkgPnp *This)
{
  return FxPkgPnp::PowerGotoDxIoStoppedCommon(This, 0) != 0 ? 799 : 853;
}
