/*
 * XREFs of PopSuspendResumeInvocation @ 0x140A92D20
 * Callers:
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x14074AD84 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x140751E54 (PopSendSuspendResumeApplicationNotification.c)
 *     PopSendSuspendResumeServiceNotification @ 0x140751F7C (PopSendSuspendResumeServiceNotification.c)
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopSuspendResumeInvocation(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140E67688 )
    return guard_dispatch_icall_no_overrides(a1, qword_140E67688);
  return result;
}
