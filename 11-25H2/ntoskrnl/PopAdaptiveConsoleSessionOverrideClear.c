/*
 * XREFs of PopAdaptiveConsoleSessionOverrideClear @ 0x14075279C
 * Callers:
 *     PopAdaptiveWnfCallback @ 0x140752BF0 (PopAdaptiveWnfCallback.c)
 *     PopAdaptiveGetConsoleSessionState @ 0x140963C14 (PopAdaptiveGetConsoleSessionState.c)
 * Callees:
 *     PopDiagTraceAdaptiveOverrideClear @ 0x140749358 (PopDiagTraceAdaptiveOverrideClear.c)
 */

void __fastcall PopAdaptiveConsoleSessionOverrideClear(int a1, int a2)
{
  if ( *((_BYTE *)&unk_140F06D60 + 24 * a1) )
  {
    if ( a1 == 1 )
    {
      if ( a2 != 1 )
        return;
      PopAdaptiveBootContext = 0;
    }
    *((_BYTE *)&unk_140F06D60 + 24 * a1) = 0;
    PopDiagTraceAdaptiveOverrideClear();
  }
}
