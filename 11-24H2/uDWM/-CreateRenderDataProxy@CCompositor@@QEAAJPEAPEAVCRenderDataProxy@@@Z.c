/*
 * XREFs of ?CreateRenderDataProxy@CCompositor@@QEAAJPEAPEAVCRenderDataProxy@@@Z @ 0x18003F1B8
 * Callers:
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18003E7F0 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?UpdateRenderData@CRenderDataVisual@@UEAAJXZ @ 0x18003EFA0 (-UpdateRenderData@CRenderDataVisual@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateRenderDataProxy(__int64 this, CResourceProxy **a2)
{
  return CCompositor::CreateProxy<CRenderDataProxy>(this, a2);
}
