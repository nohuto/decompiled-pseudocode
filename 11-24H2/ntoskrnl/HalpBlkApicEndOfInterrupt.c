/*
 * XREFs of HalpBlkApicEndOfInterrupt @ 0x140BDD1D0
 * Callers:
 *     HalpBlkStubInterrupt @ 0x140BDE880 (HalpBlkStubInterrupt.c)
 *     HalpBlkIpiInterrupt @ 0x140BDEA00 (HalpBlkIpiInterrupt.c)
 *     HalpBlkLocalErrorInterrupt @ 0x140BDEAC0 (HalpBlkLocalErrorInterrupt.c)
 *     HalpBlkUnexpectedInterruptCommon @ 0x140BDF600 (HalpBlkUnexpectedInterruptCommon.c)
 * Callees:
 *     HalpBlkApicWrite @ 0x140BDD390 (HalpBlkApicWrite.c)
 */

__int64 HalpBlkApicEndOfInterrupt()
{
  return HalpBlkApicWrite(176LL, 0LL);
}
