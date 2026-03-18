/*
 * XREFs of ?ProcessSetMaxPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMAXPOSITION@@@Z @ 0x1802A77F0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18003E6B0 (-SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetMaxPosition(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_SETMAXPOSITION *a3)
{
  int v3; // xmm0_4
  int v4; // xmm1_4
  _DWORD v6[4]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *((_DWORD *)a3 + 2);
  v4 = *((_DWORD *)a3 + 3);
  v6[2] = 0;
  v6[0] = v3;
  v6[1] = v4;
  CInteractionTracker::SetMaxPosition(this, (const struct D2DVector3 *)v6);
  return 0LL;
}
