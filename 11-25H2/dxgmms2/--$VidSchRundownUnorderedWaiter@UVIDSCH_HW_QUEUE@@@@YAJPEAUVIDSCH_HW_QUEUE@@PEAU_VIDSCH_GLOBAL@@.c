/*
 * XREFs of ??$VidSchRundownUnorderedWaiter@UVIDSCH_HW_QUEUE@@@@YAJPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x140041928
 * Callers:
 *     VidSchFlushHwQueue @ 0x140103DC0 (VidSchFlushHwQueue.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14001D710 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14002D720 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x140033860 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     ?VidSchiRundownUnorderedWaiterHwQueue@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x140051040 (-VidSchiRundownUnorderedWaiterHwQueue@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@@Z.c)
 */

__int64 __fastcall VidSchRundownUnorderedWaiter<VIDSCH_HW_QUEUE>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        union _LARGE_INTEGER Interval)
{
  __int64 v8; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v9[2]; // [rsp+28h] [rbp-48h] BYREF
  char v10; // [rsp+38h] [rbp-38h]
  int v11; // [rsp+3Ch] [rbp-34h]
  _BYTE v12[48]; // [rsp+40h] [rbp-30h] BYREF

  if ( *(_DWORD *)(a1 + 156) )
  {
    Interval.QuadPart = -1000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
    if ( *(_DWORD *)(a1 + 156) )
    {
      AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v12, (unsigned __int64 *)(a2 + 1984), 1, 0);
      v8 = a2;
      v10 = 0;
      v9[1] = v9;
      v11 = 2;
      v9[0] = v9;
      VidSchiRundownUnorderedWaiterHwQueue((struct HwQueueStagingList *)&v8, (struct VIDSCH_HW_QUEUE *)a1);
      HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v8);
      AcquireSpinLock::Release((AcquireSpinLock *)v12);
    }
  }
  return 0LL;
}
