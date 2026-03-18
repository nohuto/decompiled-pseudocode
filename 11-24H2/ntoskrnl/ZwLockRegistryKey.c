/*
 * XREFs of ZwLockRegistryKey @ 0x1406A86D0
 * Callers:
 *     SepZwLockRegistryKey @ 0x14078EC30 (SepZwLockRegistryKey.c)
 *     NtLockProductActivationKeys @ 0x140A3C920 (NtLockProductActivationKeys.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLockRegistryKey(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
