/*
 * XREFs of ??1CVisualTree@@UEAA@XZ @ 0x18008F0FC
 * Callers:
 *     ??_ECVisualTree@@UEAAPEAXI@Z @ 0x1801336D0 (--_ECVisualTree@@UEAAPEAXI@Z.c)
 *     ??_GCSubVisualTree@@UEAAPEAXI@Z @ 0x180217360 (--_GCSubVisualTree@@UEAAPEAXI@Z.c)
 *     ??1CDesktopTree@@UEAA@XZ @ 0x18028AD60 (--1CDesktopTree@@UEAA@XZ.c)
 * Callees:
 *     ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x1800324F0 (-ReleaseTreeDatas@CVisualTree@@AEAAXXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??1?$vector_facade@PEAVIVisualTreeClient@@V?$buffer_impl@PEAVIVisualTreeClient@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18008F17C (--1-$vector_facade@PEAVIVisualTreeClient@@V-$buffer_impl@PEAVIVisualTreeClient@@$03$00Vliberal_e.c)
 *     ?ReleaseDirtyRegionAnnotationBuffers@CDirtyRegionAnnotationAllocationSet@@AEAAXXZ @ 0x18008F1B4 (-ReleaseDirtyRegionAnnotationBuffers@CDirtyRegionAnnotationAllocationSet@@AEAAXXZ.c)
 *     ?ClearData@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@QEAAAEAT?$_Align_type@N$07@std@@I@Z @ 0x18008FD70 (-ClearData@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@QEAAAEAT-$_Align_type@N$07@std@@I@Z.c)
 *     ??1?$unique_ptr@VCPreComputeContext@@U?$default_delete@VCPreComputeContext@@@std@@@std@@QEAA@XZ @ 0x1800BD8EC (--1-$unique_ptr@VCPreComputeContext@@U-$default_delete@VCPreComputeContext@@@std@@@std@@QEAA@XZ.c)
 */

void __fastcall CVisualTree::~CVisualTree(CVisualTree *this)
{
  __int64 v2; // rax
  _DWORD *v3; // rcx

  *(_QWORD *)this = &CVisualTree::`vftable';
  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    v3 = *(_DWORD **)(v2 + 232);
    if ( (*v3 & 0x8000000) != 0 )
      CSparseAlignedStorage<8,8>::AllocatedStorage::ClearData(v3, 5LL);
  }
  CVisualTree::ReleaseTreeDatas(this);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)this + 315);
  detail::vector_facade<IVisualTreeClient *,detail::buffer_impl<IVisualTreeClient *,4,1,detail::liberal_expansion_policy>>::~vector_facade<IVisualTreeClient *,detail::buffer_impl<IVisualTreeClient *,4,1,detail::liberal_expansion_policy>>((char *)this + 2448);
  CDirtyRegionAnnotationAllocationSet::ReleaseDirtyRegionAnnotationBuffers((CVisualTree *)((char *)this + 712));
  std::unique_ptr<CPreComputeContext>::~unique_ptr<CPreComputeContext>((char *)this + 104);
  CResource::~CResource(this);
}
