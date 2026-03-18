/*
 * XREFs of ?DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ @ 0x180147934
 * Callers:
 *     ??1CDrawListBatchManager@@IEAA@XZ @ 0x1801B1608 (--1CDrawListBatchManager@@IEAA@XZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1801CA824 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 * Callees:
 *     ?CloseCurrentDrawListEntryBatch@CDrawListBatchManager@@IEAA?AV?$com_ptr_t@VCDrawListEntryBatch@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180054980 (-CloseCurrentDrawListEntryBatch@CDrawListBatchManager@@IEAA-AV-$com_ptr_t@VCDrawListEntryBatch@@.c)
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x180110290 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ??_GCBatchCommand@@QEAAPEAXI@Z @ 0x1801479F8 (--_GCBatchCommand@@QEAAPEAXI@Z.c)
 *     ??1?$com_ptr_t@VCDrawListEntryBatch@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801B1664 (--1-$com_ptr_t@VCDrawListEntryBatch@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UID2D1PrivateCompositorRenderer@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1801B1910 (-InternalRelease@-$CMILRefCountBaseT@UID2D1PrivateCompositorRenderer@@VCMilObjectDeleter@@@@IEAA.c)
 *     ?DestroyDeviceResources@CSharedDirect3DResources@CDrawListEntryBatch@@QEAAXXZ @ 0x1802231D8 (-DestroyDeviceResources@CSharedDirect3DResources@CDrawListEntryBatch@@QEAAXXZ.c)
 */

void __fastcall CDrawListBatchManager::DestroyDeviceResources(CDrawListBatchManager *this)
{
  unsigned int v2; // edx
  CDrawListEntryBatch::CSharedDirect3DResources *v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rdi
  CBatchCommand *v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdi
  CDrawListCache *v9; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  CDrawListBatchManager::CloseCurrentDrawListEntryBatch((__int64)this, &v10);
  wil::com_ptr_t<CDrawListEntryBatch,wil::err_returncode_policy>::~com_ptr_t<CDrawListEntryBatch,wil::err_returncode_policy>(&v10);
  v3 = (CDrawListEntryBatch::CSharedDirect3DResources *)*((_QWORD *)this + 15);
  if ( v3 )
  {
    CDrawListEntryBatch::CSharedDirect3DResources::DestroyDeviceResources(v3);
    v9 = (CDrawListCache *)*((_QWORD *)this + 15);
    *((_QWORD *)this + 15) = 0LL;
    if ( v9 )
      CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v9);
  }
  if ( *((_DWORD *)this + 16) )
  {
    v4 = *((unsigned int *)this + 16);
    v5 = 0LL;
    do
    {
      v6 = *(CBatchCommand **)(v5 + *((_QWORD *)this + 5));
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
      CMILRefCountBaseT<ID2D1PrivateCompositorRenderer,CMilObjectDeleter>::InternalRelease(*(void **)(v8 + *((_QWORD *)this + 10)));
      v8 += 8LL;
      --v7;
    }
    while ( v7 );
  }
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 28) = 0;
}
