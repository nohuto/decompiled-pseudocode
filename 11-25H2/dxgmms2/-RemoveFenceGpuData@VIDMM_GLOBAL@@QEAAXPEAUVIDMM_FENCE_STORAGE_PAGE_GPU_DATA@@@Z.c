/*
 * XREFs of ?RemoveFenceGpuData@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@@Z @ 0x14010336C
 * Callers:
 *     ?ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@@Z @ 0x1401032F4 (-ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035890 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400FF540 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RemoveFenceGpuData(VIDMM_GLOBAL *this, struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *a2)
{
  char *v2; // rbx
  _QWORD *v5; // rdi
  __int64 v6; // rax
  _QWORD *v7; // rcx
  struct _MDL *v8; // rbx
  unsigned __int64 LogicalAddress; // rax
  char *v10; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  v2 = (char *)this + 3760;
  v10 = (char *)this + 3760;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  v5 = (_QWORD *)((char *)a2 + 16);
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  v6 = *((_QWORD *)a2 + 2);
  v11 = 1;
  if ( *(struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **)(v6 + 8) != (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)((char *)a2 + 16)
    || (v7 = (_QWORD *)*((_QWORD *)a2 + 3), (_QWORD *)*v7 != v5) )
  {
    __fastfail(3u);
  }
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  if ( *((_BYTE *)this + 40109) )
  {
    v8 = (struct _MDL *)*((_QWORD *)a2 + 7);
    LogicalAddress = VidMmiGetLogicalAddress(*((void **)a2 + 8), 0LL);
    SysMmUnmapIommuRange(*(struct SYSMM_ADAPTER **)(*((_QWORD *)this + 3) + 224LL), LogicalAddress, v8, 0);
  }
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v10);
  *v5 = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
}
