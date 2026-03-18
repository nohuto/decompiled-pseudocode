/*
 * XREFs of PopSuspendResumeInvocation @ 0x140A9221C
 * Callers:
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x140740984 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x140747A44 (PopSendSuspendResumeApplicationNotification.c)
 *     PopSendSuspendResumeServiceNotification @ 0x140747B6C (PopSendSuspendResumeServiceNotification.c)
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopSuspendResumeInvocation(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140E67238 )
    return guard_dispatch_icall_no_overrides(a1);
  return result;
}
