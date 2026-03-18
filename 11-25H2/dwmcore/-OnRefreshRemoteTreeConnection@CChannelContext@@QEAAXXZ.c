/*
 * XREFs of ?OnRefreshRemoteTreeConnection@CChannelContext@@QEAAXXZ @ 0x1802576CC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

void __fastcall CChannelContext::OnRefreshRemoteTreeConnection(CChannelContext *this)
{
  (*(void (__fastcall **)(CGlobalComposition *))(*(_QWORD *)g_pComposition + 48LL))(g_pComposition);
}
