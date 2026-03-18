/*
 * XREFs of KiEpfDrainCompletionQueue @ 0x1405C34CC
 * Callers:
 *     KiEpfCompletionDpcRoutine @ 0x1405C34B0 (KiEpfCompletionDpcRoutine.c)
 *     KiEpfHandleNotification @ 0x1405C3550 (KiEpfHandleNotification.c)
 *     HvlNotifyPageHeat @ 0x1406A10E8 (HvlNotifyPageHeat.c)
 *     KiEpfInitialize @ 0x140C29DF0 (KiEpfInitialize.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KiEpfComplete @ 0x1405C33B8 (KiEpfComplete.c)
 */

void KiEpfDrainCompletionQueue()
{
  unsigned __int64 v0; // rbx
  __int64 v1; // rax
  char v2; // di

  v0 = 0LL;
  if ( KiEpfCompletionQueue )
  {
    while ( 1 )
    {
      KxAcquireSpinLock(&KiEpfCompletionQueueSpinLock);
      v1 = *(_QWORD *)KiEpfCompletionQueue;
      if ( *(_QWORD *)KiEpfCompletionQueue == *(_QWORD *)(KiEpfCompletionQueue + 8) )
      {
        v2 = 0;
      }
      else
      {
        v0 = *(_QWORD *)(KiEpfCompletionQueue + 8 * v1 + 16);
        v2 = 1;
        *(_QWORD *)KiEpfCompletionQueue = (v1 + 1) % (unsigned __int64)(unsigned int)KiEpfCompletionQueueSize;
      }
      KxReleaseSpinLock((volatile signed __int64 *)&KiEpfCompletionQueueSpinLock);
      if ( !v2 )
        break;
      KiEpfComplete(v0);
    }
  }
}
