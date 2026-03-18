/*
 * XREFs of SendMsgCleanup @ 0x1C0027580
 * Callers:
 *     xxxRestoreCsrssThreadDesktop @ 0x1C002AB20 (xxxRestoreCsrssThreadDesktop.c)
 *     zzzCancelJournalling @ 0x1C003C590 (zzzCancelJournalling.c)
 * Callees:
 *     xxxReceiverDied @ 0x1C00275E0 (xxxReceiverDied.c)
 *     ?SenderDied@@YAXPEAUtagSMS@@@Z @ 0x1C009DDB4 (-SenderDied@@YAXPEAUtagSMS@@@Z.c)
 */

__int64 SendMsgCleanup()
{
  return gsmsList;
}
