/*
 * XREFs of WheapEtwEnableCallback @ 0x1407C8340
 * Callers:
 *     <none>
 * Callees:
 *     WheaFlushETWEventsDpcWorkerInit @ 0x14065DED4 (WheaFlushETWEventsDpcWorkerInit.c)
 *     WheapProcessWaitingETWEvents @ 0x1407C8690 (WheapProcessWaitingETWEvents.c)
 */

void __fastcall WheapEtwEnableCallback(LPCGUID SourceId, int ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  WheapEventingInitialized = ControlCode;
  if ( ControlCode == 1 )
  {
    WheaFlushETWEventsDpcWorkerInit();
    WheapProcessWaitingETWEvents();
  }
}
