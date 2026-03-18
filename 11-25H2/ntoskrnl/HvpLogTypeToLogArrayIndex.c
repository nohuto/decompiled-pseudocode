/*
 * XREFs of HvpLogTypeToLogArrayIndex @ 0x1409F8638
 * Callers:
 *     HvRecoverFlushProtocolStateFromFiles @ 0x1407CFB7C (HvRecoverFlushProtocolStateFromFiles.c)
 *     CmpFlushHive @ 0x140883A5C (CmpFlushHive.c)
 *     HvSwapLogFiles @ 0x1409F7174 (HvSwapLogFiles.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x1409F7648 (HvTruncateCurrentLogFileIfRequired.c)
 *     HvWriteLogFile @ 0x1409F77F4 (HvWriteLogFile.c)
 *     CmpDoFileSetSizeEx @ 0x1409F8288 (CmpDoFileSetSizeEx.c)
 *     HvpPerformLogFileRecovery @ 0x1409FA6B8 (HvpPerformLogFileRecovery.c)
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
