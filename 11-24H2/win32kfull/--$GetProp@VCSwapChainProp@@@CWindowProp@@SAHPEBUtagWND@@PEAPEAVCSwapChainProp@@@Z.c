/*
 * XREFs of ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x140169A24
 * Callers:
 *     zzzComposeDesktop @ 0x140168F78 (zzzComposeDesktop.c)
 *     UserSetWindowedSwapChain @ 0x140169708 (UserSetWindowedSwapChain.c)
 *     UserRemoveWindowedSwapChain @ 0x140169910 (UserRemoveWindowedSwapChain.c)
 * Callees:
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<CSwapChainProp>(__int64 a1, __int64 *a2)
{
  __int64 UserSessionState; // rax
  __int64 Prop; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  Prop = GetProp(a1, *(unsigned __int16 *)(UserSessionState + 42322), 1u);
  *a2 = Prop;
  return Prop != 0;
}
