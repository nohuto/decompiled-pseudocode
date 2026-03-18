/*
 * XREFs of ExpCheckForFreedEnhancedTimer @ 0x1403C0598
 * Callers:
 *     RtlpHpEnvCompactionSchedule @ 0x1402B389C (RtlpHpEnvCompactionSchedule.c)
 *     WdtpArmTimer @ 0x1403BF5C0 (WdtpArmTimer.c)
 *     ExDeleteTimer @ 0x1403BF730 (ExDeleteTimer.c)
 *     ExCancelTimer @ 0x1403C05F0 (ExCancelTimer.c)
 *     EnableFlushTimer @ 0x1403D1370 (EnableFlushTimer.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

char __fastcall ExpCheckForFreedEnhancedTimer(ULONG_PTR BugCheckParameter1)
{
  char result; // al

  result = ExpTimerFreedCookie;
  if ( *(_BYTE *)(BugCheckParameter1 + 152) != ExpTimerFreedCookie )
    KeBugCheckEx(0xC6u, BugCheckParameter1, 1uLL, KeGetCurrentThread()->PreviousMode, 0LL);
  return result;
}
