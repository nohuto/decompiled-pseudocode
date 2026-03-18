/*
 * XREFs of ?OnRefreshRemoteTreeConnection@CChannelContext@@QEAAXXZ @ 0x18024C2FC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

void __fastcall CChannelContext::OnRefreshRemoteTreeConnection(CChannelContext *this)
{
  (*(void (__fastcall **)(CGlobalComposition *))(*(_QWORD *)g_pComposition + 48LL))(g_pComposition);
}
