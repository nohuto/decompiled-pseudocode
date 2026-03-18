/*
 * XREFs of ?OnUpdateCursorMouseMove@CChannelContext@@QEAAXXZ @ 0x18020485C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

void __fastcall CChannelContext::OnUpdateCursorMouseMove(CChannelContext *this)
{
  *((_BYTE *)g_pComposition + 6488) = 1;
}
