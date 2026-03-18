/*
 * XREFs of ExpTimerSetParametersAreValid @ 0x1403BBD44
 * Callers:
 *     EnableFlushTimer @ 0x1403BB8A8 (EnableFlushTimer.c)
 *     RtlpHpEnvCompactionSchedule @ 0x1403BBC64 (RtlpHpEnvCompactionSchedule.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpTimerSetParametersAreValid(__int64 a1)
{
  return !*(_DWORD *)a1 && *(_QWORD *)(a1 + 8) >= -1LL;
}
