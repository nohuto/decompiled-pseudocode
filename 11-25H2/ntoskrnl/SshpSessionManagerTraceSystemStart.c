/*
 * XREFs of SshpSessionManagerTraceSystemStart @ 0x140757C4C
 * Callers:
 *     SshpSessionManagerInitialize @ 0x140C230A4 (SshpSessionManagerInitialize.c)
 * Callees:
 *     SshpSessionManagerSendControlEvent @ 0x140A6DF80 (SshpSessionManagerSendControlEvent.c)
 */

__int64 SshpSessionManagerTraceSystemStart()
{
  return SshpSessionManagerSendControlEvent(SLEEPSTUDY_EVT_SYSTEM_STARTED_CONTROL_EVENT, 0LL, 0LL);
}
