/*
 * XREFs of RemoveVisRgnTracker @ 0x1400308C8
 * Callers:
 *     UnsetLayeredWindow @ 0x14002FF88 (UnsetLayeredWindow.c)
 *     ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@K@Z @ 0x14015EC74 (-_DetachWindowCompositionTarget@@YAHPEAUtagWND@@K@Z.c)
 *     UserRemoveWindowedSwapChain @ 0x140169910 (UserRemoveWindowedSwapChain.c)
 * Callees:
 *     ?RemoveTracker@CVisRgnTrackerProp@@QEAAXK@Z @ 0x140030910 (-RemoveTracker@CVisRgnTrackerProp@@QEAAXK@Z.c)
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x140031054 (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1400315C4 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 */

void __fastcall RemoveVisRgnTracker(__int64 a1, unsigned int a2)
{
  unsigned int v3; // edx
  CVisRgnTrackerProp *v4; // rbx
  CVisRgnTrackerProp *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( (unsigned int)CWindowProp::GetProp<CVisRgnTrackerProp>(a1, &v5) )
  {
    v3 = a2;
    v4 = v5;
    CVisRgnTrackerProp::RemoveTracker(v5, v3);
    if ( !*((_DWORD *)v4 + 10) )
      CWindowProp::RemoveAndDeleteProp(v4);
  }
}
