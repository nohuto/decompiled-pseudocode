/*
 * XREFs of VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x14001F7C4
 * Callers:
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400B3810 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     VidSchiResumeFlipQueues @ 0x1400FF95C (VidSchiResumeFlipQueues.c)
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x1400122E0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x14001FB70 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14001FEE0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchUnwaitFlipQueue @ 0x14002A240 (VidSchUnwaitFlipQueue.c)
 */

void __fastcall VidSchiUnwaitFlipQueueUnderSchedulerSpinLock(__int64 a1)
{
  __int64 v2; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v3[2]; // [rsp+28h] [rbp-48h] BYREF
  char v4; // [rsp+38h] [rbp-38h]
  int v5; // [rsp+3Ch] [rbp-34h]
  _QWORD v6[4]; // [rsp+40h] [rbp-30h] BYREF
  __int16 v7; // [rsp+60h] [rbp-10h]

  v7 = 0;
  v6[0] = a1 + 1984;
  AcquireSpinLock::Acquire((AcquireSpinLock *)v6);
  v2 = a1;
  v4 = 0;
  v3[1] = v3;
  v5 = 2;
  v3[0] = v3;
  VidSchUnwaitFlipQueue(&v2, a1);
  if ( !v4 && v5 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v2, 0LL);
  AcquireSpinLock::Release((AcquireSpinLock *)v6);
}
