/*
 * XREFs of PopSuspendResumeInvocation @ 0x140A964F0
 * Callers:
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x14074CA54 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x140753B34 (PopSendSuspendResumeApplicationNotification.c)
 *     PopSendSuspendResumeServiceNotification @ 0x140753C5C (PopSendSuspendResumeServiceNotification.c)
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopSuspendResumeInvocation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140E67518 )
    return guard_dispatch_icall_no_overrides(a1, qword_140E67518, a3, a4);
  return result;
}
