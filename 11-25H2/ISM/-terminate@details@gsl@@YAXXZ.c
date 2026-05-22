/*
 * XREFs of ?terminate@details@gsl@@YAXXZ @ 0x18009BCBC
 * Callers:
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180088DB0 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 *     ??$EnqueueItem@USuperWetInkBallpointPenPoint@@@CSharedCircularQueueProducer@@QEAAXAEBUSuperWetInkBallpointPenPoint@@@Z @ 0x1800AD130 (--$EnqueueItem@USuperWetInkBallpointPenPoint@@@CSharedCircularQueueProducer@@QEAAXAEBUSuperWetIn.c)
 * Callees:
 *     <none>
 */

void __fastcall gsl::details::terminate(gsl::details *this)
{
  _o_terminate(this);
  __debugbreak();
  JUMPOUT(0x18009BCCDLL);
}
