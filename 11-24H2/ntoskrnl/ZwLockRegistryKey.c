/*
 * XREFs of ZwLockRegistryKey @ 0x1406A9670
 * Callers:
 *     SepZwLockRegistryKey @ 0x14078EC00 (SepZwLockRegistryKey.c)
 *     NtLockProductActivationKeys @ 0x140A32230 (NtLockProductActivationKeys.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLockRegistryKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
