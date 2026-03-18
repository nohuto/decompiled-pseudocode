/*
 * XREFs of ??$GetProp@VCInterceptWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInterceptWindowProp@@@Z @ 0x1402C8F48
 * Callers:
 *     ?GetOrCreate@CInterceptWindowProp@@SAPEAV1@PEAUtagWND@@@Z @ 0x1402C9BEC (-GetOrCreate@CInterceptWindowProp@@SAPEAV1@PEAUtagWND@@@Z.c)
 *     ?PopFrontSystemOperationData@@YA_NPEAUtagWND@@PEAUSystemOperationData@AdvancedWindowPos@@@Z @ 0x1402C9E14 (-PopFrontSystemOperationData@@YA_NPEAUtagWND@@PEAUSystemOperationData@AdvancedWindowPos@@@Z.c)
 *     ?RemoveLastSystemOperationData@WindowActions@@YAXPEAUtagWND@@@Z @ 0x1402CA394 (-RemoveLastSystemOperationData@WindowActions@@YAXPEAUtagWND@@@Z.c)
 *     ?UnreserveSystemOperationDataSlot@WindowActions@@YAXPEAUtagWND@@@Z @ 0x1402CB470 (-UnreserveSystemOperationDataSlot@WindowActions@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<CInterceptWindowProp>(__int64 a1, __int64 *a2)
{
  __int64 UserSessionState; // rax
  __int64 Prop; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  Prop = GetProp(a1, *(unsigned __int16 *)(UserSessionState + 42328), 1u);
  *a2 = Prop;
  return Prop != 0;
}
