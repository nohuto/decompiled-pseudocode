/*
 * XREFs of VidSchiSubmitSignalCommand @ 0x140013B40
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1400B68B0 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1400B6B20 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     VidSchiCompleteSignalCommmand @ 0x14000DCD0 (VidSchiCompleteSignalCommmand.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x1400122E0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x140013C80 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 */

void __fastcall VidSchiSubmitSignalCommand(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // rdi
  struct _VIDSCH_QUEUE_PACKET *v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v9[2]; // [rsp+40h] [rbp-28h] BYREF
  char v10; // [rsp+50h] [rbp-18h]
  int v11; // [rsp+54h] [rbp-14h]

  v1 = *((_QWORD *)a1 + 11);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = a1;
  v3 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 1984), &LockHandle);
  v8 = v3;
  v10 = 0;
  v9[1] = v9;
  v9[0] = v9;
  v11 = 1;
  if ( *((_QWORD *)v2 + 5) == v1 + 664 )
  {
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v8, 0LL);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    do
      v2 = VidSchiProcessCompletedQueuePacketInternal(v2);
    while ( v2 );
  }
  else
  {
    v6 = *((_DWORD *)v2 + 20);
    if ( (*((_DWORD *)v2 + 188) & 1) != 0 )
    {
      if ( (v6 & 4) == 0 )
      {
        LOBYTE(v4) = 1;
        VidSchiCompleteSignalCommmand((HwQueueStagingList *)&v8, (__int64)v2, v4, v5);
        _InterlockedIncrement((volatile signed __int32 *)(v3 + 1028));
      }
      *((_DWORD *)v2 + 20) |= 9u;
    }
    else
    {
      *((_DWORD *)v2 + 20) = v6 | 1;
    }
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v8, 0LL);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( !v10 )
  {
    if ( v11 )
      HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v8, 0LL);
  }
}
