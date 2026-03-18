/*
 * XREFs of ?ProcessSetInertiaCenterpointX@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETINERTIACENTERPOINTX@@@Z @ 0x1802A76AC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x18003DD8C (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B80C0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??4?$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z @ 0x180139730 (--4-$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetInertiaCenterpointX(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_SETINERTIACENTERPOINTX *a3)
{
  __int64 *v4; // rbx
  __int64 Resource; // rax

  v4 = (__int64 *)((char *)this + 368);
  Resource = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x2Cu);
  Microsoft::WRL::ComPtr<CVisual>::operator=(v4, Resource);
  if ( *v4 )
    *(_DWORD *)(*v4 + 216) = *((_DWORD *)a3 + 1);
  if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 824LL) + 440LL) |= 4u;
  return 0LL;
}
