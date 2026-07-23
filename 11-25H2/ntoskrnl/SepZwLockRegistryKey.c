/*
 * XREFs of SepZwLockRegistryKey @ 0x14077F970
 * Callers:
 *     <none>
 * Callees:
 *     ZwLockRegistryKey @ 0x14069D400 (ZwLockRegistryKey.c)
 */

NTSTATUS __fastcall SepZwLockRegistryKey(void *a1)
{
  return ZwLockRegistryKey(a1);
}
