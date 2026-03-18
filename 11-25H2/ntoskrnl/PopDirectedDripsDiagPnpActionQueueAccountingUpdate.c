/*
 * XREFs of PopDirectedDripsDiagPnpActionQueueAccountingUpdate @ 0x14049E47C
 * Callers:
 *     PopDirectedDripsHandleResiliencyNotification @ 0x140A3BFB8 (PopDirectedDripsHandleResiliencyNotification.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe @ 0x14049E4C8 (PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe.c)
 */

void __fastcall PopDirectedDripsDiagPnpActionQueueAccountingUpdate(__int64 a1, char a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  KIRQL v5; // di

  v5 = KeAcquireSpinLockRaiseToDpc(&qword_140F06090);
  if ( byte_140F06110 != a2 )
  {
    LOBYTE(v3) = a2;
    PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe(v4, v3);
  }
  KeReleaseSpinLock(&qword_140F06090, v5);
}
