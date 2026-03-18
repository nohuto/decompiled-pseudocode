/*
 * XREFs of PopAdaptiveConsoleSessionOverrideClear @ 0x14075F1BC
 * Callers:
 *     PopAdaptiveWnfCallback @ 0x14075F680 (PopAdaptiveWnfCallback.c)
 *     PopAdaptiveGetConsoleSessionState @ 0x1409BB9C4 (PopAdaptiveGetConsoleSessionState.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     Feature_UnattendedRebootIdleFix__private_IsEnabledDeviceUsageNoInline @ 0x1405DAE00 (Feature_UnattendedRebootIdleFix__private_IsEnabledDeviceUsageNoInline.c)
 *     PopDiagTraceAdaptiveOverrideClear @ 0x140755428 (PopDiagTraceAdaptiveOverrideClear.c)
 */

void __fastcall PopAdaptiveConsoleSessionOverrideClear(int a1, int a2)
{
  __int64 v2; // rsi

  v2 = 3LL * a1;
  if ( byte_140F07360[24 * a1] )
  {
    if ( a1 == 1 )
    {
      if ( a2 != 1 )
        return;
      PopAdaptiveBootContext = 0;
      if ( (unsigned int)Feature_UnattendedRebootIdleFix__private_IsEnabledDeviceUsageNoInline() )
        ExQueueWorkItem(&PopAdaptiveUpdateIdleContextWorkItem, DelayedWorkQueue);
    }
    byte_140F07360[8 * v2] = 0;
    PopDiagTraceAdaptiveOverrideClear();
  }
}
