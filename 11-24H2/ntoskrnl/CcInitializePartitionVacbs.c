/*
 * XREFs of CcInitializePartitionVacbs @ 0x14057A840
 * Callers:
 *     CcInitializePartition @ 0x14057A1B8 (CcInitializePartition.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     CcSetVacbInFreeList @ 0x1403EF028 (CcSetVacbInFreeList.c)
 *     CcGetVacbFromFreeList @ 0x140425B70 (CcGetVacbFromFreeList.c)
 *     CcInsertVacbArray @ 0x1404844C8 (CcInsertVacbArray.c)
 *     CcAllocateInitializeVacbArray @ 0x14049EF5C (CcAllocateInitializeVacbArray.c)
 *     MmReserveViewInSystemCache @ 0x1407EDCA8 (MmReserveViewInSystemCache.c)
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
