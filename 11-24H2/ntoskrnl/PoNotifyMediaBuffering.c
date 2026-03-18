/*
 * XREFs of PoNotifyMediaBuffering @ 0x140476430
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPriorityThread @ 0x140248260 (KeQueryPriorityThread.c)
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 */

void __fastcall PoNotifyMediaBuffering(char a1)
{
  char v2; // bl
  KPRIORITY PriorityThread; // eax
  int v4; // edx
  int v5; // eax

  v2 = 0;
  KxAcquireSpinLock(&PpmMediaBufferingWork);
  if ( !byte_140F0D428 )
  {
    v2 = 1;
    byte_140F0D428 = 1;
  }
  byte_140F0D429 = a1;
  KxReleaseSpinLock((volatile signed __int64 *)&PpmMediaBufferingWork);
  if ( v2 )
  {
    PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
    v4 = PriorityThread + 1;
    if ( PriorityThread >= 31 )
      v4 = PriorityThread;
    if ( !a1 )
    {
      v5 = 16;
      if ( v4 > 16 )
        v5 = v4;
      v4 = v5;
    }
    ExQueueWorkItem(&stru_140F0D430, (WORK_QUEUE_TYPE)(v4 + 32));
  }
}
