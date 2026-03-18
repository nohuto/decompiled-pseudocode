/*
 * XREFs of PopDirectedDripsDiagPnpActionQueueAccountingUpdate @ 0x14049D55C
 * Callers:
 *     PopDirectedDripsHandleResiliencyNotification @ 0x140A407D8 (PopDirectedDripsHandleResiliencyNotification.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe @ 0x14049D5A8 (PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe.c)
 */

void __fastcall PopDirectedDripsDiagPnpActionQueueAccountingUpdate(__int64 a1, char a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  KIRQL v5; // di

  v5 = KeAcquireSpinLockRaiseToDpc(&qword_140F06650);
  if ( byte_140F066D0 != a2 )
  {
    LOBYTE(v3) = a2;
    PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe(v4, v3);
  }
  KeReleaseSpinLock(&qword_140F06650, v5);
}
