/*
 * XREFs of ??$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x14003F374
 * Callers:
 *     VidSchFlushContext @ 0x140100150 (VidSchFlushContext.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1400122B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14001FEE0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1400316A0 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     VidSchiRundownUnorderedWaiterContext @ 0x14004FD14 (VidSchiRundownUnorderedWaiterContext.c)
 */

__int64 __fastcall VidSchRundownUnorderedWaiter<_VIDSCH_CONTEXT>(
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
  if ( a3 != 5 && *(_DWORD *)(a1 + 796) )
  {
    if ( a3 < 8 )
    {
      return (unsigned int)-2147483631;
    }
    else
    {
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      if ( *(_DWORD *)(a1 + 796) )
      {
        AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v13, (unsigned __int64 *)(a2 + 1984), 1, 0);
        v9 = a2;
        v11 = 0;
        v10[1] = v10;
        v12 = 2;
        v10[0] = v10;
        VidSchiRundownUnorderedWaiterContext((struct HwQueueStagingList *)&v9);
        HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v9);
        AcquireSpinLock::Release((AcquireSpinLock *)v13);
      }
    }
  }
  return v5;
}
