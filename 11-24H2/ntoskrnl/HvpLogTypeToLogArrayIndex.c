/*
 * XREFs of HvpLogTypeToLogArrayIndex @ 0x140969A74
 * Callers:
 *     HvRecoverFlushProtocolStateFromFiles @ 0x1407DF9A4 (HvRecoverFlushProtocolStateFromFiles.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x140964F30 (HvTruncateCurrentLogFileIfRequired.c)
 *     CmpFlushHive @ 0x140965AC4 (CmpFlushHive.c)
 *     HvWriteLogFile @ 0x140968C2C (HvWriteLogFile.c)
 *     CmpDoFileSetSizeEx @ 0x1409696C4 (CmpDoFileSetSizeEx.c)
 *     HvSwapLogFiles @ 0x14096B748 (HvSwapLogFiles.c)
 *     HvpPerformLogFileRecovery @ 0x140AAB57C (HvpPerformLogFileRecovery.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvpLogTypeToLogArrayIndex(int a1)
{
  bool result; // al

  result = 0;
  if ( a1 != 1 )
    return a1 != 4;
  return result;
}
