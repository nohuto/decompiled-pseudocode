/*
 * XREFs of PopProcessSessionDisplayStateChange @ 0x1409BBD90
 * Callers:
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 *     PopMonitorInvocation @ 0x140AC930C (PopMonitorInvocation.c)
 * Callees:
 *     PopArmIdlePhaseWatchdog @ 0x14090292C (PopArmIdlePhaseWatchdog.c)
 *     TtmIsEnabled @ 0x1409BBDE8 (TtmIsEnabled.c)
 *     PopDisarmIdlePhaseWatchdog @ 0x1409BBE18 (PopDisarmIdlePhaseWatchdog.c)
 *     PopTriggerMonitorPowerEvent @ 0x1409BBE7C (PopTriggerMonitorPowerEvent.c)
 */

__int64 __fastcall PopProcessSessionDisplayStateChange(char a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rcx

  v2 = 0;
  if ( a1 )
    PopDisarmIdlePhaseWatchdog();
  else
    PopArmIdlePhaseWatchdog(a2);
  if ( !(unsigned __int8)TtmIsEnabled() )
  {
    LOBYTE(v5) = a1;
    return (unsigned int)PopTriggerMonitorPowerEvent(v5, a2);
  }
  return v2;
}
