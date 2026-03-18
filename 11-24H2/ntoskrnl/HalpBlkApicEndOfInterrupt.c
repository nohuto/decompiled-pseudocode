/*
 * XREFs of HalpBlkApicEndOfInterrupt @ 0x140BDB1D0
 * Callers:
 *     HalpBlkStubInterrupt @ 0x140BDC880 (HalpBlkStubInterrupt.c)
 *     HalpBlkIpiInterrupt @ 0x140BDCA00 (HalpBlkIpiInterrupt.c)
 *     HalpBlkLocalErrorInterrupt @ 0x140BDCAC0 (HalpBlkLocalErrorInterrupt.c)
 *     HalpBlkUnexpectedInterruptCommon @ 0x140BDD600 (HalpBlkUnexpectedInterruptCommon.c)
 * Callees:
 *     HalpBlkApicWrite @ 0x140BDB390 (HalpBlkApicWrite.c)
 */

__int64 HalpBlkApicEndOfInterrupt()
{
  return HalpBlkApicWrite(176LL, 0LL);
}
