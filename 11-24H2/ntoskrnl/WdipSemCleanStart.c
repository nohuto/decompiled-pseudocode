/*
 * XREFs of WdipSemCleanStart @ 0x1407A0DC0
 * Callers:
 *     WdipSemInitialize @ 0x1407A0498 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x1407A0558 (WdipSemUpdate.c)
 * Callees:
 *     WdipSemLoadConfigInfo @ 0x1407A0F30 (WdipSemLoadConfigInfo.c)
 *     WdipSemLoadScenarioTable @ 0x1407A1B08 (WdipSemLoadScenarioTable.c)
 *     WdipSemShutdown @ 0x1407A2184 (WdipSemShutdown.c)
 *     WdipSemCleanupGroupPolicy @ 0x1407A2928 (WdipSemCleanupGroupPolicy.c)
 *     WdipSemLoadGroupPolicy @ 0x1407A2954 (WdipSemLoadGroupPolicy.c)
 *     WdipSemStartTimeoutCheck @ 0x1407A2BE0 (WdipSemStartTimeoutCheck.c)
 *     WdipSemEnableSemProvider @ 0x1407A3384 (WdipSemEnableSemProvider.c)
 *     WdipSemGetLoggerIds @ 0x140A48AF4 (WdipSemGetLoggerIds.c)
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
