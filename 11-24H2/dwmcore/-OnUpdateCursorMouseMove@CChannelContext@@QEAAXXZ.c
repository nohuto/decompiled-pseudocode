/*
 * XREFs of ?OnUpdateCursorMouseMove@CChannelContext@@QEAAXXZ @ 0x1801F8CEC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

void __fastcall CChannelContext::OnUpdateCursorMouseMove(CChannelContext *this)
{
  *((_BYTE *)g_pComposition + 6464) = 1;
}
