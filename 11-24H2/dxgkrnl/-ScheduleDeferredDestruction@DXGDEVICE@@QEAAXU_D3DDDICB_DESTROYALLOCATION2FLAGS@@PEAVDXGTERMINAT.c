/*
 * XREFs of ?ScheduleDeferredDestruction@DXGDEVICE@@QEAAXU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@PEAVCOREDEVICEACCESS@@@Z @ 0x14034FAE8
 * Callers:
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x140336F2C (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 * Callees:
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14000E300 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034334 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x140046860 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x140335510 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14033A190 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x14034A930 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?ReportDestructionBegun@DXGDEVICE@@AEAAXXZ @ 0x1403678E8 (-ReportDestructionBegun@DXGDEVICE@@AEAAXXZ.c)
 *     ?RemoveDirectFlipAllocationFromRequestedPinnedList@DXGDEVICE@@AEAAXIPEAVDXGALLOCATION@@@Z @ 0x1403B27E8 (-RemoveDirectFlipAllocationFromRequestedPinnedList@DXGDEVICE@@AEAAXIPEAVDXGALLOCATION@@@Z.c)
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
        DXGDEVICE::RemoveDirectFlipAllocationFromRequestedPinnedList(this, (v10 >> 6) & 0xF, v9);
      v11 = *(_DWORD *)(*((_QWORD *)v9 + 6) + 4LL);
      if ( (v11 & 0x200B) != 0 )
        DXGDEVICE::TestAndSetDisplayedPrimary(
          (struct _KTHREAD **)this,
          (v11 >> 6) & 0xF,
          v9,
          (struct DXGALLOCATION *)a4);
      Current = DXGPROCESS::GetCurrent((__int64)this);
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
      HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)Current + 280), *((_DWORD *)v9 + 4));
      DxgkUnreferenceDxgAllocation((struct _EX_RUNDOWN_REF *)v9);
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
