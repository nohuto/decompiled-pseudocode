/*
 * XREFs of ?CloseChannelObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@UEAA_NW4_HMGRENTRY_TYPE@@PEAX@Z @ 0x1401FFC70
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

char DXG_GUEST_REMOTEOBJECTCHANNEL::CloseChannelObject()
{
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 248;
  DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"FALSE", 248LL, 0LL, 0LL, 0LL, 0LL);
  return 0;
}
