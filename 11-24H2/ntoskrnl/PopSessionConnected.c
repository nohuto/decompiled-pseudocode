/*
 * XREFs of PopSessionConnected @ 0x140ACB088
 * Callers:
 *     PopSessionConnectionChange @ 0x140ACB140 (PopSessionConnectionChange.c)
 * Callees:
 *     Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline @ 0x1405CFA88 (Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline.c)
 *     PopAdaptiveConsoleSessionOverrideTrigger @ 0x14075F23C (PopAdaptiveConsoleSessionOverrideTrigger.c)
 *     PopDiagTraceSessionStates @ 0x1409BA66C (PopDiagTraceSessionStates.c)
 *     PopSetSessionDisplayStatus @ 0x1409BA88C (PopSetSessionDisplayStatus.c)
 *     PopAdaptiveGetSessionStateUnsafe @ 0x1409BB45C (PopAdaptiveGetSessionStateUnsafe.c)
 */

__int64 __fastcall PopSessionConnected(int a1, __int64 a2, __int64 a3)
{
  Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline();
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CONNECTED, a1, *(unsigned __int8 *)(a2 + 1));
  if ( *(_BYTE *)(a2 + 1) )
  {
    PopConsoleSession = 1;
    dword_140F07358 = a1;
  }
  PopSetSessionDisplayStatus(a1, 1, 0);
  if ( PopAdaptiveBootContext )
    PopAdaptiveConsoleSessionOverrideTrigger(
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      1,
      2,
      0);
  return PopAdaptiveGetSessionStateUnsafe(a1, a2 + 8, a3);
}
