/*
 * XREFs of ?IsDirtyCollectionEnabled@SubTreeContext@CPreComputeContext@@AEBA_NXZ @ 0x180108540
 * Callers:
 *     ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x18009BA30 (-ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x180107B68 (-ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CPreComputeContext::SubTreeContext::IsDirtyCollectionEnabled(CPreComputeContext::SubTreeContext *this)
{
  return !*((_DWORD *)this + 85) && !*(_BYTE *)(*((_QWORD *)this + 40) + 2324LL);
}
