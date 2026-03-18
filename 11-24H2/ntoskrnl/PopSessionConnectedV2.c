/*
 * XREFs of PopSessionConnectedV2 @ 0x14075F844
 * Callers:
 *     PopSessionConnectionChangeV2 @ 0x14075F904 (PopSessionConnectionChangeV2.c)
 * Callees:
 *     PopAdaptiveConsoleSessionOverrideTrigger @ 0x14075F23C (PopAdaptiveConsoleSessionOverrideTrigger.c)
 *     PopDiagTraceSessionStates @ 0x1409BA66C (PopDiagTraceSessionStates.c)
 *     PopSetSessionDisplayStatus @ 0x1409BA88C (PopSetSessionDisplayStatus.c)
 *     PopAdaptiveGetSessionStateUnsafe @ 0x1409BB45C (PopAdaptiveGetSessionStateUnsafe.c)
 */

__int64 __fastcall PopSessionConnectedV2(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx

  v4 = *(_DWORD *)(a2 + 4);
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CONNECTED);
  if ( !v4 )
  {
    PopConsoleSession = 1;
    dword_140F07358 = a1;
  }
  PopSetSessionDisplayStatus(a1, 1LL);
  if ( PopAdaptiveBootContext )
    PopAdaptiveConsoleSessionOverrideTrigger(
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      1,
      2,
      0);
  return PopAdaptiveGetSessionStateUnsafe(a1, a3, a4);
}
