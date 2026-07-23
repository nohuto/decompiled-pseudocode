/*
 * XREFs of PpmPerfReadFeedback @ 0x1402AE030
 * Callers:
 *     PpmCheckRun @ 0x1402ADDF0 (PpmCheckRun.c)
 * Callees:
 *     PpmPerfControlExecuteAction @ 0x1402AE04C (PpmPerfControlExecuteAction.c)
 */

__int64 PpmPerfReadFeedback()
{
  return PpmPerfControlExecuteAction(PpmPerfControlReadFeedback);
}
