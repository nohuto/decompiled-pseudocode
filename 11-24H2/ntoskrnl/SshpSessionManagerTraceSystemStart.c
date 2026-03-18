/*
 * XREFs of SshpSessionManagerTraceSystemStart @ 0x14076760C
 * Callers:
 *     SshpSessionManagerInitialize @ 0x140C34370 (SshpSessionManagerInitialize.c)
 * Callees:
 *     SshpSessionManagerSendControlEvent @ 0x140A70190 (SshpSessionManagerSendControlEvent.c)
 */

__int64 SshpSessionManagerTraceSystemStart()
{
  return SshpSessionManagerSendControlEvent(SLEEPSTUDY_EVT_SYSTEM_STARTED_CONTROL_EVENT, 0LL, 0LL);
}
