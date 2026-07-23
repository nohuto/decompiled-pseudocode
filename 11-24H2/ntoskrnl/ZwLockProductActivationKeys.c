/*
 * XREFs of ZwLockProductActivationKeys @ 0x1406A9650
 * Callers:
 *     ExInitializeTimeRefresh @ 0x140C426DC (ExInitializeTimeRefresh.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLockProductActivationKeys(ULONG *pPrivateVer, ULONG *pSafeMode)
{
  _disable();
  __readeflags();
  return KiServiceInternal(pPrivateVer);
}
