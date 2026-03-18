/*
 * XREFs of ??1CDrawListEntryBatch@@EEAA@XZ @ 0x1801BEDF8
 * Callers:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800D65E0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ??_GCDrawListEntryBatch@@EEAAPEAXI@Z @ 0x1801BEC60 (--_GCDrawListEntryBatch@@EEAAPEAXI@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UID2D1PrivateCompositorRenderer@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1801BECA0 (-InternalRelease@-$CMILRefCountBaseT@UID2D1PrivateCompositorRenderer@@VCMilObjectDeleter@@@@IEAA.c)
 * Callees:
 *     ?FreeBatchResources@CDrawListBatchManager@@QEAAXPEAVCDrawListEntryBatch@@@Z @ 0x18000DDB0 (-FreeBatchResources@CDrawListBatchManager@@QEAAXPEAVCDrawListEntryBatch@@@Z.c)
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18014BED0 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ??1?$deque@PEAVCMegaRectBatchCommand@@V?$allocator@PEAVCMegaRectBatchCommand@@@std@@@std@@QEAA@XZ @ 0x1801BEE58 (--1-$deque@PEAVCMegaRectBatchCommand@@V-$allocator@PEAVCMegaRectBatchCommand@@@std@@@std@@QEAA@X.c)
 */

void __fastcall CDrawListEntryBatch::~CDrawListEntryBatch(CDrawListEntryBatch *this)
{
  bool v1; // zf
  CDrawListCache *v3; // rcx

  v1 = *((_DWORD *)this + 10) == -1;
  *(_QWORD *)this = &CDrawListEntryBatch::`vftable';
  if ( !v1 )
    CDrawListBatchManager::FreeBatchResources((CDrawListBatchManager *)(*((_QWORD *)this + 2) + 24LL), this);
  std::deque<CMegaRectBatchCommand *>::~deque<CMegaRectBatchCommand *>((char *)this + 128);
  v3 = (CDrawListCache *)*((_QWORD *)this + 15);
  if ( v3 )
  {
    *((_QWORD *)this + 15) = 0LL;
    CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v3);
  }
  Microsoft::WRL::ComPtr<ClipPlaneInfoRef>::InternalRelease((char *)this + 24);
}
