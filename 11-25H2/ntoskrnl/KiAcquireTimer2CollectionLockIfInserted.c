/*
 * XREFs of KiAcquireTimer2CollectionLockIfInserted @ 0x1403713FC
 * Callers:
 *     KeDisableTimer2 @ 0x14036F62C (KeDisableTimer2.c)
 *     KeCancelTimer2 @ 0x14036FE50 (KeCancelTimer2.c)
 *     KeSetTimer2 @ 0x140370EF0 (KeSetTimer2.c)
 * Callees:
 *     KiAcquireSpinLockInstrumented @ 0x140253620 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402536F0 (KxWaitForSpinLockAndAcquire.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 */

char __fastcall KiAcquireTimer2CollectionLockIfInserted(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( (*(_BYTE *)(a1 + 1) & 1) != 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)&KiTimer2CollectionLock, 0LL) )
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KiTimer2CollectionLock);
    }
    else
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)&KiTimer2CollectionLock);
    }
    if ( (*(_BYTE *)(a1 + 1) & 1) != 0 )
      return 1;
    else
      KxReleaseSpinLock((volatile signed __int64 *)&KiTimer2CollectionLock);
  }
  return v1;
}
