/*
 * XREFs of ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x140186208
 * Callers:
 *     ?DrainClientResources@DXGDEVICE@@QEAAXXZ @ 0x140188BA8 (-DrainClientResources@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ @ 0x14027B27C (-DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ.c)
 *     ?DestroyStagingBuffer@DXGPRESENT@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140333E70 (-DestroyStagingBuffer@DXGPRESENT@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkDestroyClientAllocation @ 0x140349ACC (DxgkDestroyClientAllocation.c)
 * Callees:
 *     ??_GDXGRESOURCE@@QEAAPEAXI@Z @ 0x1400431C8 (--_GDXGRESOURCE@@QEAAPEAXI@Z.c)
 *     ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVCOREDEVICEACCESS@@@Z @ 0x140223840 (-VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDIC.c)
 *     ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x140349E38 (-DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x140350100 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 */

void __fastcall DXGDEVICE::DestroyClientResource(DXGDEVICE *this, struct DXGALLOCATION **a2)
{
  struct DXGALLOCATION *v4; // rdx
  struct DXGALLOCATION *v5; // rdx
  unsigned int v6; // r9d

  ADAPTER_RENDER::FreeResourceHandleAndWaitForZeroReferences(this, (struct DXGRESOURCE *)a2, 0LL);
  DXGDEVICE::DestroyClientAllocations(this, a2[3]);
  v4 = a2[5];
  if ( v4 )
    *((_QWORD *)v4 + 4) = a2[4];
  v5 = a2[4];
  if ( v5 )
  {
    *((_QWORD *)v5 + 5) = a2[5];
  }
  else if ( *((struct DXGALLOCATION ***)this + 7) == a2 )
  {
    *((_QWORD *)this + 7) = a2[5];
  }
  if ( (*((_BYTE *)this + 1901) & 1) != 0 )
  {
    v6 = *((_DWORD *)a2 + 5);
    if ( v6 )
    {
      DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
        (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4664LL),
        *(_DWORD *)(*((_QWORD *)this + 5) + 488LL),
        *((_DWORD *)this + 118),
        v6,
        0,
        0LL,
        (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1,
        0LL);
      *((_DWORD *)a2 + 5) = 0;
    }
  }
  DXGRESOURCE::`scalar deleting destructor'((DXGRESOURCE *)a2);
}
