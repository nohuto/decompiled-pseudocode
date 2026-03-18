/*
 * XREFs of SepZwLockRegistryKey @ 0x14077F970
 * Callers:
 *     <none>
 * Callees:
 *     ZwLockRegistryKey @ 0x14069D400 (ZwLockRegistryKey.c)
 */

__int64 __fastcall SepZwLockRegistryKey(__int64 a1, __int64 a2)
{
  return ZwLockRegistryKey(a1, a2);
}
