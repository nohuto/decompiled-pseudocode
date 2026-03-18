/*
 * XREFs of ?ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z @ 0x1C00E7130
 * Callers:
 *     <none>
 * Callees:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0202888 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 */

__int64 __fastcall CPTPEngine::ProcessInput(CPTPEngine *this, struct PTPInput *a2)
{
  CPTPEngine::RunStateMachine(this, a2);
  return 0LL;
}
