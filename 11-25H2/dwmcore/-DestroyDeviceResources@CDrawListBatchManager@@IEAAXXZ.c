/*
 * XREFs of ?DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ @ 0x1800926D4
 * Callers:
 *     ??1CDrawListBatchManager@@IEAA@XZ @ 0x1801BE9A4 (--1CDrawListBatchManager@@IEAA@XZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1801D8AC4 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 * Callees:
 *     ??_GCBatchCommand@@QEAAPEAXI@Z @ 0x180092798 (--_GCBatchCommand@@QEAAPEAXI@Z.c)
 *     ?CloseCurrentDrawListEntryBatch@CDrawListBatchManager@@IEAA?AV?$com_ptr_t@VCDrawListEntryBatch@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800D73D0 (-CloseCurrentDrawListEntryBatch@CDrawListBatchManager@@IEAA-AV-$com_ptr_t@VCDrawListEntryBatch@@.c)
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18014BED0 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ??1?$com_ptr_t@VCDrawListEntryBatch@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801BEA00 (--1-$com_ptr_t@VCDrawListEntryBatch@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UID2D1PrivateCompositorRenderer@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1801BECA0 (-InternalRelease@-$CMILRefCountBaseT@UID2D1PrivateCompositorRenderer@@VCMilObjectDeleter@@@@IEAA.c)
 *     ?DestroyDeviceResources@CSharedDirect3DResources@CDrawListEntryBatch@@QEAAXXZ @ 0x18022E978 (-DestroyDeviceResources@CSharedDirect3DResources@CDrawListEntryBatch@@QEAAXXZ.c)
 */

void __fastcall CDrawListBatchManager::DestroyDeviceResources(CDrawListEntryBatch::CSharedDirect3DResources **this)
{
  unsigned int v2; // edx
  CDrawListEntryBatch::CSharedDirect3DResources *v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rdi
  CBatchCommand *v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdi
  CDrawListCache *v9; // rcx
  char v10; // [rsp+30h] [rbp+8h] BYREF

  CDrawListBatchManager::CloseCurrentDrawListEntryBatch(this, &v10);
  wil::com_ptr_t<CDrawListEntryBatch,wil::err_returncode_policy>::~com_ptr_t<CDrawListEntryBatch,wil::err_returncode_policy>(&v10);
  v3 = this[15];
  if ( v3 )
  {
    CDrawListEntryBatch::CSharedDirect3DResources::DestroyDeviceResources(v3);
    v9 = this[15];
    this[15] = 0LL;
    if ( v9 )
      CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v9);
  }
  if ( *((_DWORD *)this + 16) )
  {
    v4 = *((unsigned int *)this + 16);
    v5 = 0LL;
    do
    {
      v6 = *(CBatchCommand **)((char *)this[5] + v5);
      if ( v6 )
        CBatchCommand::`scalar deleting destructor'(v6, v2);
      v5 += 8LL;
      --v4;
    }
    while ( v4 );
  }
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 18) = 0;
  if ( *((_DWORD *)this + 26) )
  {
    v7 = *((unsigned int *)this + 26);
    v8 = 0LL;
    do
    {
      CMILRefCountBaseT<ID2D1PrivateCompositorRenderer,CMilObjectDeleter>::InternalRelease(*(void **)((char *)this[10] + v8));
      v8 += 8LL;
      --v7;
    }
    while ( v7 );
  }
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 28) = 0;
}
