/*
 * XREFs of ?VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x14004A6A4
 * Callers:
 *     VidSchiCompleteAllPendingCommand @ 0x140053568 (VidSchiCompleteAllPendingCommand.c)
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001D740 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x14002C1B0 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14002D720 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z @ 0x140036730 (-VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z.c)
 */

void __fastcall VidSchiRundownHardwareScheduledContexts(struct _VIDSCH_NODE *a1)
{
  __int64 v1; // rbx
  _QWORD **v3; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // [rsp+20h] [rbp-50h] BYREF
  __int128 v6; // [rsp+28h] [rbp-48h] BYREF
  char v7; // [rsp+38h] [rbp-38h]
  int v8; // [rsp+3Ch] [rbp-34h]
  _QWORD v9[4]; // [rsp+40h] [rbp-30h] BYREF
  __int16 v10; // [rsp+60h] [rbp-10h]

  v1 = *((_QWORD *)a1 + 3);
  v10 = 0;
  v9[0] = v1 + 1984;
  AcquireSpinLock::Acquire((Acquire *)v9);
  v3 = (_QWORD **)((char *)a1 + 1712);
  v5 = v1;
  v7 = 0;
  v8 = 2;
  v6 = 0LL;
  v4 = *v3;
  *((_QWORD *)&v6 + 1) = &v6;
  *(_QWORD *)&v6 = &v6;
  if ( v4 == v3 )
    goto LABEL_5;
  do
  {
    VidSchiRundownHardwareContext((struct HwQueueStagingList *)&v5, (struct VIDSCH_HW_CONTEXT *)(v4 - 34));
    v4 = (_QWORD *)*v4;
  }
  while ( v4 != v3 );
  if ( !v7 && v8 )
LABEL_5:
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v5, 0LL);
  AcquireSpinLock::Release((AcquireSpinLock *)v9);
}
