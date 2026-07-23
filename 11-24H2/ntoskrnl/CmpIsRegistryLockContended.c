/*
 * XREFs of CmpIsRegistryLockContended @ 0x1404EDD08
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x140909AC4 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

char CmpIsRegistryLockContended()
{
  char v0; // dl
  PERESOURCE v2; // r9
  unsigned int v3; // r8d

  v0 = 0;
  if ( dword_140EF6F68 )
  {
    v2 = CmpRegistryLock;
    v3 = 0;
    while ( ((__int64)v2->SystemResourcesList.Flink->Flink & 2) == 0 )
    {
      ++v3;
      v2 = (PERESOURCE)((char *)v2 + 8);
      if ( v3 >= 0x20 )
        return v0;
    }
    return 1;
  }
  if ( (CmpRegistryLock->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)CmpRegistryLock, 0LL, 0LL);
  if ( CmpRegistryLock->NumberOfSharedWaiters || CmpRegistryLock->NumberOfExclusiveWaiters )
    return 1;
  return v0;
}
