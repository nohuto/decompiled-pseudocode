/*
 * XREFs of ?ProcessApplyScaleImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_APPLYSCALEIMPULSE@@@Z @ 0x1802A75D8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x180257514 (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 *     ?ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z @ 0x1802A715C (-ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessApplyScaleImpulse(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_APPLYSCALEIMPULSE *a3)
{
  float v5; // xmm1_4
  char v6; // al
  int v7; // edx
  int v8; // eax
  struct CResourceTable *v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  *((_BYTE *)this + 540) |= 0x10u;
  LODWORD(v10) = *((_DWORD *)a3 + 3) ^ _xmm;
  v5 = *((float *)a3 + 2);
  HIDWORD(v10) = *((_DWORD *)a3 + 4) ^ _xmm;
  v6 = CInteractionTracker::ApplyScaleImpulse(this, v5, (const struct D2DVector2 *)&v10);
  v7 = *((_DWORD *)a3 + 5);
  if ( v6 )
  {
    v8 = *((_DWORD *)this + 49);
    if ( v8 <= v7 )
      v8 = *((_DWORD *)a3 + 5);
    *((_DWORD *)this + 49) = v8;
  }
  else
  {
    CInteractionTracker::NotifyRequestIgnored(this, v7);
  }
  *((_BYTE *)this + 540) &= ~0x10u;
  return 0LL;
}
