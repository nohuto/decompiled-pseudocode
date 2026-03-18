/*
 * XREFs of VidSchiCompleteAllPendingCommand @ 0x140053568
 * Callers:
 *     VidSchiReportHwHang @ 0x140046CF8 (VidSchiReportHwHang.c)
 *     VidSchFlushAdapter @ 0x1400A5430 (VidSchFlushAdapter.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14001D710 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x140024534 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchiCompletePendingFlip @ 0x140027F68 (VidSchiCompletePendingFlip.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14002D720 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x140033860 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     VidSchiCompletePreemption @ 0x14003D2FC (VidSchiCompletePreemption.c)
 *     ?VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x14004A6A4 (-VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     memset @ 0x140056780 (memset.c)
 */

__int64 __fastcall VidSchiCompleteAllPendingCommand(__int64 a1)
{
  unsigned int v1; // esi
  unsigned int i; // r14d
  __int64 *v4; // r15
  __int64 v5; // r15
  LARGE_INTEGER *v6; // rbx
  bool v7; // zf
  __int64 v8; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-60h] BYREF
  __int64 v11; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v12[2]; // [rsp+40h] [rbp-40h] BYREF
  char v13; // [rsp+50h] [rbp-30h]
  int v14; // [rsp+54h] [rbp-2Ch]
  _BYTE v15[40]; // [rsp+58h] [rbp-28h] BYREF

  v1 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 80); ++i )
  {
    v4 = *(__int64 **)(a1 + 688);
    if ( i < *(_DWORD *)(a1 + 760) )
      v4 += i;
    v5 = *v4;
    if ( (*(_DWORD *)(v5 + 12) & 2) != 0 )
    {
      VidSchiRundownHardwareScheduledContexts((struct _VIDSCH_NODE *)v5);
    }
    else
    {
      memset(&LockHandle, 0, sizeof(LockHandle));
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1984), &LockHandle);
      v6 = (LARGE_INTEGER *)(*(_QWORD *)(v5 + 184) + 112LL * *(unsigned int *)(v5 + 196));
      memset(v6, 0, 0x70uLL);
      *(_DWORD *)(v5 + 196) = (*(_DWORD *)(v5 + 196) + 1) & (*(_DWORD *)(v5 + 192) - 1);
      v6[1] = KeQueryPerformanceCounter(0LL);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v6->LowPart = 7;
      v6[2] = *(LARGE_INTEGER *)(v5 + 152);
      LOBYTE(v6[3].LowPart) = *(_BYTE *)(a1 + 3268) & 1;
      v7 = *(_DWORD *)(a1 + 3244) == 0;
      BYTE2(v6[3].u.LowPart) = 0;
      BYTE1(v6[3].LowPart) = !v7;
      VidSchiCompletePendingCommandInNodeHwQueue(v5, *(_QWORD *)(v5 + 152), 0);
      v8 = *(_QWORD *)(v5 + 168);
      *(_QWORD *)(v5 + 64) = v8;
      *(_QWORD *)(v5 + 72) = v8;
      VidSchiCompletePreemption(v5);
    }
  }
  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v15, (unsigned __int64 *)(a1 + 1984), 1, 0);
  v12[1] = v12;
  v12[0] = v12;
  v11 = a1;
  v13 = 0;
  v14 = 2;
  if ( *(_DWORD *)(a1 + 40) )
  {
    do
      VidSchiCompletePendingFlip((struct HwQueueStagingList *)&v11, a1, v1++, 9u);
    while ( v1 < *(_DWORD *)(a1 + 40) );
  }
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v11);
  AcquireSpinLock::Release((AcquireSpinLock *)v15);
  return 0LL;
}
