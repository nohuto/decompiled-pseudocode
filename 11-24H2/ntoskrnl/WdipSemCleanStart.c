/*
 * XREFs of WdipSemCleanStart @ 0x1407A0ED0
 * Callers:
 *     WdipSemInitialize @ 0x1407A05A8 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x1407A0668 (WdipSemUpdate.c)
 * Callees:
 *     WdipSemLoadConfigInfo @ 0x1407A1040 (WdipSemLoadConfigInfo.c)
 *     WdipSemLoadScenarioTable @ 0x1407A1C18 (WdipSemLoadScenarioTable.c)
 *     WdipSemShutdown @ 0x1407A2294 (WdipSemShutdown.c)
 *     WdipSemCleanupGroupPolicy @ 0x1407A2A38 (WdipSemCleanupGroupPolicy.c)
 *     WdipSemLoadGroupPolicy @ 0x1407A2A64 (WdipSemLoadGroupPolicy.c)
 *     WdipSemStartTimeoutCheck @ 0x1407A2CF0 (WdipSemStartTimeoutCheck.c)
 *     WdipSemEnableSemProvider @ 0x1407A3494 (WdipSemEnableSemProvider.c)
 *     WdipSemGetLoggerIds @ 0x140A3E8A4 (WdipSemGetLoggerIds.c)
 */

__int64 WdipSemCleanStart()
{
  int LoggerIds; // ebx

  LoggerIds = WdipSemGetLoggerIds();
  if ( LoggerIds >= 0 )
  {
    LoggerIds = WdipSemEnableSemProvider();
    if ( LoggerIds >= 0 )
    {
      LoggerIds = WdipSemLoadConfigInfo();
      if ( LoggerIds >= 0 )
      {
        LoggerIds = WdipSemLoadGroupPolicy();
        if ( LoggerIds >= 0 )
        {
          LoggerIds = WdipSemLoadScenarioTable();
          if ( LoggerIds >= 0 )
            LoggerIds = WdipSemStartTimeoutCheck();
        }
      }
    }
  }
  WdipSemCleanupGroupPolicy();
  if ( LoggerIds < 0 )
    WdipSemShutdown();
  else
    WdipSemEnabled = 1;
  return (unsigned int)LoggerIds;
}
