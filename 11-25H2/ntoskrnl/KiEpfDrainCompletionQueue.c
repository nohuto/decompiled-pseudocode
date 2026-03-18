/*
 * XREFs of KiEpfDrainCompletionQueue @ 0x1405BF3EC
 * Callers:
 *     KiEpfCompletionDpcRoutine @ 0x1405BF3D0 (KiEpfCompletionDpcRoutine.c)
 *     KiEpfHandleNotification @ 0x1405BF470 (KiEpfHandleNotification.c)
 *     HvlNotifyPageHeat @ 0x140695EB4 (HvlNotifyPageHeat.c)
 *     KiEpfInitialize @ 0x140C18CE0 (KiEpfInitialize.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiEpfComplete @ 0x1405BF2D8 (KiEpfComplete.c)
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
