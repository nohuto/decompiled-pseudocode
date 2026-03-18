/*
 * XREFs of ?ProcessInkFeedbackCommand@InkProcessor@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1401E2294
 * Callers:
 *     ?InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z @ 0x1401E222C (-InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BB10 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BCE8 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?RunForAllProviders@InkFeedbackServer@@AEAAJW4INK_FEEDBACK_COMMAND@@PEBXIP6AJPEAVInkFeedbackProviderBase@@01I@Z@Z @ 0x1401E2338 (-RunForAllProviders@InkFeedbackServer@@AEAAJW4INK_FEEDBACK_COMMAND@@PEBXIP6AJPEAVInkFeedbackProv.c)
 */

__int64 __fastcall InkProcessor::ProcessInkFeedbackCommand(__int64 a1)
{
  int v2; // edi

  v2 = InkFeedbackServer::RunForAllProviders(a1 + 96);
  if ( v2 >= 0 )
  {
    W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1, 0);
    if ( *(_BYTE *)(a1 + 8) )
      v2 = InkFeedbackServer::RunForAllProviders(a1 + 96);
    else
      v2 = -1073741823;
    W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1, 0LL);
  }
  return (unsigned int)v2;
}
