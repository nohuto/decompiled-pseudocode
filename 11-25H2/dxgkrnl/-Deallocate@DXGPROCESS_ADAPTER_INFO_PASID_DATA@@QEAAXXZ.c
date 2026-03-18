/*
 * XREFs of ?Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ @ 0x1403B924C
 * Callers:
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z @ 0x14038128C (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z.c)
 *     ?Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1403B8AE0 (-Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?SmmUseIommuV3Interface@@YA_NXZ @ 0x1400577CC (-SmmUseIommuV3Interface@@YA_NXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?SysMmDestroyPasidDevice@@YAJPEAU_IOMMU_DMA_PASID_DEVICE@@@Z @ 0x14027EF54 (-SysMmDestroyPasidDevice@@YAJPEAU_IOMMU_DMA_PASID_DEVICE@@@Z.c)
 */

void __fastcall DXGPROCESS_ADAPTER_INFO_PASID_DATA::Deallocate(DXGPROCESS_ADAPTER_INFO_PASID_DATA *this)
{
  DXGPROCESS_ADAPTER_INFO_PASID_DATA *v2; // rcx
  unsigned int v3; // ecx
  __int64 i; // rdi
  __int64 v5; // rdx

  if ( *((_QWORD *)this + 4) )
  {
    v3 = *((_DWORD *)this + 4);
    for ( i = 0LL; (unsigned int)i < v3; i = (unsigned int)(i + 1) )
    {
      if ( *(_QWORD *)(*((_QWORD *)this + 4) + 8 * i) )
      {
        if ( SmmUseIommuV3Interface() )
          ((void (*)(void))qword_14015E5E8)();
        SysMmDestroyPasidDevice(*(struct _IOMMU_DMA_PASID_DEVICE **)(*((_QWORD *)this + 4) + 8 * i));
        *(_QWORD *)(*((_QWORD *)this + 4) + 8 * i) = 0LL;
      }
      v3 = *((_DWORD *)this + 4);
    }
    if ( *((_QWORD *)this + 5) )
    {
      if ( SmmUseIommuV3Interface() )
      {
        ((void (__fastcall *)(__int64))qword_14015E528)(v5);
        v3 = *((_DWORD *)this + 4);
      }
      *((_QWORD *)this + 5) = 0LL;
    }
    if ( v3 > 1 )
    {
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 4));
      *((_QWORD *)this + 4) = 0LL;
    }
  }
  v2 = (DXGPROCESS_ADAPTER_INFO_PASID_DATA *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    if ( v2 != this )
    {
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
      *((_QWORD *)this + 3) = 0LL;
    }
  }
}
