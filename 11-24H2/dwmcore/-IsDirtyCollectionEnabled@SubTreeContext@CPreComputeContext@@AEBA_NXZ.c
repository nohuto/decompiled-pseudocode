/*
 * XREFs of ?IsDirtyCollectionEnabled@SubTreeContext@CPreComputeContext@@AEBA_NXZ @ 0x180033250
 * Callers:
 *     ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x180032808 (-ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CPreComputeContext::SubTreeContext::IsDirtyCollectionEnabled(CPreComputeContext::SubTreeContext *this)
{
  return !*((_DWORD *)this + 85) && !*(_BYTE *)(*((_QWORD *)this + 40) + 2324LL);
}
