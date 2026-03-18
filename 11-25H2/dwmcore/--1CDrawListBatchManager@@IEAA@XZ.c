/*
 * XREFs of ??1CDrawListBatchManager@@IEAA@XZ @ 0x1801BE9A4
 * Callers:
 *     ??1CD2DContext@@UEAA@XZ @ 0x1801D89D8 (--1CD2DContext@@UEAA@XZ.c)
 * Callees:
 *     ?DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ @ 0x1800926D4 (-DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800E54D0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1?$com_ptr_t@VCDrawListEntryBatch@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801BEA00 (--1-$com_ptr_t@VCDrawListEntryBatch@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801BEF70 (--1-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??_GCBatchOptimizer@@QEAAPEAXI@Z @ 0x1801BEF90 (--_GCBatchOptimizer@@QEAAPEAXI@Z.c)
 */

void __fastcall CDrawListBatchManager::~CDrawListBatchManager(CDrawListEntryBatch::CSharedDirect3DResources **this)
{
  unsigned int v2; // edx
  CBatchOptimizer *v3; // rcx

  CDrawListBatchManager::DestroyDeviceResources(this);
  v3 = this[17];
  if ( v3 )
    CBatchOptimizer::`scalar deleting destructor'(v3, v2);
  wil::com_ptr_t<CDrawListEntryBatch,wil::err_returncode_policy>::~com_ptr_t<CDrawListEntryBatch,wil::err_returncode_policy>(this + 16);
  wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::~com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>(this + 15);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 10));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 5));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this);
}
