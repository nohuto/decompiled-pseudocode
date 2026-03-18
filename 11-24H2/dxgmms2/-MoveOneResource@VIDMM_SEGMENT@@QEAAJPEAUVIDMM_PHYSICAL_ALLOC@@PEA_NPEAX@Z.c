/*
 * XREFs of ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z @ 0x14010C590
 * Callers:
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1400F6658 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     VidSchMarkDeviceAsError @ 0x14001F860 (VidSchMarkDeviceAsError.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140031B80 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140031D70 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140036EF0 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     VidSchiUpdateFlipQueueEntriesForMove @ 0x1400501B8 (VidSchiUpdateFlipQueueEntriesForMove.c)
 *     ?IsNonOverlappingResourceCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x14009E760 (-IsNonOverlappingResourceCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14009F494 (-UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z @ 0x1400B0558 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400B3D10 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1400C2B70 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400E5E04 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTE.c)
 *     ?SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010C870 (-SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::MoveOneResource(
        VIDMM_GLOBAL **this,
        struct VIDMM_PHYSICAL_ALLOC *a2,
        bool *a3,
        void *a4)
{
  char *v6; // rdi
  __int64 v7; // rbp
  struct _KTHREAD **v8; // r12
  VIDMM_GLOBAL *v9; // rcx
  SIZE_T *v10; // r15
  __int64 v11; // rcx
  char *v12; // r14
  char *v13; // r12
  char *v14; // r12
  char *v15; // r15
  __int64 v16; // rcx
  VIDMM_SEGMENT *v17; // rcx
  __int64 result; // rax
  void (*v19)(void *); // r8
  char IsNonOverlappingResourceCB; // r14
  unsigned __int16 v21; // ax

  if ( a2 && *((_QWORD *)a2 + 11) && *((_QWORD *)a2 + 13) == *((_QWORD *)a2 + 8) )
  {
    v6 = *(char **)a2;
    v7 = *(_QWORD *)a2 + 328LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v7, 0LL);
    v8 = (struct _KTHREAD **)(v6 + 136);
    *(_QWORD *)(v7 + 8) = KeGetCurrentThread();
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v6 + 136));
    VIDMM_GLOBAL::SuspendSchedulerDeviceForMove(v9, (struct VIDMM_GLOBAL_ALLOC *)v6);
    v10 = (SIZE_T *)((char *)a2 + 72);
    VIDMM_GLOBAL::MemoryTransfer(
      this[3],
      (struct VIDMM_GLOBAL_ALLOC *)v6,
      *((void **)a2 + 2),
      0LL,
      *((struct VIDMM_SEGMENT **)a2 + 8),
      (union _LARGE_INTEGER *)a2 + 9,
      0LL,
      *((struct VIDMM_SEGMENT **)a2 + 8),
      (union _LARGE_INTEGER *)a2 + 12,
      0LL,
      0);
    if ( (*((_DWORD *)v6 + 6) & 0x200000) != 0 )
    {
      WdLogSingleEntry1(1LL, v6);
      WdLogGlobalForLineNumber = 5988;
      DxgkLogInternalTriageEvent(v11, 0x40000LL);
      v12 = (char *)*((_QWORD *)v6 + 14);
      if ( v12 != v6 + 112 )
      {
        do
        {
          v13 = v12;
          v12 = *(char **)v12;
          v14 = v13 - 16;
          v15 = *(char **)v14;
          while ( v15 != v14 )
          {
            v16 = *((_QWORD *)v15 - 4);
            v15 = *(char **)v15;
            VidSchMarkDeviceAsError(*(_QWORD *)(v16 + 32), 24LL);
          }
        }
        while ( v12 != v6 + 112 );
        v10 = (SIZE_T *)((char *)a2 + 72);
        v8 = (struct _KTHREAD **)(v6 + 136);
      }
    }
    v17 = (VIDMM_SEGMENT *)*((_QWORD *)a2 + 8);
    *v10 = *((_QWORD *)a2 + 12);
    *(_WORD *)(*((_QWORD *)v6 + 49) + 10LL) = VIDMM_SEGMENT::DriverId(v17);
    *(_QWORD *)(*((_QWORD *)v6 + 49) + 40LL) = *v10 + *(_QWORD *)(*((_QWORD *)a2 + 8) + 48LL);
    *((_QWORD *)a2 + 13) = 0LL;
    *((_QWORD *)a2 + 11) = 0LL;
    if ( VIDMM_GLOBAL::IsTdrPending(this[3]) )
    {
      *(_QWORD *)(v7 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v7, 0LL);
      KeLeaveCriticalRegion();
      DXGFASTMUTEX::Release(v8);
      WdLogSingleEntry0(3LL);
      result = 3221226166LL;
      WdLogGlobalForLineNumber = 6032;
      return result;
    }
    IsNonOverlappingResourceCB = VIDMM_SEGMENT::IsNonOverlappingResourceCB(a2);
    if ( IsNonOverlappingResourceCB )
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this[3], *((_DWORD *)v6 + 6) & 0x3F, v19);
    if ( (**((_DWORD **)v6 + 49) & 0x10000) != 0 )
    {
      v21 = VIDMM_SEGMENT::DriverId((VIDMM_SEGMENT *)this);
      VIDMM_GLOBAL::NotifyResidency((ADAPTER_RENDER **)this[3], (struct VIDMM_GLOBAL_ALLOC *)v6, 1u, v21, *v10);
    }
    if ( IsNonOverlappingResourceCB )
      VidSchiUpdateFlipQueueEntriesForMove(
        *(_QWORD *)(*((_QWORD *)this[3] + 2) + 744LL),
        *((_QWORD *)v6 + 49),
        (int)v19,
        *(_QWORD *)(*((_QWORD *)a2 + 8) + 48LL),
        *v10);
    VIDMM_SEGMENT::UpdateVirtualAddressForNewResourceLocation((VIDMM_SEGMENT *)this, (struct VIDMM_GLOBAL_ALLOC *)v6);
    *(_QWORD *)(v7 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v7, 0LL);
    KeLeaveCriticalRegion();
    DXGFASTMUTEX::Release(v8);
  }
  return 0LL;
}
