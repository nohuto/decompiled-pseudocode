/*
 * XREFs of ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x1C00ABDDC
 * Callers:
 *     zzzComposeDesktop @ 0x1C0022F04 (zzzComposeDesktop.c)
 *     RemoveVisRgnTracker @ 0x1C0026AAC (RemoveVisRgnTracker.c)
 *     CreateVisRgnTracker @ 0x1C00ABD58 (CreateVisRgnTracker.c)
 * Callees:
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<CVisRgnTrackerProp>(__int64 a1, __int64 *a2)
{
  __int64 Prop; // rax

  Prop = GetProp(a1, LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1LL);
  *a2 = Prop;
  return Prop != 0;
}
