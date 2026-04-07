/*
 * XREFs of ?_StopAnimationsOfOwnedWindows@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x180080BC4
 * Callers:
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x180040290 (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_95d8fb2efa1b08d320c8654ffeeb34da___ @ 0x180080BF0 (CTransitionVisualController--ForEachOwnedWindow__lambda_95d8fb2efa1b08d320c8654ffeeb34da___.c)
 */

void __fastcall CTransitionVisualController::_StopAnimationsOfOwnedWindows(
        CTransitionVisualController *this,
        struct CWindowData *a2,
        __int64 a3)
{
  CTransitionVisualController *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  LOBYTE(v3) = 0;
  LOBYTE(a3) = 1;
  CTransitionVisualController::ForEachOwnedWindow__lambda_95d8fb2efa1b08d320c8654ffeeb34da___(a2, &v3, a3);
}
