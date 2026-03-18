/*
 * XREFs of ?ScheduleDeferredDestruction@DXGDEVICE@@QEAAXU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@PEAVCOREDEVICEACCESS@@@Z @ 0x14036617C
 * Callers:
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x140349230 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 * Callees:
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1400135A0 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14001D8E0 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034400 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?RemoveDirectFlipAllocationFromRequestedPinnedList@DXGDEVICE@@AEAAXIPEAVDXGALLOCATION@@@Z @ 0x1402E10A4 (-RemoveDirectFlipAllocationFromRequestedPinnedList@DXGDEVICE@@AEAAXIPEAVDXGALLOCATION@@@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1403473B0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x140350100 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1403513B0 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?ReportDestructionBegun@DXGDEVICE@@AEAAXXZ @ 0x14037EFF4 (-ReportDestructionBegun@DXGDEVICE@@AEAAXXZ.c)
 */

void __fastcall DXGDEVICE::ScheduleDeferredDestruction(
        DXGDEVICE *this,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a2,
        struct DXGRESOURCE **a3,
        PERESOURCE **a4)
{
  char v5; // r13
  struct DXGRESOURCE *v9; // rbp
  unsigned int v10; // edx
  unsigned int v11; // edx
  struct DXGPROCESS *Current; // rdi
  char v13; // di
  const char *v14; // rdx
  struct DXGRESOURCE *v15; // rdi

  v5 = 0;
  if ( *a3 )
    ADAPTER_RENDER::FreeResourceHandleAndWaitForZeroReferences(this, *a3, a4);
  v9 = a3[1];
  if ( v9 )
  {
    do
    {
      v10 = *(_DWORD *)(*((_QWORD *)v9 + 6) + 4LL);
      if ( (v10 & 0x2000) != 0 && *((_QWORD *)v9 + 3) )
        DXGDEVICE::RemoveDirectFlipAllocationFromRequestedPinnedList((struct _KTHREAD **)this, (v10 >> 6) & 0xF, v9);
      v11 = *(_DWORD *)(*((_QWORD *)v9 + 6) + 4LL);
      if ( (v11 & 0x200B) != 0 )
        DXGDEVICE::TestAndSetDisplayedPrimary(this, (v11 >> 6) & 0xF, v9, (struct DXGALLOCATION *)a4);
      Current = DXGPROCESS::GetCurrent((__int64)this);
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
      HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)Current + 280), *((_DWORD *)v9 + 4));
      DxgkUnreferenceDxgAllocation((struct _EX_RUNDOWN_REF *)v9);
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *((_QWORD *)Current + 32) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
      KeLeaveCriticalRegion();
      v13 = 0;
      if ( a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(a4[3]) )
      {
        v13 = 1;
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)a4);
      }
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v9 + 11);
      if ( v13 )
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a4, v14);
      v15 = (struct DXGRESOURCE *)*((_QWORD *)v9 + 8);
      if ( *((_QWORD *)v9 + 3) )
      {
        if ( !v5 )
        {
          v5 = 1;
          DXGDEVICE::ReportDestructionBegun(this);
        }
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, struct DXGRESOURCE **))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                                                  + 8LL)
                                                                                      + 128LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
          *((_QWORD *)v9 + 3),
          (*(_DWORD *)(*((_QWORD *)v9 + 6) + 4LL) >> 6) & 0xF,
          a2.Value,
          a3);
      }
      v9 = v15;
    }
    while ( v15 );
  }
}
