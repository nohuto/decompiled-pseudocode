/*
 * XREFs of VidSchiSignalRegisteredEvent @ 0x14001DB80
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x140008BD0 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x140009610 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiFlushPendingTokenList @ 0x14001DA00 (VidSchiFlushPendingTokenList.c)
 *     VidSchiProcessSuspendContextCompletedDpc @ 0x14001DD28 (VidSchiProcessSuspendContextCompletedDpc.c)
 *     VidSchiSuspendResumeHwContext @ 0x140020730 (VidSchiSuspendResumeHwContext.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140028980 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     VidSchiSignalFlipEvents @ 0x14002C6E8 (VidSchiSignalFlipEvents.c)
 *     ?VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1400351E0 (-VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x140046B44 (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchUnreferenceDmaBuffer @ 0x1400909F0 (VidSchUnreferenceDmaBuffer.c)
 *     VidSchiDiscardQueuePacket @ 0x1400B83F8 (VidSchiDiscardQueuePacket.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiSignalRegisteredEvent(__int64 a1, struct _KEVENT **a2)
{
  KIRQL v4; // si
  struct _KEVENT *i; // rdi
  int Flink; // ecx
  BOOL v7; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 2000), &LockHandle);
  for ( i = *a2; i != (struct _KEVENT *)a2; i = *(struct _KEVENT **)&i->Header.Lock )
  {
    if ( LODWORD(i->Header.WaitListHead.Blink) == 4 )
    {
      v7 = *(_DWORD *)(*(_QWORD *)&i[1].Header.Lock + 4LL * LODWORD(i[1].Header.WaitListHead.Blink) + 1700) < *(_DWORD *)(*(_QWORD *)&i[1].Header.Lock + 244LL);
    }
    else
    {
      if ( ((__int64)i[1].Header.WaitListHead.Flink & 0x10) == 0 )
        goto LABEL_6;
      Flink = (int)i[1].Header.WaitListHead.Blink->Flink;
      HIDWORD(i[5].Header.WaitListHead.Blink) = Flink;
      v7 = Flink == 0;
    }
    if ( v7 )
    {
LABEL_6:
      ++i[5].Header.LockNV;
      KeSetEvent(i + 4, 0, 0);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeLowerIrql(v4);
}
