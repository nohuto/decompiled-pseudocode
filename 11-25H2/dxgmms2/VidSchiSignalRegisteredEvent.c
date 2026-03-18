/*
 * XREFs of VidSchiSignalRegisteredEvent @ 0x14002F320
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1400090A0 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiSignalFlipEvents @ 0x14000BD24 (VidSchiSignalFlipEvents.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140010190 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     VidSchiFlushPendingTokenList @ 0x14002906C (VidSchiFlushPendingTokenList.c)
 *     VidSchiSuspendResumeHwContext @ 0x14002B380 (VidSchiSuspendResumeHwContext.c)
 *     VidSchiProcessSuspendContextCompletedDpc @ 0x14002EFEC (VidSchiProcessSuspendContextCompletedDpc.c)
 *     ?VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z @ 0x140036730 (-VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x140047F6C (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1400483F0 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchUnreferenceDmaBuffer @ 0x1400909F8 (VidSchUnreferenceDmaBuffer.c)
 *     VidSchiDiscardQueuePacket @ 0x1400B0048 (VidSchiDiscardQueuePacket.c)
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
