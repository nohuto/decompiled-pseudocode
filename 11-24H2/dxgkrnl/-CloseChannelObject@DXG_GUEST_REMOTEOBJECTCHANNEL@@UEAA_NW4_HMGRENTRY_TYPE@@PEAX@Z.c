/*
 * XREFs of ?CloseChannelObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@UEAA_NW4_HMGRENTRY_TYPE@@PEAX@Z @ 0x140206380
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

char DXG_GUEST_REMOTEOBJECTCHANNEL::CloseChannelObject()
{
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 248;
  DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"FALSE", 248LL, 0LL, 0LL, 0LL, 0LL);
  return 0;
}
