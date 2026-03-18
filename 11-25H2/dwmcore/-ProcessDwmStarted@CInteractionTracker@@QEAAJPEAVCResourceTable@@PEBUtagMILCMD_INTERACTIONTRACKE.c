/*
 * XREFs of ?ProcessDwmStarted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_DWMSTARTED@@@Z @ 0x180228924
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800E4E40 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessDwmStarted(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_DWMSTARTED *a3)
{
  *((_DWORD *)this + 50) = *((_DWORD *)a2 + 12);
  if ( *((_BYTE *)a3 + 8) )
  {
    *((_DWORD *)this + 22) = *((_DWORD *)a3 + 3);
    *(_QWORD *)((char *)this + 92) = *((unsigned int *)a3 + 4);
    CResource::InvalidateAnimationSources(this, 1LL);
    CResource::InvalidateAnimationSources(this, 58LL);
    *((_DWORD *)this + 36) = *((_DWORD *)a3 + 5);
    CResource::InvalidateAnimationSources(this, 2LL);
    CResource::InvalidateAnimationSources(this, 59LL);
    *((_BYTE *)this + 540) |= 0x22u;
  }
  return 0LL;
}
