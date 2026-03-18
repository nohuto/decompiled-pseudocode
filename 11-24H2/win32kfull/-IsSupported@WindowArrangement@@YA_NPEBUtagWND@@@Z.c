/*
 * XREFs of ?IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x140148F98
 * Callers:
 *     ?DragOperationFromMaximizedAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x140148ED4 (-DragOperationFromMaximizedAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?SizeWithSnapAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x140148F14 (-SizeWithSnapAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x140148F54 (-MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x140249264 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1402A7510 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsNonImmersiveBand @ 0x140148FEC (IsNonImmersiveBand.c)
 *     _anonymous_namespace_::TestFeature @ 0x1401494EC (_anonymous_namespace_--TestFeature.c)
 */

char __fastcall WindowArrangement::IsSupported(WindowArrangement *this, const struct tagWND *a2)
{
  char v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx

  v3 = 1;
  if ( !(unsigned __int8)anonymous_namespace_::TestFeature(1LL, a2)
    || !(unsigned int)IsNonImmersiveBand(this)
    || _bittest64((const signed __int64 *)PtiCurrent(v5, v4) + 86, 0x20u) )
  {
    return 0;
  }
  return v3;
}
