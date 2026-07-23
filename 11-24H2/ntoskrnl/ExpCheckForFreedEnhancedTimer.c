/*
 * XREFs of ExpCheckForFreedEnhancedTimer @ 0x1403AF158
 * Callers:
 *     RtlpHpEnvCompactionSchedule @ 0x14035ED20 (RtlpHpEnvCompactionSchedule.c)
 *     WdtpArmTimer @ 0x1403AE180 (WdtpArmTimer.c)
 *     ExDeleteTimer @ 0x1403AE2F0 (ExDeleteTimer.c)
 *     ExCancelTimer @ 0x1403AF1B0 (ExCancelTimer.c)
 *     EnableFlushTimer @ 0x14044A108 (EnableFlushTimer.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

char __fastcall ExpCheckForFreedEnhancedTimer(ULONG_PTR BugCheckParameter1)
{
  char result; // al

  result = ExpTimerFreedCookie;
  if ( *(_BYTE *)(BugCheckParameter1 + 152) != ExpTimerFreedCookie )
    KeBugCheckEx(0xC6u, BugCheckParameter1, 1uLL, KeGetCurrentThread()->PreviousMode, 0LL);
  return result;
}
