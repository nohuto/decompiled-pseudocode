/*
 * XREFs of VidSchiCleanupDeferredWaiterContext @ 0x14002E16C
 * Callers:
 *     VidSchFlushContext @ 0x1401008A0 (VidSchFlushContext.c)
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001D740 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x14002C1B0 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14002D720 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x14002F810 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x14002FA0C (VidSchiUnwaitWaitQueuePacket.c)
 */

void __fastcall VidSchiCleanupDeferredWaiterContext(__int64 a1)
{
  __int64 v2; // rbx
  _QWORD **v3; // rdi
  _QWORD *v4; // rbx
  int v5; // eax
  __int64 v6; // [rsp+20h] [rbp-50h] BYREF
  __int128 v7; // [rsp+28h] [rbp-48h] BYREF
  char v8; // [rsp+38h] [rbp-38h]
  int v9; // [rsp+3Ch] [rbp-34h]
  _QWORD v10[4]; // [rsp+40h] [rbp-30h] BYREF
  __int16 v11; // [rsp+60h] [rbp-10h]

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL);
  v11 = 0;
  v10[0] = v2 + 1984;
  AcquireSpinLock::Acquire((Acquire *)v10);
  v3 = (_QWORD **)(a1 + 696);
  v6 = v2;
  v8 = 0;
  v9 = 2;
  v7 = 0LL;
  v4 = *v3;
  *((_QWORD *)&v7 + 1) = &v7;
  *(_QWORD *)&v7 = &v7;
  if ( v4 == v3 )
    goto LABEL_2;
  do
  {
    v5 = *((_DWORD *)v4 + 180);
    v4 = (_QWORD *)*v4;
    if ( (v5 & 4) != 0 )
      VidSchiUnblockUnorderedWaitQueuePacket((HwQueueStagingList *)&v6);
    else
      VidSchiUnwaitWaitQueuePacket((HwQueueStagingList *)&v6);
  }
  while ( v4 != v3 );
  if ( !v8 && v9 )
LABEL_2:
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v6, 0LL);
  AcquireSpinLock::Release((AcquireSpinLock *)v10);
}
