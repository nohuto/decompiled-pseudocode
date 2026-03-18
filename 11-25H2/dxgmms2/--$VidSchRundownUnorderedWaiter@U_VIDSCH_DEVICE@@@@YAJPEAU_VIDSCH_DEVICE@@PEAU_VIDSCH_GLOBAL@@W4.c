/*
 * XREFs of ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x14003CAE0
 * Callers:
 *     VidSchFlushDevice @ 0x1400ACF70 (VidSchFlushDevice.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14001D710 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14002D720 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x140033860 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     VidSchiRundownUnorderedWaiterDevice @ 0x14004AB0C (VidSchiRundownUnorderedWaiterDevice.c)
 */

__int64 __fastcall VidSchRundownUnorderedWaiter<_VIDSCH_DEVICE>(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        union _LARGE_INTEGER Interval)
{
  unsigned int v5; // ebx
  __int64 v9; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v10[2]; // [rsp+28h] [rbp-48h] BYREF
  char v11; // [rsp+38h] [rbp-38h]
  int v12; // [rsp+3Ch] [rbp-34h]
  _BYTE v13[48]; // [rsp+40h] [rbp-30h] BYREF

  v5 = 0;
  if ( a3 != 5 && *(_DWORD *)(a1 + 1844) )
  {
    if ( a3 >= 8 )
    {
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      if ( *(_DWORD *)(a1 + 1844) )
      {
        AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v13, (unsigned __int64 *)(a2 + 1984), 1, 0);
        v9 = a2;
        v11 = 0;
        v10[1] = v10;
        v12 = 2;
        v10[0] = v10;
        VidSchiRundownUnorderedWaiterDevice((struct HwQueueStagingList *)&v9);
        HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v9);
        AcquireSpinLock::Release((AcquireSpinLock *)v13);
      }
    }
    else
    {
      return (unsigned int)-2147483631;
    }
  }
  return v5;
}
