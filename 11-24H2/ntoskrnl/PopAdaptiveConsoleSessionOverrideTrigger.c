/*
 * XREFs of PopAdaptiveConsoleSessionOverrideTrigger @ 0x14075F23C
 * Callers:
 *     PopAdaptiveWnfCallback @ 0x14075F680 (PopAdaptiveWnfCallback.c)
 *     PopSessionConnectedV2 @ 0x14075F844 (PopSessionConnectedV2.c)
 *     PopSessionConnected @ 0x140ACB088 (PopSessionConnected.c)
 * Callees:
 *     PopDiagTraceAdaptiveOverrideTriggered @ 0x1407554F8 (PopDiagTraceAdaptiveOverrideTriggered.c)
 */

void __fastcall PopAdaptiveConsoleSessionOverrideTrigger(__int64 a1, int a2, int a3, int a4)
{
  __int64 v4; // r10

  v4 = 3LL * a2;
  byte_140F07360[8 * v4] = 1;
  *(_QWORD *)&byte_140F07360[8 * v4 + 8] = a1;
  *(_DWORD *)&byte_140F07360[8 * v4 + 16] = a3;
  *(_DWORD *)&byte_140F07360[8 * v4 + 20] = a4;
  PopDiagTraceAdaptiveOverrideTriggered();
}
