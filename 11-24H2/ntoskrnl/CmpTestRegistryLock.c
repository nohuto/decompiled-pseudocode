/*
 * XREFs of CmpTestRegistryLock @ 0x1406680A4
 * Callers:
 *     CmpDoReOpenTransKey @ 0x1407E6EF4 (CmpDoReOpenTransKey.c)
 *     CmpLockRegistryExclusive @ 0x14087DD80 (CmpLockRegistryExclusive.c)
 *     CmpLockRegistry @ 0x140BB9E60 (CmpLockRegistry.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x140274B00 (ExIsResourceAcquiredSharedLite.c)
 *     CmpIsRegistryLockAcquired @ 0x14041EE80 (CmpIsRegistryLockAcquired.c)
 */

bool CmpTestRegistryLock()
{
  ULONG IsRegistryLockAcquired; // eax

  if ( BYTE5(NlsMbOemCodePageTag) )
    return 1;
  if ( dword_140EF6D28 )
    IsRegistryLockAcquired = CmpIsRegistryLockAcquired();
  else
    IsRegistryLockAcquired = ExIsResourceAcquiredSharedLite(CmpRegistryLock);
  return IsRegistryLockAcquired != 0;
}
