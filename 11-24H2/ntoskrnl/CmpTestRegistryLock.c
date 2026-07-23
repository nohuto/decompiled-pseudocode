/*
 * XREFs of CmpTestRegistryLock @ 0x140666994
 * Callers:
 *     CmpDoReOpenTransKey @ 0x1407E74C4 (CmpDoReOpenTransKey.c)
 *     CmpLockRegistryExclusive @ 0x140881C30 (CmpLockRegistryExclusive.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14022A090 (ExIsResourceAcquiredSharedLite.c)
 *     CmpIsRegistryLockAcquired @ 0x140414BC0 (CmpIsRegistryLockAcquired.c)
 */

bool CmpTestRegistryLock()
{
  ULONG IsRegistryLockAcquired; // eax

  if ( BYTE5(NlsMbOemCodePageTag) )
    return 1;
  if ( dword_140EF6F68 )
    IsRegistryLockAcquired = CmpIsRegistryLockAcquired();
  else
    IsRegistryLockAcquired = ExIsResourceAcquiredSharedLite(CmpRegistryLock);
  return IsRegistryLockAcquired != 0;
}
