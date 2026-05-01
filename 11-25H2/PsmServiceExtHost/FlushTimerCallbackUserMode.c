/*
 * XREFs of FlushTimerCallbackUserMode @ 0x180091830
 * Callers:
 *     <none>
 * Callees:
 *     LookUpTableFlushComplete @ 0x1800640EC (LookUpTableFlushComplete.c)
 *     EnableFlushTimer @ 0x180071CEC (EnableFlushTimer.c)
 *     LookUpTableFlushPartial @ 0x180091880 (LookUpTableFlushPartial.c)
 */

void __fastcall FlushTimerCallbackUserMode(PTP_CALLBACK_INSTANCE Instance, __int64 Context, PTP_TIMER Timer)
{
  if ( *(_BYTE *)(Context + 356) )
  {
    *(_BYTE *)(Context + 356) = 0;
    LookUpTableFlushComplete(Context);
  }
  else
  {
    LookUpTableFlushPartial(Context);
  }
  if ( *(_DWORD *)(Context + 256) )
    EnableFlushTimer(*(struct _TP_TIMER **)(Context + 344), *(_DWORD *)(Context + 352));
}
