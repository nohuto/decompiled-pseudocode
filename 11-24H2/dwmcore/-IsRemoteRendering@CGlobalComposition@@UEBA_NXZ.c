/*
 * XREFs of ?IsRemoteRendering@CGlobalComposition@@UEBA_NXZ @ 0x1801036E0
 * Callers:
 *     ?RenderAndPresent@CRenderTargetManager@@QEAAJXZ @ 0x1801033D0 (-RenderAndPresent@CRenderTargetManager@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CGlobalComposition::IsRemoteRendering(CGlobalComposition *this)
{
  return *(_QWORD *)(*((_QWORD *)this + 709) + 24LL) != 0LL;
}
