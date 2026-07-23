/*
 * XREFs of SepZwLockRegistryKey @ 0x14078EC00
 * Callers:
 *     <none>
 * Callees:
 *     ZwLockRegistryKey @ 0x1406A9670 (ZwLockRegistryKey.c)
 */

NTSTATUS __fastcall SepZwLockRegistryKey(void *a1)
{
  return ZwLockRegistryKey(a1);
}
