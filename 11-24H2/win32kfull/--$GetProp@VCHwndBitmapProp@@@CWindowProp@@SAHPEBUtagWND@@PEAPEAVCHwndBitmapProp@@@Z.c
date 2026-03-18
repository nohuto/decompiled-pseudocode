/*
 * XREFs of ??$GetProp@VCHwndBitmapProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndBitmapProp@@@Z @ 0x140169598
 * Callers:
 *     ?_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z @ 0x140168E9C (-_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z.c)
 *     ?ReNotifyDwm@CHwndBitmapProp@@SAXPEAUtagWND@@@Z @ 0x140169508 (-ReNotifyDwm@CHwndBitmapProp@@SAXPEAUtagWND@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<CHwndBitmapProp>(__int64 a1, __int64 *a2)
{
  __int64 UserSessionState; // rax
  __int64 Prop; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  Prop = GetProp(a1, *(unsigned __int16 *)(UserSessionState + 42310), 1u);
  *a2 = Prop;
  return Prop != 0;
}
