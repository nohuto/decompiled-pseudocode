/*
 * XREFs of KiInsertTimer2 @ 0x1403C08C4
 * Callers:
 *     KiTimer2Expiration @ 0x1403C1420 (KiTimer2Expiration.c)
 *     KiAdjustTimer2DueTimes @ 0x1404551A0 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x1403C2620 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x14043E030 (KiHvEnlightenedGuestPriorityKick.c)
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
      KeGetCurrentPrcb(),
      KiProcessorBlock[(unsigned int)KiClockTimerOwner],
      (unsigned int)KiVpThreadSystemWorkPriority);
  return inserted;
}
