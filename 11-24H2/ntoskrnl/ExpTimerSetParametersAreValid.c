/*
 * XREFs of ExpTimerSetParametersAreValid @ 0x1403D1F40
 * Callers:
 *     RtlpHpEnvCompactionSchedule @ 0x1402B389C (RtlpHpEnvCompactionSchedule.c)
 *     EnableFlushTimer @ 0x1403D1370 (EnableFlushTimer.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpTimerSetParametersAreValid(__int64 a1)
{
  return !*(_DWORD *)a1 && *(_QWORD *)(a1 + 8) >= -1LL;
}
