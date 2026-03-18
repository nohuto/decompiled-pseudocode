/*
 * XREFs of RtlRandomEx @ 0x14041CDA0
 * Callers:
 *     EtwpGetPrivateSessionTraceHandle @ 0x14079DCD8 (EtwpGetPrivateSessionTraceHandle.c)
 *     MiInitializePartition @ 0x1407DC8B8 (MiInitializePartition.c)
 *     PopPowerRequestStatsCreateSleepstudyBlocker @ 0x140A19B2C (PopPowerRequestStatsCreateSleepstudyBlocker.c)
 *     MmCreateProcessAddressSpace @ 0x140A47B88 (MmCreateProcessAddressSpace.c)
 *     PspSelectNodeForProcess @ 0x140A743A0 (PspSelectNodeForProcess.c)
 *     VfRandomGetNumber @ 0x140B730FC (VfRandomGetNumber.c)
 * Callees:
 *     ExGenRandom @ 0x14041CDD0 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandomEx(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1LL) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
