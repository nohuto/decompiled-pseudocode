/*
 * XREFs of PopSessionConnected @ 0x140AC8C44
 * Callers:
 *     PopSessionConnectionChange @ 0x140AC8CFC (PopSessionConnectionChange.c)
 * Callees:
 *     Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline @ 0x1405CD1FC (Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline.c)
 *     PopAdaptiveConsoleSessionOverrideTrigger @ 0x14075E1DC (PopAdaptiveConsoleSessionOverrideTrigger.c)
 *     PopDiagTraceSessionStates @ 0x1409A0CBC (PopDiagTraceSessionStates.c)
 *     PopSetSessionDisplayStatus @ 0x1409A0EDC (PopSetSessionDisplayStatus.c)
 *     PopAdaptiveGetSessionStateUnsafe @ 0x1409A1AAC (PopAdaptiveGetSessionStateUnsafe.c)
 */

__int64 __fastcall PopSessionConnected(int a1, __int64 a2, __int64 a3)
{
  Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline();
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CONNECTED, a1, *(unsigned __int8 *)(a2 + 1));
  if ( *(_BYTE *)(a2 + 1) )
  {
    PopConsoleSession = 1;
    dword_140F07678 = a1;
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
