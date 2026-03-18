/*
 * XREFs of rimDispatchCompleteFrame @ 0x140130970
 * Callers:
 *     rimProcessAnyQueuedCompleteFrames @ 0x14017FDE8 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimProcessCompleteFrame @ 0x140180150 (rimProcessCompleteFrame.c)
 * Callees:
 *     rimDispatchCompleteFrames @ 0x1401309D4 (rimDispatchCompleteFrames.c)
 *     rimValidateFrameTransition @ 0x1401EDC30 (rimValidateFrameTransition.c)
 */

__int64 __fastcall rimDispatchCompleteFrame(struct RawInputManagerObject *a1, struct RIMDEV *a2, int *a3)
{
  __int64 v6; // rcx

  v6 = *(_QWORD *)(*((_QWORD *)a2 + 57) + 1072LL);
  if ( v6 )
    rimValidateFrameTransition(v6, a3);
  return rimDispatchCompleteFrames(a1, a2, *a3);
}
