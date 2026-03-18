/*
 * XREFs of PpmPerfReadFeedback @ 0x14029FCC0
 * Callers:
 *     PpmCheckRun @ 0x14029FA80 (PpmCheckRun.c)
 * Callees:
 *     PpmPerfControlExecuteAction @ 0x14029FCDC (PpmPerfControlExecuteAction.c)
 */

__int64 PpmPerfReadFeedback()
{
  return PpmPerfControlExecuteAction(PpmPerfControlReadFeedback);
}
