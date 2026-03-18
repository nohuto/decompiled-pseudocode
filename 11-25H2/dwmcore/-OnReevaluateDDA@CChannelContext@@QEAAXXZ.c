/*
 * XREFs of ?OnReevaluateDDA@CChannelContext@@QEAAXXZ @ 0x1802576B0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

void __fastcall CChannelContext::OnReevaluateDDA(CChannelContext *this)
{
  CRenderTargetManager::HandleDDAArrivalOrDeparture(*((CRenderTargetManager **)g_pComposition + 77));
}
