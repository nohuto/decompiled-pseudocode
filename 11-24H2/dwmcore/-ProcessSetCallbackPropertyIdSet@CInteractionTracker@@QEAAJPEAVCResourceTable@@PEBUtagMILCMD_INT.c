/*
 * XREFs of ?ProcessSetCallbackPropertyIdSet@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETCALLBACKPROPERTYIDSET@@@Z @ 0x180222158
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionTracker::ProcessSetCallbackPropertyIdSet(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_SETCALLBACKPROPERTYIDSET *a3)
{
  *((_DWORD *)this + 48) = *((_DWORD *)a3 + 2);
  return 0LL;
}
