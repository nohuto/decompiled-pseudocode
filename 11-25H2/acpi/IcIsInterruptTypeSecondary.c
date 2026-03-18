/*
 * XREFs of IcIsInterruptTypeSecondary @ 0x1400C0568
 * Callers:
 *     IrqLibUpdateInterruptProperties @ 0x1400A8CE0 (IrqLibUpdateInterruptProperties.c)
 *     IrqArbAddAllocation @ 0x1400A9380 (IrqArbAddAllocation.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1400AA210 (IrqArbpFindSuitableRangeIsa.c)
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1400C110C (ProcessorpFindAffinitizedIdtEntries.c)
 *     ProcessorpFindIdtEntriesApic @ 0x1400C1580 (ProcessorpFindIdtEntriesApic.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

char __fastcall IcIsInterruptTypeSecondary(unsigned int a1)
{
  char result; // al

  result = 0;
  if ( a1 < 0xFFF00000 )
    return HalPrivateDispatchTable[62](0LL, a1);
  return result;
}
