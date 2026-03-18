/*
 * XREFs of VfShutdownScheduleWatchdog @ 0x140613F08
 * Callers:
 *     PopGracefulShutdown @ 0x140B5BA88 (PopGracefulShutdown.c)
 * Callees:
 *     ViShutdownScheduleWatchdog @ 0x140B94E00 (ViShutdownScheduleWatchdog.c)
 */

__int64 VfShutdownScheduleWatchdog()
{
  __int64 result; // rax

  result = (unsigned int)VfRuleClasses;
  if ( (VfRuleClasses & 0x10) != 0 )
    return ViShutdownScheduleWatchdog();
  return result;
}
