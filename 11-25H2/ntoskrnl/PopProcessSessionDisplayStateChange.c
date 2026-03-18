/*
 * XREFs of PopProcessSessionDisplayStateChange @ 0x140963FE0
 * Callers:
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 *     PopMonitorInvocation @ 0x140AC3F70 (PopMonitorInvocation.c)
 * Callees:
 *     TtmIsEnabled @ 0x140964038 (TtmIsEnabled.c)
 *     PopDisarmIdlePhaseWatchdog @ 0x140964068 (PopDisarmIdlePhaseWatchdog.c)
 *     PopTriggerMonitorPowerEvent @ 0x1409640CC (PopTriggerMonitorPowerEvent.c)
 *     PopArmIdlePhaseWatchdog @ 0x140A2BF70 (PopArmIdlePhaseWatchdog.c)
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
