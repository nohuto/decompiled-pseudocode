/*
 * XREFs of VidSchiSubmitWaitCommand @ 0x14001EDA0
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1400AE500 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1400AE770 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001D740 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x14001F0E0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiUpdateContextStatus @ 0x1400260E0 (VidSchiUpdateContextStatus.c)
 *     VidSchiCompleteRewindPacket @ 0x1400269F0 (VidSchiCompleteRewindPacket.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x14002F810 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x14002FA0C (VidSchiUnwaitWaitQueuePacket.c)
 */

void __fastcall VidSchiSubmitWaitCommand(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // rbp
  struct _VIDSCH_QUEUE_PACKET *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdx
  int v7; // eax
  int v8; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  __int128 v10; // [rsp+38h] [rbp-40h]
  __int64 v11; // [rsp+48h] [rbp-30h]
  __int64 v12; // [rsp+50h] [rbp-28h] BYREF
  _QWORD v13[2]; // [rsp+58h] [rbp-20h] BYREF
  char v14; // [rsp+68h] [rbp-10h]
  int v15; // [rsp+6Ch] [rbp-Ch]

  v1 = *((_QWORD *)a1 + 11);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = a1;
  v3 = *(_QWORD *)(v1 + 104);
  v4 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1984), &LockHandle);
  v12 = v4;
  v14 = 0;
  v13[1] = v13;
  v13[0] = v13;
  v15 = 1;
  if ( (*(_BYTE *)(v4 + 3268) & 1) != 0
    || *(_DWORD *)(v4 + 3244)
    || *(_BYTE *)(v3 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 200), 0, 0) )
  {
    v8 = *((_DWORD *)v2 + 188);
    if ( (v8 & 1) == 0 )
    {
      if ( (v8 & 4) != 0 )
        VidSchiUnblockUnorderedWaitQueuePacket((HwQueueStagingList *)&v12);
      else
        VidSchiUnwaitWaitQueuePacket((HwQueueStagingList *)&v12);
    }
  }
  if ( (*((_DWORD *)v2 + 188) & 1) != 0 )
  {
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v12, 0LL);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    do
      v2 = VidSchiProcessCompletedQueuePacketInternal(v2);
    while ( v2 );
  }
  else
  {
    v5 = *((_QWORD *)v2 + 11);
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 96) + 24LL);
    v11 = 0LL;
    v10 = 0LL;
    if ( (*(_DWORD *)(v5 + 184) & 4) == 0 )
    {
      WdLogSingleEntry3(4LL, v6, v5, *((unsigned int *)v2 + 28));
      WdLogGlobalForLineNumber = 16118;
      v7 = *(_DWORD *)(v5 + 184) | 4;
      *(_QWORD *)(v5 + 656) = v2;
      *(_DWORD *)(v5 + 184) = v7;
    }
    VidSchiCompleteRewindPacket(v5, 1LL);
    VidSchiUpdateContextStatus(v1, 4LL, 26638LL);
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v12, 0LL);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( !v14 )
  {
    if ( v15 )
      HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v12, 0LL);
  }
}
