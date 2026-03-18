/*
 * XREFs of ?OnReevaluateMPOCapabilities@CChannelContext@@QEAAXXZ @ 0x18021DEA0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

void __fastcall CChannelContext::OnReevaluateMPOCapabilities(CChannelContext *this)
{
  CRenderTargetManager *v1; // rcx

  v1 = (CRenderTargetManager *)*((_QWORD *)g_pComposition + 77);
  *((_BYTE *)v1 + 746) = 1;
  CRenderTargetManager::ForceFullDirty(v1);
}
