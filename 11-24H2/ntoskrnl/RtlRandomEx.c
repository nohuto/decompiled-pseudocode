/*
 * XREFs of RtlRandomEx @ 0x14040A510
 * Callers:
 *     EtwpGetPrivateSessionTraceHandle @ 0x1407AD578 (EtwpGetPrivateSessionTraceHandle.c)
 *     MiInitializePartition @ 0x1407ECD28 (MiInitializePartition.c)
 *     PopPowerRequestStatsCreateSleepstudyBlocker @ 0x140A18E00 (PopPowerRequestStatsCreateSleepstudyBlocker.c)
 *     PspSelectNodeForProcess @ 0x140A6DD70 (PspSelectNodeForProcess.c)
 *     MmCreateProcessAddressSpace @ 0x140AE7AA8 (MmCreateProcessAddressSpace.c)
 *     VfRandomGetNumber @ 0x140B850DC (VfRandomGetNumber.c)
 * Callees:
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandomEx(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1LL) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
