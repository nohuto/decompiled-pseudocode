/*
 * XREFs of PopSessionConnected @ 0x140A227C8
 * Callers:
 *     PopSessionConnectionChange @ 0x140A226D0 (PopSessionConnectionChange.c)
 * Callees:
 *     PopAdaptiveConsoleSessionOverrideTrigger @ 0x1407527DC (PopAdaptiveConsoleSessionOverrideTrigger.c)
 *     PopAdaptiveGetSessionStateUnsafe @ 0x1409636AC (PopAdaptiveGetSessionStateUnsafe.c)
 *     PopDiagTraceSessionStates @ 0x14096526C (PopDiagTraceSessionStates.c)
 *     PopSetSessionDisplayStatus @ 0x140A229B4 (PopSetSessionDisplayStatus.c)
 */

__int64 __fastcall PopSessionConnected(unsigned int a1, __int64 a2, __int64 a3)
{
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CONNECTED, a1, *(unsigned __int8 *)(a2 + 1));
  if ( *(_BYTE *)(a2 + 1) )
  {
    PopConsoleSession = 1;
    dword_140F06D58 = a1;
  }
  PopSetSessionDisplayStatus(a1, 1LL, 0LL);
  if ( PopAdaptiveBootContext )
    PopAdaptiveConsoleSessionOverrideTrigger(
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      1,
      2,
      0);
  return PopAdaptiveGetSessionStateUnsafe(a1, a2 + 8, a3);
}
