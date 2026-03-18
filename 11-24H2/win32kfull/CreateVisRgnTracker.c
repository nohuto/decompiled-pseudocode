/*
 * XREFs of CreateVisRgnTracker @ 0x140030A08
 * Callers:
 *     xxxSetLayeredWindow @ 0x140090DC8 (xxxSetLayeredWindow.c)
 *     UserSetWindowedSwapChain @ 0x140169708 (UserSetWindowedSwapChain.c)
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z @ 0x1401AC828 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z.c)
 * Callees:
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x140031054 (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     ??$CreateWindowProp@VCVisRgnTrackerProp@@@CWindowProp@@SAJPEAPEAVCVisRgnTrackerProp@@@Z @ 0x1400311E4 (--$CreateWindowProp@VCVisRgnTrackerProp@@@CWindowProp@@SAJPEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1400312D0 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     DirtyVisRgnTrackers @ 0x1400497E8 (DirtyVisRgnTrackers.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CreateVisRgnTracker(struct tagWND *a1, int a2)
{
  unsigned int v3; // edi
  CWindowProp *v5; // rbx
  __int64 result; // rax
  CWindowProp *v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  v7 = 0LL;
  CWindowProp::GetProp<CVisRgnTrackerProp>(a1, &v7);
  v5 = v7;
  if ( !v7 )
  {
    result = CWindowProp::CreateWindowProp<CVisRgnTrackerProp>(&v7);
    v3 = result;
    if ( (int)result < 0 )
      return result;
    v5 = v7;
    if ( !(unsigned int)CWindowProp::SetProp(v7, a1) )
    {
      (**(void (__fastcall ***)(CWindowProp *))v5)(v5);
      return 3221225506LL;
    }
  }
  *((_DWORD *)v5 + 10) |= a2;
  DirtyVisRgnTrackers(a1);
  return v3;
}
