/*
 * XREFs of ?ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBXI@Z @ 0x18022AE44
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionTracker::ProcessSetManipulations(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS *a3,
        const struct MarshaledManipulationInfo *a4,
        unsigned int a5)
{
  if ( 8LL * *((unsigned int *)a3 + 2) == a5 )
    return InteractionSourceManager::ProcessSetManipulations((CInteractionTracker *)((char *)this + 208), a2, a3, a4);
  else
    return 2291663875LL;
}
