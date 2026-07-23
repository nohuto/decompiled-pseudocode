/*
 * XREFs of ZwDisableLastKnownGood @ 0x1406A9010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwDisableLastKnownGood(void)
{
  __int64 v0; // rcx

  _disable();
  __readeflags();
  return KiServiceInternal(v0);
}
