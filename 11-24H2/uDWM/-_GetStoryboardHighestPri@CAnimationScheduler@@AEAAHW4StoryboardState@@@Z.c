/*
 * XREFs of ?_GetStoryboardHighestPri@CAnimationScheduler@@AEAAHW4StoryboardState@@@Z @ 0x180045D2C
 * Callers:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180045BB0 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     ?_GetHighestPriStoryboardNoRef@CAnimationScheduler@@AEAAPEAVCStoryboard@@W4StoryboardState@@@Z @ 0x1800882B0 (-_GetHighestPriStoryboardNoRef@CAnimationScheduler@@AEAAPEAVCStoryboard@@W4StoryboardState@@@Z.c)
 */

__int64 CAnimationScheduler::_GetStoryboardHighestPri()
{
  __int64 HighestPriStoryboardNoRef; // r10
  __int64 result; // rax

  HighestPriStoryboardNoRef = CAnimationScheduler::_GetHighestPriStoryboardNoRef();
  result = 0LL;
  if ( HighestPriStoryboardNoRef )
    return *(unsigned int *)(HighestPriStoryboardNoRef + 64);
  return result;
}
