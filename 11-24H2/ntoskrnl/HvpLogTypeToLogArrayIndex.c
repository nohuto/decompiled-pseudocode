/*
 * XREFs of HvpLogTypeToLogArrayIndex @ 0x140981264
 * Callers:
 *     HvRecoverFlushProtocolStateFromFiles @ 0x1407DF454 (HvRecoverFlushProtocolStateFromFiles.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x14097C720 (HvTruncateCurrentLogFileIfRequired.c)
 *     CmpFlushHive @ 0x14097D2B4 (CmpFlushHive.c)
 *     HvWriteLogFile @ 0x14098041C (HvWriteLogFile.c)
 *     CmpDoFileSetSizeEx @ 0x140980EB4 (CmpDoFileSetSizeEx.c)
 *     HvSwapLogFiles @ 0x140982F38 (HvSwapLogFiles.c)
 *     HvpPerformLogFileRecovery @ 0x140AB060C (HvpPerformLogFileRecovery.c)
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
