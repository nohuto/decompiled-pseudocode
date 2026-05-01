/*
 * XREFs of FlushTimerCallbackUserMode @ 0x180091C90
 * Callers:
 *     <none>
 * Callees:
 *     LookUpTableFlushComplete @ 0x18006406C (LookUpTableFlushComplete.c)
 *     EnableFlushTimer @ 0x180071BBC (EnableFlushTimer.c)
 *     LookUpTableFlushPartial @ 0x180091CE0 (LookUpTableFlushPartial.c)
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
