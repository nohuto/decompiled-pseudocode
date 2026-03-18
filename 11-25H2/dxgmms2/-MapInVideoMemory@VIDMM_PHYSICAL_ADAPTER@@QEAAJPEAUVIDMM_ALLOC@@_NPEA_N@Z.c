/*
 * XREFs of ?MapInVideoMemory@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_ALLOC@@_NPEA_N@Z @ 0x1400CD4F8
 * Callers:
 *     ?LockInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_N1KPEAPEAXPEA_N@Z @ 0x1400CD020 (-LockInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_N1KPEAPEAXPEA_N@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline @ 0x14004CC9C (Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400B9DF0 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?VidMmSuspendAccessToAllocation@@YAPEAVVIDMM_DEVICE@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E05F4 (-VidMmSuspendAccessToAllocation@@YAPEAVVIDMM_DEVICE@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_A.c)
 *     MapInCpuHostAperture @ 0x1401146B4 (MapInCpuHostAperture.c)
 *     MapInCpuVisibleSegment @ 0x140114AC8 (MapInCpuVisibleSegment.c)
 */

__int64 __fastcall VIDMM_PHYSICAL_ADAPTER::MapInVideoMemory(
        VIDMM_PHYSICAL_ADAPTER *this,
        struct VIDMM_ALLOC *a2,
        char a3,
        bool *a4)
{
  __int64 *v8; // rdi
  __int64 v9; // rsi
  __int64 result; // rax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax

  v8 = **(__int64 ***)a2;
  v9 = *v8;
  result = Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result || (*((_BYTE *)v8 + 36) & 1) == 0 )
  {
    v12 = -1073741823;
    v13 = *(_QWORD *)(v9 + 64);
    if ( (*(_DWORD *)(*((_QWORD *)this + 6) + 6984LL) & 0x20) != 0
      || (*((_DWORD *)v8 + 7) & 0x20000) != 0
      || (v11 = *(unsigned int *)v8[47], (v11 & 4) != 0) && !*(_BYTE *)(v13 + 514)
      || (v14 = *(_DWORD *)(v13 + 104), (v14 & 0x2004) == 0) )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v11);
        WdLogGlobalForLineNumber = 3370;
      }
      goto LABEL_16;
    }
    if ( (v14 & 4) != 0 )
    {
      v15 = MapInCpuVisibleSegment(*((_QWORD *)this + 6), a2);
    }
    else
    {
      if ( (v14 & 0x2000) == 0 )
        goto LABEL_16;
      v15 = MapInCpuHostAperture(*((_QWORD *)this + 6), v13, a2);
    }
    v12 = v15;
    if ( v15 >= 0 )
      return v12;
LABEL_16:
    if ( a3 )
    {
      if ( (byte_140081241 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer();
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      v8[40] = 0LL;
      ExReleasePushLockExclusiveEx(v8 + 39, 0LL);
      KeLeaveCriticalRegion();
      if ( (*((_DWORD *)a2 + 7) & 3) == 2 )
      {
        *a4 = 1;
        VidMmSuspendAccessToAllocation(**((struct VIDMM_WORKER_THREAD ***)this + 6), (struct VIDMM_GLOBAL_ALLOC *)v8);
      }
      VIDMM_GLOBAL::EvictOneAllocation(*((VIDMM_GLOBAL **)this + 6), (__int64 **)a2, 0);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v8 + 39, 0LL);
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      v8[40] = (__int64)KeGetCurrentThread();
      return 0;
    }
    return v12;
  }
  return result;
}
