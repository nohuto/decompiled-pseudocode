/*
 * XREFs of ?Channel_CompleteDuplicateResource@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_COMPLETEDUPLICATERESOURCE@@@Z @ 0x180202DB0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CComposition::Channel_CompleteDuplicateResource(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_COMPLETEDUPLICATERESOURCE *a4)
{
  return CChannelContext::CompleteDuplicateResource(a2, *((_DWORD *)a4 + 1));
}
