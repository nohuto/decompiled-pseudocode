/*
 * XREFs of PopAdaptiveConsoleSessionOverrideTrigger @ 0x1407527DC
 * Callers:
 *     PopAdaptiveWnfCallback @ 0x140752BF0 (PopAdaptiveWnfCallback.c)
 *     PopSessionConnected @ 0x140A227C8 (PopSessionConnected.c)
 * Callees:
 *     PopDiagTraceAdaptiveOverrideTriggered @ 0x140749428 (PopDiagTraceAdaptiveOverrideTriggered.c)
 */

void __fastcall PopAdaptiveConsoleSessionOverrideTrigger(__int64 a1, int a2, int a3, int a4)
{
  __int64 v4; // r10

  v4 = 3LL * a2;
  *((_BYTE *)&unk_140F06D60 + 8 * v4) = 1;
  *((_QWORD *)&unk_140F06D60 + v4 + 1) = a1;
  *((_DWORD *)&unk_140F06D60 + 2 * v4 + 4) = a3;
  *((_DWORD *)&unk_140F06D60 + 2 * v4 + 5) = a4;
  PopDiagTraceAdaptiveOverrideTriggered();
}
