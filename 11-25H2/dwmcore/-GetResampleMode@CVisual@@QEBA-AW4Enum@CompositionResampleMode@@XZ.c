/*
 * XREFs of ?GetResampleMode@CVisual@@QEBA?AW4Enum@CompositionResampleMode@@XZ @ 0x1800C53A8
 * Callers:
 *     ?RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800C54D0 (-RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x18012B6A0 (-FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z.c)
 */

__int64 __fastcall CVisual::GetResampleMode(__int64 a1)
{
  CSparseStorage::AllocatedStorage *v1; // rcx

  v1 = *(CSparseStorage::AllocatedStorage **)(a1 + 224);
  if ( (*((_DWORD *)v1 + 1) & 0x2000000) != 0 )
    return *((unsigned int *)CSparseStorage::AllocatedStorage::FindSlot(v1, 7u) + 1);
  else
    return 0LL;
}
