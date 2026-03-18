/*
 * XREFs of ?ProcessSetRequestedPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITION@@@Z @ 0x1800E5140
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z @ 0x1800E51BC (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampi.c)
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x18024C144 (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetRequestedPosition(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITION *a3)
{
  int v3; // xmm0_4
  int v4; // xmm1_4
  __int64 v6; // r9
  __int64 v8; // r8
  char v9; // al
  int v10; // edx
  int v11; // eax
  _DWORD v13[6]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *((_DWORD *)a3 + 2);
  v4 = *((_DWORD *)a3 + 3);
  v6 = *((unsigned int *)a3 + 5);
  v8 = *((unsigned int *)a3 + 4);
  v13[2] = 0;
  v13[0] = v3;
  v13[1] = v4;
  v9 = ((__int64 (__fastcall *)(CInteractionTracker *, _DWORD *, __int64, __int64))CInteractionTracker::SetRequestedPosition)(
         this,
         v13,
         v8,
         v6);
  v10 = *((_DWORD *)a3 + 7);
  if ( v9 )
  {
    v11 = *((_DWORD *)this + 49);
    if ( v11 <= v10 )
      v11 = *((_DWORD *)a3 + 7);
    *((_BYTE *)this + 540) |= 4u;
    *((_DWORD *)this + 49) = v11;
  }
  else
  {
    CInteractionTracker::NotifyRequestIgnored(this, v10);
  }
  return 0LL;
}
