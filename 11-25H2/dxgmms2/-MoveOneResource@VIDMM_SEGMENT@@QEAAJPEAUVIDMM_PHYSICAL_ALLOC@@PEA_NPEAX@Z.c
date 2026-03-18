/*
 * XREFs of ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z @ 0x14010E7A0
 * Callers:
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1400F8690 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     VidSchMarkDeviceAsError @ 0x14002BEA0 (VidSchMarkDeviceAsError.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1400341A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140034390 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x14003835C (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     VidSchiUpdateFlipQueueEntriesForMove @ 0x1400508D8 (VidSchiUpdateFlipQueueEntriesForMove.c)
 *     ?IsNonOverlappingResourceCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x14009CEB0 (-IsNonOverlappingResourceCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14009DBE4 (-UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400A79DC (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTE.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400AB930 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z @ 0x1400BEF44 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1400C2210 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010EA94 (-SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::MoveOneResource(
        VIDMM_GLOBAL **this,
        struct VIDMM_PHYSICAL_ALLOC *a2,
        bool *a3,
        void *a4)
{
  __int64 v6; // rdi
  __int64 v7; // rsi
  struct _KTHREAD **v8; // r15
  VIDMM_GLOBAL *v9; // rcx
  SIZE_T *v10; // r12
  __int64 v11; // rcx
  _QWORD *v12; // r14
  _QWORD *v13; // r12
  _QWORD **v14; // r12
  _QWORD *v15; // r15
  __int64 v16; // rcx
  VIDMM_SEGMENT *v17; // rcx
  __int64 result; // rax
  void (*v19)(void *); // r8
  char IsNonOverlappingResourceCB; // r14
  unsigned __int16 v21; // ax

  if ( a2 && *((_QWORD *)a2 + 11) && *((_QWORD *)a2 + 13) == *((_QWORD *)a2 + 8) )
  {
    v6 = *(_QWORD *)a2;
    v7 = *(_QWORD *)a2 + 312LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v7, 0LL);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    v8 = (struct _KTHREAD **)(v6 + 136);
    *(_QWORD *)(v7 + 8) = KeGetCurrentThread();
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v6 + 136));
    VIDMM_GLOBAL::SuspendSchedulerDeviceForMove(v9, (struct VIDMM_GLOBAL_ALLOC *)v6);
    v10 = (SIZE_T *)((char *)a2 + 72);
    VIDMM_GLOBAL::MemoryTransfer(
      this[3],
      (struct VIDMM_GLOBAL_ALLOC *)v6,
      *((_QWORD *)a2 + 2),
      0LL,
      *((struct VIDMM_SEGMENT **)a2 + 8),
      (union _LARGE_INTEGER *)a2 + 9,
      0LL,
      *((struct VIDMM_SEGMENT **)a2 + 8),
      (union _LARGE_INTEGER *)a2 + 12,
      0LL,
      0);
    if ( (*(_DWORD *)(v6 + 24) & 0x200000) != 0 )
    {
      WdLogSingleEntry1(1LL, v6);
      WdLogGlobalForLineNumber = 6009;
      DxgkLogInternalTriageEvent(v11, 0x40000LL);
      v12 = *(_QWORD **)(v6 + 112);
      if ( v12 != (_QWORD *)(v6 + 112) )
      {
        do
        {
          v13 = v12;
          v12 = (_QWORD *)*v12;
          v14 = (_QWORD **)(v13 - 2);
          v15 = *v14;
          while ( v15 != v14 )
          {
            v16 = *(v15 - 4);
            v15 = (_QWORD *)*v15;
            VidSchMarkDeviceAsError(*(_QWORD *)(v16 + 32), 24);
          }
        }
        while ( v12 != (_QWORD *)(v6 + 112) );
        v8 = (struct _KTHREAD **)(v6 + 136);
        v10 = (SIZE_T *)((char *)a2 + 72);
      }
    }
    v17 = (VIDMM_SEGMENT *)*((_QWORD *)a2 + 8);
    *v10 = *((_QWORD *)a2 + 12);
    *(_WORD *)(*(_QWORD *)(v6 + 376) + 10LL) = VIDMM_SEGMENT::DriverId(v17);
    *(_QWORD *)(*(_QWORD *)(v6 + 376) + 40LL) = *v10 + *(_QWORD *)(*((_QWORD *)a2 + 8) + 48LL);
    *((_QWORD *)a2 + 13) = 0LL;
    *((_QWORD *)a2 + 11) = 0LL;
    if ( VIDMM_GLOBAL::IsTdrPending(this[3]) )
    {
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *(_QWORD *)(v7 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v7, 0LL);
      KeLeaveCriticalRegion();
      DXGFASTMUTEX::Release(v8);
      WdLogSingleEntry0(3LL);
      result = 3221226166LL;
      WdLogGlobalForLineNumber = 6053;
      return result;
    }
    IsNonOverlappingResourceCB = VIDMM_SEGMENT::IsNonOverlappingResourceCB(a2);
    if ( IsNonOverlappingResourceCB )
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this[3], *(_DWORD *)(v6 + 24) & 0x3F, v19);
    if ( (**(_DWORD **)(v6 + 376) & 0x10000) != 0 )
    {
      v21 = VIDMM_SEGMENT::DriverId((VIDMM_SEGMENT *)this);
      VIDMM_GLOBAL::NotifyResidency((ADAPTER_RENDER **)this[3], (struct VIDMM_GLOBAL_ALLOC *)v6, 1u, v21, *v10);
    }
    if ( IsNonOverlappingResourceCB )
      VidSchiUpdateFlipQueueEntriesForMove(
        *(_QWORD *)(*((_QWORD *)this[3] + 2) + 744LL),
        *(_QWORD *)(v6 + 376),
        (int)v19,
        *(_QWORD *)(*((_QWORD *)a2 + 8) + 48LL),
        *v10);
    VIDMM_SEGMENT::UpdateVirtualAddressForNewResourceLocation((VIDMM_SEGMENT *)this, (struct VIDMM_GLOBAL_ALLOC *)v6);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(v7 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v7, 0LL);
    KeLeaveCriticalRegion();
    DXGFASTMUTEX::Release(v8);
  }
  return 0LL;
}
