/*
 * XREFs of KiAcquireTimer2CollectionLockIfInserted @ 0x1403B115C
 * Callers:
 *     KeDisableTimer2 @ 0x1403AED68 (KeDisableTimer2.c)
 *     KeCancelTimer2 @ 0x1403AF520 (KeCancelTimer2.c)
 *     KeSetTimer2 @ 0x1403B0C60 (KeSetTimer2.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KiAcquireSpinLockInstrumented @ 0x1402851B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140285280 (KxWaitForSpinLockAndAcquire.c)
 */

char __fastcall KiAcquireTimer2CollectionLockIfInserted(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl

  v4 = 0;
  if ( (*(_BYTE *)(a1 + 1) & 1) != 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)&KiTimer2CollectionLock, 0LL) )
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KiTimer2CollectionLock, a2, a3, a4);
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
  return v4;
}
