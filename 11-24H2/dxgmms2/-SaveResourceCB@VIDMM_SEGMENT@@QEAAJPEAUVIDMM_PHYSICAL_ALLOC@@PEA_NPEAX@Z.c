/*
 * XREFs of ?SaveResourceCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z @ 0x14009ED10
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x14000D490 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140031B80 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x14009E720 (-IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EPEAUVIDMM_LOCAL_ALLOC@@_N@Z @ 0x1400B2188 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EPEAUVIDMM_LOCAL_ALLOC@@_N@.c)
 *     ?SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010C870 (-SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
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
    WdLogGlobalForLineNumber = 6786;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v4 + 328, 0LL);
    *(_QWORD *)(v4 + 336) = KeGetCurrentThread();
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
