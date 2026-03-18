/*
 * XREFs of VidSchiSubmitSignalCommand @ 0x14001EFA0
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1400AE500 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1400AE770 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     VidSchiCompleteSignalCommmand @ 0x140019130 (VidSchiCompleteSignalCommmand.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001D740 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x14001F0E0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 */

void __fastcall VidSchiSubmitSignalCommand(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // rdi
  struct _VIDSCH_QUEUE_PACKET *v2; // rbx
  __int64 v3; // rsi
  int v4; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int64 v6; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v7[2]; // [rsp+40h] [rbp-28h] BYREF
  char v8; // [rsp+50h] [rbp-18h]
  int v9; // [rsp+54h] [rbp-14h]

  v1 = *((_QWORD *)a1 + 11);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = a1;
  v3 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 1984), &LockHandle);
  v6 = v3;
  v8 = 0;
  v7[1] = v7;
  v7[0] = v7;
  v9 = 1;
  if ( *((_QWORD *)v2 + 5) == v1 + 664 )
  {
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v6, 0LL);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    do
      v2 = VidSchiProcessCompletedQueuePacketInternal(v2);
    while ( v2 );
  }
  else
  {
    v4 = *((_DWORD *)v2 + 20);
    if ( (*((_DWORD *)v2 + 188) & 1) != 0 )
    {
      if ( (v4 & 4) == 0 )
      {
        VidSchiCompleteSignalCommmand((HwQueueStagingList *)&v6, (__int64)v2, 1);
        _InterlockedIncrement((volatile signed __int32 *)(v3 + 1028));
      }
      *((_DWORD *)v2 + 20) |= 9u;
    }
    else
    {
      *((_DWORD *)v2 + 20) = v4 | 1;
    }
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v6, 0LL);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( !v8 )
  {
    if ( v9 )
      HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v6, 0LL);
  }
}
