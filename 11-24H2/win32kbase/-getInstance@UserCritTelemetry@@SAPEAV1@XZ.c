/*
 * XREFs of ?getInstance@UserCritTelemetry@@SAPEAV1@XZ @ 0x140034540
 * Callers:
 *     EtwTraceAcquiredSharedUserCrit @ 0x140033720 (EtwTraceAcquiredSharedUserCrit.c)
 *     EtwTraceAcquireExclusiveUserCrit @ 0x1400339B0 (EtwTraceAcquireExclusiveUserCrit.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x140033AB0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     EtwTraceReleaseUserCrit @ 0x140034270 (EtwTraceReleaseUserCrit.c)
 * Callees:
 *     <none>
 */

struct UserCritTelemetry *__fastcall UserCritTelemetry::getInstance(__int64 a1)
{
  return (struct UserCritTelemetry *)(W32GetUserSessionState(a1) + 36512);
}
