/*
 * XREFs of ?SaveResourceCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z @ 0x14009D460
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x1400188F8 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1400341A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x14009CE70 (-IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EPEAUVIDMM_LOCAL_ALLOC@@_N@Z @ 0x1400A9D88 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EPEAUVIDMM_LOCAL_ALLOC@@_N@.c)
 *     ?SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010EA94 (-SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::SaveResourceCB(
        VIDMM_SEGMENT *this,
        struct VIDMM_PHYSICAL_ALLOC *a2,
        bool *a3,
        void *a4)
{
  __int64 v4; // rsi
  VIDMM_GLOBAL *v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdi

  v4 = *(_QWORD *)a2;
  if ( VIDMM_SEGMENT::IsMovableResourceNoDisplayingCB(a2) )
  {
    WdLogSingleEntry1(4LL, v4);
    WdLogGlobalForLineNumber = 6807;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v4 + 312, 0LL);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(v4 + 320) = KeGetCurrentThread();
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v4 + 136));
    if ( (byte_140081243 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer();
    VIDMM_GLOBAL::SuspendSchedulerDeviceForMove(v7, (struct VIDMM_GLOBAL_ALLOC *)v4);
    v8 = *((_QWORD *)a2 + 8);
    v9 = *((_QWORD *)a2 + 9);
    VIDMM_MEMORY_SEGMENT::TransferToSystem(
      this,
      (struct VIDMM_GLOBAL_ALLOC *)v4,
      1u,
      *(struct VIDMM_LOCAL_ALLOC **)(v4 + 48),
      1);
    *((_QWORD *)a2 + 13) = v8;
    *((_QWORD *)a2 + 12) = v9;
  }
  return 0LL;
}
