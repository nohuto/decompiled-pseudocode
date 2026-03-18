/*
 * XREFs of ?OnReevaluateDDA@CChannelContext@@QEAAXXZ @ 0x18024C2E0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

void __fastcall CChannelContext::OnReevaluateDDA(CChannelContext *this)
{
  CRenderTargetManager::HandleDDAArrivalOrDeparture(*((CRenderTargetManager **)g_pComposition + 77));
}
