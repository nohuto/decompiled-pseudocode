/*
 * XREFs of ?ProcessSetInternalProperties@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETINTERNALPROPERTIES@@PEBXI@Z @ 0x18029D9E0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionTracker::ProcessSetInternalProperties(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_SETINTERNALPROPERTIES *a3,
        _DWORD *a4)
{
  *((_DWORD *)this + 136) = *a4;
  *((_DWORD *)this + 137) = a4[1];
  *((_DWORD *)this + 138) = a4[2];
  *((_DWORD *)this + 139) = a4[3];
  *((_DWORD *)this + 140) = a4[4];
  return 0LL;
}
