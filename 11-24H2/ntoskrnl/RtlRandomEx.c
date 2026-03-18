/*
 * XREFs of RtlRandomEx @ 0x14041A510
 * Callers:
 *     EtwpGetPrivateSessionTraceHandle @ 0x1407AD0A8 (EtwpGetPrivateSessionTraceHandle.c)
 *     MiInitializePartition @ 0x1407EC758 (MiInitializePartition.c)
 *     PopPowerRequestStatsCreateSleepstudyBlocker @ 0x140A24E10 (PopPowerRequestStatsCreateSleepstudyBlocker.c)
 *     PspSelectNodeForProcess @ 0x140A74410 (PspSelectNodeForProcess.c)
 *     MmCreateProcessAddressSpace @ 0x140AE61C8 (MmCreateProcessAddressSpace.c)
 *     VfRandomGetNumber @ 0x140B830DC (VfRandomGetNumber.c)
 * Callees:
 *     ExGenRandom @ 0x14041A540 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandomEx(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1LL) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
