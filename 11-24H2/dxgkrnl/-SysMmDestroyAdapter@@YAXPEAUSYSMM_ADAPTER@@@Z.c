/*
 * XREFs of ?SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x140286170
 * Callers:
 *     DpiFdoHandleRemoveDevice @ 0x140241460 (DpiFdoHandleRemoveDevice.c)
 *     DpiFdoInitializeFdo @ 0x140242CBC (DpiFdoInitializeFdo.c)
 *     DpiKsrStopAdapter @ 0x1402513F0 (DpiKsrStopAdapter.c)
 *     ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x140285BC0 (-SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYS.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?SmmFreeLogicalAddress@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@PEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x14009542C (-SmmFreeLogicalAddress@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@PEAUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     ?SysMmCreateLiveDump@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x140096044 (-SysMmCreateLiveDump@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 *     ?SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x1402840E0 (-SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SmmIommuDeleteDevice@@YAJPEAU_IOMMU_DMA_DEVICE@@@Z @ 0x1402847C4 (-SmmIommuDeleteDevice@@YAJPEAU_IOMMU_DMA_DEVICE@@@Z.c)
 *     ?SmmDestroyLogicalAllocator@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x140287060 (-SmmDestroyLogicalAllocator@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 */

void __fastcall SysMmDestroyAdapter(struct SYSMM_ADAPTER *a1)
{
  _QWORD *v1; // r9
  __int64 i; // rdi
  struct SYSMM_LOGICAL_BLOCK *v4; // rdx
  struct SYSMM_LOGICAL_ALLOCATOR *v5; // rcx
  __int64 j; // rdi
  __int64 v7; // r14
  struct _IOMMU_DMA_DEVICE *v8; // rcx
  struct _IOMMU_DMA_DEVICE *v9; // rcx

  v1 = (_QWORD *)((char *)a1 + 40);
  if ( (_QWORD *)*v1 != v1 )
  {
    if ( (dword_140161610 & 0x20) != 0 )
    {
      WdLogSingleEntry5(0LL, 484LL, 6LL, a1, v1, 0LL);
      WdLogGlobalForLineNumber = 770;
    }
    else
    {
      SysMmCreateLiveDump();
    }
  }
  if ( *((_QWORD *)a1 + 50) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 7); i = (unsigned int)(i + 1) )
    {
      v4 = *(struct SYSMM_LOGICAL_BLOCK **)(*((_QWORD *)a1 + 50) + 24 * i + 16);
      if ( v4 )
        SmmFreeLogicalAddress(*((struct SYSMM_LOGICAL_ALLOCATOR **)a1 + 48), v4);
    }
    ExFreePoolWithTag(*((PVOID *)a1 + 50), 0);
  }
  SmmDeinitializeIommu(a1);
  v5 = (struct SYSMM_LOGICAL_ALLOCATOR *)*((_QWORD *)a1 + 48);
  if ( v5 )
    SmmDestroyLogicalAllocator(v5);
  if ( *((_QWORD *)a1 + 49) )
  {
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)a1 + 6); j = (unsigned int)(j + 1) )
    {
      v7 = *((_QWORD *)a1 + 49);
      v8 = *(struct _IOMMU_DMA_DEVICE **)(v7 + 24 * j);
      if ( v8 )
      {
        SmmIommuDeleteDevice(v8);
        *(_QWORD *)(v7 + 24 * j) = 0LL;
      }
      v9 = *(struct _IOMMU_DMA_DEVICE **)(v7 + 24 * j + 8);
      if ( v9 )
      {
        SmmIommuDeleteDevice(v9);
        *(_QWORD *)(v7 + 24 * j + 8) = 0LL;
      }
    }
    ExFreePoolWithTag(*((PVOID *)a1 + 49), 0);
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a1);
}
