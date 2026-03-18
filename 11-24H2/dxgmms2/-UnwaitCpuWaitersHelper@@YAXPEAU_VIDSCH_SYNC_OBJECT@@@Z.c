/*
 * XREFs of ?UnwaitCpuWaitersHelper@@YAXPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x140039290
 * Callers:
 *     VidSchDestroySyncObject @ 0x1400BAF10 (VidSchDestroySyncObject.c)
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x1400122E0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x14001FB70 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14001FEE0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiRundownMonitoredFenceCpuWaiters @ 0x140039450 (VidSchiRundownMonitoredFenceCpuWaiters.c)
 */

void __fastcall UnwaitCpuWaitersHelper(struct _VIDSCH_SYNC_OBJECT *a1)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v4[2]; // [rsp+28h] [rbp-48h] BYREF
  char v5; // [rsp+38h] [rbp-38h]
  int v6; // [rsp+3Ch] [rbp-34h]
  _QWORD v7[4]; // [rsp+40h] [rbp-30h] BYREF
  __int16 v8; // [rsp+60h] [rbp-10h]

  v1 = *((_QWORD *)a1 + 1);
  v8 = 0;
  v7[0] = v1 + 1984;
  AcquireSpinLock::Acquire((Acquire *)v7);
  v3 = v1;
  v5 = 0;
  v4[1] = v4;
  v6 = 2;
  v4[0] = v4;
  VidSchiRundownMonitoredFenceCpuWaiters(&v3, a1, 0LL);
  if ( !v5 && v6 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v3, 0LL);
  AcquireSpinLock::Release((AcquireSpinLock *)v7);
}
