/*
 * XREFs of ??$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x140050418
 * Callers:
 *     VidSchFlushAdapter @ 0x1400A6CB0 (VidSchFlushAdapter.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1400122B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14001FEE0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1400316A0 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     VidSchiRundownUnorderedWaiterGlobal @ 0x14004FD60 (VidSchiRundownUnorderedWaiterGlobal.c)
 */

__int64 __fastcall VidSchRundownUnorderedWaiter<_VIDSCH_GLOBAL>(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v7; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v8[2]; // [rsp+28h] [rbp-48h] BYREF
  char v9; // [rsp+38h] [rbp-38h]
  int v10; // [rsp+3Ch] [rbp-34h]
  _BYTE v11[48]; // [rsp+40h] [rbp-30h] BYREF

  v3 = 0;
  if ( a3 != 5 && *(_DWORD *)(a1 + 872) )
  {
    if ( a3 < 8 )
    {
      return (unsigned int)-2147483631;
    }
    else if ( *(_DWORD *)(a1 + 872) )
    {
      AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v11, (unsigned __int64 *)(a2 + 1984), 1, 0);
      v7 = a2;
      v9 = 0;
      v8[1] = v8;
      v10 = 2;
      v8[0] = v8;
      VidSchiRundownUnorderedWaiterGlobal((struct HwQueueStagingList *)&v7, a1);
      HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v7);
      AcquireSpinLock::Release((AcquireSpinLock *)v11);
    }
  }
  return v3;
}
