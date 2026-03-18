/*
 * XREFs of VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x14002B914
 * Callers:
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400AB430 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     VidSchiResumeFlipQueues @ 0x1400FFDEC (VidSchiResumeFlipQueues.c)
 * Callees:
 *     VidSchUnwaitFlipQueue @ 0x14000EC30 (VidSchUnwaitFlipQueue.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001D740 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x14002C1B0 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14002D720 (-Release@AcquireSpinLock@@QEAAXXZ.c)
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
  VidSchUnwaitFlipQueue((struct HwQueueStagingList *)&v2, a1);
  if ( !v4 && v5 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v2, 0LL);
  AcquireSpinLock::Release((AcquireSpinLock *)v6);
}
