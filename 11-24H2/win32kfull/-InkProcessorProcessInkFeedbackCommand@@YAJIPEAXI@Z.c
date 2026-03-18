/*
 * XREFs of ?InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z @ 0x1401E222C
 * Callers:
 *     NtUserProcessInkFeedbackCommand @ 0x140244560 (NtUserProcessInkFeedbackCommand.c)
 * Callees:
 *     ?ProcessInkFeedbackCommand@InkProcessor@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1401E2294 (-ProcessInkFeedbackCommand@InkProcessor@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 */

__int64 __fastcall InkProcessorProcessInkFeedbackCommand(__int64 a1, void *a2, unsigned int a3)
{
  unsigned int v5; // ebx
  __int64 v7; // rcx

  v5 = a1;
  if ( (unsigned int)a1 >= 5 )
    return 3221225485LL;
  v7 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 3280);
  if ( v7 )
    return InkProcessor::ProcessInkFeedbackCommand(v7, v5, a2, a3);
  else
    return 3221225473LL;
}
