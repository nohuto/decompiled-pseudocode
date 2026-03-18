/*
 * XREFs of ?EnableDirtyBitTrackingForAllocation@DXGK_VIRTUAL_GPU_GPUP@@QEAAJI@Z @ 0x140212810
 * Callers:
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x1402110B0 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z.c)
 *     ?LiveMigrationGetDirtyBitplane@DXGK_VIRTUAL_GPU_GPUP@@UEAAJI@Z @ 0x140212CF0 (-LiveMigrationGetDirtyBitplane@DXGK_VIRTUAL_GPU_GPUP@@UEAAJI@Z.c)
 * Callees:
 *     ?DdiStartDirtyTracking@ADAPTER_RENDER@@QEAAJQEAX@Z @ 0x1401A7214 (-DdiStartDirtyTracking@ADAPTER_RENDER@@QEAAJQEAX@Z.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::EnableDirtyBitTrackingForAllocation(
        DXGK_VIRTUAL_GPU_GPUP *this,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  int started; // eax
  unsigned int v6; // ebx

  v3 = *((_QWORD *)this + 23);
  v4 = 112LL * a2;
  started = ADAPTER_RENDER::DdiStartDirtyTracking(*((ADAPTER_RENDER **)this + 1), *(void *const *)(v4 + v3 + 96), a3);
  v6 = started;
  if ( started >= 0 )
  {
    *(_DWORD *)(v4 + v3 + 88) = 1;
  }
  else
  {
    WdLogSingleEntry1(3LL, started);
    WdLogGlobalForLineNumber = 1127;
  }
  return v6;
}
