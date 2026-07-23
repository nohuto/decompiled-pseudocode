/*
 * XREFs of ExpTimerSetParametersAreValid @ 0x14044A1DC
 * Callers:
 *     RtlpHpEnvCompactionSchedule @ 0x14035ED20 (RtlpHpEnvCompactionSchedule.c)
 *     EnableFlushTimer @ 0x14044A108 (EnableFlushTimer.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpTimerSetParametersAreValid(__int64 a1)
{
  return !*(_DWORD *)a1 && *(_QWORD *)(a1 + 8) >= -1LL;
}
