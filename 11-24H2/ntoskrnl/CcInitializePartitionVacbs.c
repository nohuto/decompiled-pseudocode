/*
 * XREFs of CcInitializePartitionVacbs @ 0x14057D3B0
 * Callers:
 *     CcInitializePartition @ 0x14057CD28 (CcInitializePartition.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     CcSetVacbInFreeList @ 0x1403F8F18 (CcSetVacbInFreeList.c)
 *     CcGetVacbFromFreeList @ 0x1404341D0 (CcGetVacbFromFreeList.c)
 *     CcInsertVacbArray @ 0x1404897B4 (CcInsertVacbArray.c)
 *     CcAllocateInitializeVacbArray @ 0x1404A41CC (CcAllocateInitializeVacbArray.c)
 *     MmReserveViewInSystemCache @ 0x1407ED6D8 (MmReserveViewInSystemCache.c)
 */

char __fastcall CcInitializePartitionVacbs(__int64 a1)
{
  char v1; // di
  KIRQL v3; // bl
  __int64 *VacbFromFreeList; // r14
  char *InitializeVacbArray; // rbx
  KIRQL v6; // bp
  KIRQL v7; // dl
  __int64 v8; // rax
  KIRQL v9; // bl
  KIRQL v10; // bl

  v1 = 1;
  while ( *(_DWORD *)(a1 + 1248) < (unsigned int)CcMinimumFreeHighPriorityVacbs )
  {
    v3 = KeAcquireQueuedSpinLock(4uLL);
    VacbFromFreeList = CcGetVacbFromFreeList(a1, 0);
    KeReleaseQueuedSpinLock(4uLL, v3);
    if ( VacbFromFreeList )
    {
      v8 = MmReserveViewInSystemCache(*(_QWORD *)(a1 + 8));
      *VacbFromFreeList = v8;
      if ( !v8 )
      {
        v1 = 0;
        v10 = KeAcquireQueuedSpinLock(4uLL);
        CcSetVacbInFreeList(a1, VacbFromFreeList, 0);
        KeReleaseQueuedSpinLock(4uLL, v10);
        return v1;
      }
      v9 = KeAcquireQueuedSpinLock(4uLL);
      CcSetVacbInFreeList(a1, VacbFromFreeList, 1);
      v7 = v9;
    }
    else
    {
      InitializeVacbArray = CcAllocateInitializeVacbArray();
      if ( !InitializeVacbArray )
        return 0;
      v6 = KeAcquireQueuedSpinLock(4uLL);
      CcInsertVacbArray(a1, InitializeVacbArray);
      if ( CcVacbArraysAllocated == 1 )
        *((_DWORD *)InitializeVacbArray + 1) = 1;
      v7 = v6;
    }
    KeReleaseQueuedSpinLock(4uLL, v7);
  }
  return v1;
}
