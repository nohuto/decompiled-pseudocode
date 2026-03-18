/*
 * XREFs of HalpBlkApicEndOfInterrupt @ 0x140BCA1D0
 * Callers:
 *     HalpBlkStubInterrupt @ 0x140BCB880 (HalpBlkStubInterrupt.c)
 *     HalpBlkIpiInterrupt @ 0x140BCBA00 (HalpBlkIpiInterrupt.c)
 *     HalpBlkLocalErrorInterrupt @ 0x140BCBAC0 (HalpBlkLocalErrorInterrupt.c)
 *     HalpBlkUnexpectedInterruptCommon @ 0x140BCC600 (HalpBlkUnexpectedInterruptCommon.c)
 * Callees:
 *     HalpBlkApicWrite @ 0x140BCA390 (HalpBlkApicWrite.c)
 */

__int64 HalpBlkApicEndOfInterrupt()
{
  return HalpBlkApicWrite(176LL, 0LL);
}
