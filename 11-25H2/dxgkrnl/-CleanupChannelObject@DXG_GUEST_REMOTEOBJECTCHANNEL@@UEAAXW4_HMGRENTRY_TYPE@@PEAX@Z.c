/*
 * XREFs of ?CleanupChannelObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@UEAAXW4_HMGRENTRY_TYPE@@PEAX@Z @ 0x1401FFC10
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

NTSTATUS DXG_GUEST_REMOTEOBJECTCHANNEL::CleanupChannelObject()
{
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 236;
  return DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"FALSE", 236LL, 0LL, 0LL, 0LL, 0LL);
}
