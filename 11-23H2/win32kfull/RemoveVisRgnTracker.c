/*
 * XREFs of RemoveVisRgnTracker @ 0x1C0026AAC
 * Callers:
 *     ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@K@Z @ 0x1C0022E6C (-_DetachWindowCompositionTarget@@YAHPEAUtagWND@@K@Z.c)
 *     UnsetLayeredWindow @ 0x1C00264A8 (UnsetLayeredWindow.c)
 *     UserRemoveWindowedSwapChain @ 0x1C021BA50 (UserRemoveWindowedSwapChain.c)
 * Callees:
 *     ?RemoveTracker@CVisRgnTrackerProp@@QEAAXK@Z @ 0x1C0026AF4 (-RemoveTracker@CVisRgnTrackerProp@@QEAAXK@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C0026BF4 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x1C00ABDDC (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z.c)
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
