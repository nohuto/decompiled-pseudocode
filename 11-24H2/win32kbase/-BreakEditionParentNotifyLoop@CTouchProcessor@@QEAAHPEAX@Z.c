/*
 * XREFs of ?BreakEditionParentNotifyLoop@CTouchProcessor@@QEAAHPEAX@Z @ 0x1401F6F80
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C3C74 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1402019E0 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::BreakEditionParentNotifyLoop(CTouchProcessor *this, CPointerInfoNode *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  struct tagTHREADINFO *v5; // rax

  v4 = 0;
  if ( !(unsigned int)CPointerInfoNode::IsValid(a2) )
    return 1LL;
  v5 = PtiCurrent(v3);
  LOBYTE(v4) = (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(a2, v5) != 0;
  return v4;
}
