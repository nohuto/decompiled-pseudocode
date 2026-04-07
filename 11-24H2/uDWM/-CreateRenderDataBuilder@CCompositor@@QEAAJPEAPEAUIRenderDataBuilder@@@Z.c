/*
 * XREFs of ?CreateRenderDataBuilder@CCompositor@@QEAAJPEAPEAUIRenderDataBuilder@@@Z @ 0x18003F1C4
 * Callers:
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18003E7F0 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?UpdateRenderData@CRenderDataVisual@@UEAAJXZ @ 0x18003EFA0 (-UpdateRenderData@CRenderDataVisual@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::CreateRenderDataBuilder(CCompositor *this, struct IRenderDataBuilder **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IRenderDataBuilder **))(**((_QWORD **)this + 3) + 104LL))(
           *((_QWORD *)this + 3),
           a2);
}
