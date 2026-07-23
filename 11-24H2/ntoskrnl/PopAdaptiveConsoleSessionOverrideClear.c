/*
 * XREFs of PopAdaptiveConsoleSessionOverrideClear @ 0x14075E15C
 * Callers:
 *     PopAdaptiveWnfCallback @ 0x14075E620 (PopAdaptiveWnfCallback.c)
 *     PopAdaptiveGetConsoleSessionState @ 0x1409A2014 (PopAdaptiveGetConsoleSessionState.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     Feature_UnattendedRebootIdleFix__private_IsEnabledDeviceUsageNoInline @ 0x1405D8120 (Feature_UnattendedRebootIdleFix__private_IsEnabledDeviceUsageNoInline.c)
 *     PopDiagTraceAdaptiveOverrideClear @ 0x140753748 (PopDiagTraceAdaptiveOverrideClear.c)
 */

void __fastcall PopAdaptiveConsoleSessionOverrideClear(int a1, int a2)
{
  __int64 v2; // rsi

  v2 = 3LL * a1;
  if ( byte_140F07680[24 * a1] )
  {
    if ( a1 == 1 )
    {
      if ( a2 != 1 )
        return;
      PopAdaptiveBootContext = 0;
      if ( (unsigned int)Feature_UnattendedRebootIdleFix__private_IsEnabledDeviceUsageNoInline() )
        ExQueueWorkItem(&PopAdaptiveUpdateIdleContextWorkItem, DelayedWorkQueue);
    }
    byte_140F07680[8 * v2] = 0;
    PopDiagTraceAdaptiveOverrideClear();
  }
}
