/*
 * XREFs of KiInsertTimer2 @ 0x14036FD44
 * Callers:
 *     KiTimer2Expiration @ 0x140372250 (KiTimer2Expiration.c)
 *     KiAdjustTimer2DueTimes @ 0x140454A68 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x140315960 (KiHvEnlightenedGuestPriorityKick.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x140371480 (KiInsertTimer2WithCollectionLockHeld.c)
 */

char __fastcall KiInsertTimer2(__int64 a1, char a2, __int64 a3)
{
  __int64 v6; // rdx
  char inserted; // bl
  char v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0;
  KxAcquireSpinLock(&KiTimer2CollectionLock);
  LOBYTE(v6) = a2;
  inserted = KiInsertTimer2WithCollectionLockHeld(a1, v6, a3, &v9);
  KxReleaseSpinLock((volatile signed __int64 *)&KiTimer2CollectionLock);
  if ( v9 )
    KiHvEnlightenedGuestPriorityKick(
      (__int64)KeGetCurrentPrcb(),
      KiProcessorBlock[(unsigned int)KiClockTimerOwner],
      KiVpThreadSystemWorkPriority);
  return inserted;
}
