/*
 * XREFs of ExpCheckForFreedEnhancedTimer @ 0x14036FA1C
 * Callers:
 *     WdtpArmTimer @ 0x14036F440 (WdtpArmTimer.c)
 *     ExDeleteTimer @ 0x14036F520 (ExDeleteTimer.c)
 *     ExCancelTimer @ 0x14036FA70 (ExCancelTimer.c)
 *     EnableFlushTimer @ 0x1403BB8A8 (EnableFlushTimer.c)
 *     RtlpHpEnvCompactionSchedule @ 0x1403BBC64 (RtlpHpEnvCompactionSchedule.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

char __fastcall ExpCheckForFreedEnhancedTimer(ULONG_PTR BugCheckParameter1)
{
  char result; // al

  result = ExpTimerFreedCookie;
  if ( *(_BYTE *)(BugCheckParameter1 + 152) != ExpTimerFreedCookie )
    KeBugCheckEx(0xC6u, BugCheckParameter1, 1uLL, KeGetCurrentThread()->PreviousMode, 0LL);
  return result;
}
