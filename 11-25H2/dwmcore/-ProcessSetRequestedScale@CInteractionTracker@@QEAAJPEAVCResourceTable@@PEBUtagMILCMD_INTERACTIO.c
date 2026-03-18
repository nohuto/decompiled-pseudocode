/*
 * XREFs of ?ProcessSetRequestedScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALE@@@Z @ 0x180220FFC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?SetRequestedScale@CInteractionTracker@@AEAA_NM@Z @ 0x180221080 (-SetRequestedScale@CInteractionTracker@@AEAA_NM@Z.c)
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x180257514 (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetRequestedScale(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALE *a3)
{
  bool v5; // al
  int v6; // edx
  int v7; // eax

  *((_DWORD *)this + 39) = *((_DWORD *)a3 + 3) ^ _xmm;
  *((_DWORD *)this + 40) = *((_DWORD *)a3 + 4) ^ _xmm;
  v5 = CInteractionTracker::SetRequestedScale(this, *((float *)a3 + 2));
  v6 = *((_DWORD *)a3 + 6);
  if ( v5 )
  {
    v7 = *((_DWORD *)this + 49);
    if ( v7 <= v6 )
      v7 = *((_DWORD *)a3 + 6);
    *((_BYTE *)this + 540) |= 4u;
    *((_DWORD *)this + 49) = v7;
  }
  else
  {
    CInteractionTracker::NotifyRequestIgnored(this, v6);
  }
  return 0LL;
}
