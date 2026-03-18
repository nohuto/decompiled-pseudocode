/*
 * XREFs of ?ProcessApplyPositionImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_APPLYPOSITIONIMPULSE@@@Z @ 0x1802A74C0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x180257514 (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 *     ?ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x1802A7000 (-ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessApplyPositionImpulse(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_APPLYPOSITIONIMPULSE *a3)
{
  int v3; // xmm0_4
  int v5; // xmm1_4
  char v7; // al
  int v8; // edx
  int v9; // eax
  _DWORD v11[6]; // [rsp+20h] [rbp-18h] BYREF

  *((_BYTE *)this + 540) |= 0x10u;
  v3 = *((_DWORD *)a3 + 2);
  v5 = *((_DWORD *)a3 + 3);
  v11[2] = 0;
  v11[0] = v3;
  v11[1] = v5;
  v7 = CInteractionTracker::ApplyPositionImpulse(this, (const struct D2DVector3 *)v11);
  v8 = *((_DWORD *)a3 + 4);
  if ( v7 )
  {
    v9 = *((_DWORD *)this + 49);
    if ( v9 <= v8 )
      v9 = *((_DWORD *)a3 + 4);
    *((_DWORD *)this + 49) = v9;
  }
  else
  {
    CInteractionTracker::NotifyRequestIgnored(this, v8);
  }
  *((_BYTE *)this + 540) &= ~0x10u;
  return 0LL;
}
