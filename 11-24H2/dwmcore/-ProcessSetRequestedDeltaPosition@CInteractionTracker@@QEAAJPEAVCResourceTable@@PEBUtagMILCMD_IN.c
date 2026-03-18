/*
 * XREFs of ?ProcessSetRequestedDeltaPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDDELTAPOSITION@@@Z @ 0x18029DACC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z @ 0x1800E51BC (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampi.c)
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x18024C144 (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetRequestedDeltaPosition(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_SETREQUESTEDDELTAPOSITION *a3)
{
  float v3; // xmm0_4
  float v5; // xmm1_4
  int v6; // r8d
  char v8; // al
  int v9; // edx
  int v10; // eax
  _DWORD v12[6]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *((float *)this + 22) + *((float *)a3 + 2);
  v5 = *((float *)this + 23) + *((float *)a3 + 3);
  v6 = *((_DWORD *)a3 + 4);
  v12[2] = 0;
  *(float *)v12 = v3;
  *(float *)&v12[1] = v5;
  v8 = CInteractionTracker::SetRequestedPosition((__int64)this, (__int64)v12, v6, 0);
  v9 = *((_DWORD *)a3 + 6);
  if ( v8 )
  {
    v10 = *((_DWORD *)this + 49);
    if ( v10 <= v9 )
      v10 = *((_DWORD *)a3 + 6);
    *((_DWORD *)this + 49) = v10;
  }
  else
  {
    CInteractionTracker::NotifyRequestIgnored(this, v9);
  }
  return 0LL;
}
