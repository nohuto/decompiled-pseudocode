/*
 * XREFs of PpmPerfReadFeedback @ 0x140204BA0
 * Callers:
 *     PpmCheckRun @ 0x140204960 (PpmCheckRun.c)
 * Callees:
 *     PpmPerfControlExecuteAction @ 0x140204BBC (PpmPerfControlExecuteAction.c)
 */

__int64 PpmPerfReadFeedback()
{
  return PpmPerfControlExecuteAction(PpmPerfControlReadFeedback);
}
