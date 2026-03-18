/*
 * XREFs of ?ProcessChannelMessage@DXG_GUEST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x140207490
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXG_GUEST_REMOTEOBJECTCHANNEL::ProcessChannelMessage(DXG_GUEST_REMOTEOBJECTCHANNEL *this, void *a2)
{
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 222;
  DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"FALSE", 222LL, 0LL, 0LL, 0LL, 0LL);
  return 0LL;
}
